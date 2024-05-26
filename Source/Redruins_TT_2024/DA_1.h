// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_1.generated.h"

USTRUCT(BlueprintType)
struct FTestStruct
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    class UDA_2* DataAsset1;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UTexture2D* Texture;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FVector Vector;
};

UCLASS(BlueprintType)
class REDRUINS_TT_2024_API UDA_1 : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Execution")
    FTestStruct TestStructure;
};
