// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ShopItemTooltipWidget.generated.h"

UCLASS(Abstract, meta=(Category="UI", DisableNativeTick))
class SHOPUI_API UShopItemTooltipWidget : public UCommonUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle ConfirmTransactionActionData;

	UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle IncreaseItemNumberActionData;

	UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle DecreaseItemNumberActionData;

	virtual void NativeOnInitialized() override;

	UFUNCTION(BlueprintImplementableEvent)
	void HandleTransaction();

	UFUNCTION(BlueprintImplementableEvent)
	void HandleIncreaseItemNumber();

	UFUNCTION(BlueprintImplementableEvent)
	void HandleDecreaseItemNumber();

	FUIActionBindingHandle TransactionHandle;
	FUIActionBindingHandle IncreaseHandle;
	FUIActionBindingHandle DecreaseHandle;
};
