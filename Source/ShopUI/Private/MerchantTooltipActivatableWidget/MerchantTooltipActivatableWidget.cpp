// Fill out your copyright notice in the Description page of Project Settings.


#include "MerchantTooltipActivatableWidget/MerchantTooltipActivatableWidget.h"
#include "Input/CommonUIInputTypes.h"

void UMerchantTooltipActivatableWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	Super::NativeOnInitialized();

	TransactionHandle = RegisterUIActionBinding(FBindUIActionArgs(ConfirmTransactionActionData,true, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleTransaction)));
	IncreaseHandle = RegisterUIActionBinding(FBindUIActionArgs(IncreaseItemNumberActionData,true, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleIncreaseItemNumber)));
	DecreaseHandle = RegisterUIActionBinding(FBindUIActionArgs(DecreaseItemNumberActionData,true, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleDecreaseItemNumber)));
}
