// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_MoveToTarget.generated.h"

/**
 * 
 */
UCLASS()
class OPENFIRE_API UBTTask_MoveToTarget : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	virtual void OnGameplayTaskActivated(UGameplayTask& Task) override {}

	virtual void OnGameplayTaskDeactivated(UGameplayTask& Task) override {}
};
