// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPawn.h"

AEnemyPawn::AEnemyPawn() {
	IsDead = false;
}

void AEnemyPawn::Hunt()
{

	State = EEnemyState::Default;

	StateChangedEvent.Broadcast(State);

}

void AEnemyPawn::Idle()
{

	State = EEnemyState::Idle;

	StateChangedEvent.Broadcast(State);

}
