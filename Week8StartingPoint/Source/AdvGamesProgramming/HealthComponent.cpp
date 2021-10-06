// Fill out your copyright notice in the Description page of Project Settings.
#include "AIManager.h"
#include "EngineUtils.h"
#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	MaxHealth = 100.0f;

	for (TObjectIterator<AAIManager> Itr; Itr; ++Itr)
	{
		if (Itr->IsA(AAIManager::StaticClass()))
		{
			Manager = *Itr;
		}
	}
	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::OnTakeDamage(float Damage)
{
	CurrentHealth -= Damage;
		if (CurrentHealth <= 0.0f)
		{
			CurrentHealth = 0;
			OnDeath();
		}
}

void UHealthComponent::OnDeath()
{
	if (Manager) 
	{
		Manager->ReduceEnemyEntities();
	}
}

float UHealthComponent::HealthPercentageRemaining()
{
	return CurrentHealth / MaxHealth * 100.0f;
}


