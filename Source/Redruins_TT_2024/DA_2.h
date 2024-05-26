// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_2.generated.h"

UENUM(BlueprintType)
enum class EEnumeration
{
    value_true,
    value_false,
    value_n
};

UCLASS(BlueprintType)
class REDRUINS_TT_2024_API UDA_2 : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
    EEnumeration Enumeration;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General", meta = (EditCondition = "Enumeration==EEnumeration::value_true", EditConditionHides))
    class UDA_1* DataAsset1;
};
