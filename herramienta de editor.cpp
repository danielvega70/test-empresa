#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EditorTool.generated.h"

UCLASS()
class YOURPROJECT_API AEditorTool : public AActor
{
    GENERATED_BODY()

public:
    AEditorTool();

    UFUNCTION(BlueprintCallable, Category = "Editor Tool")
    void ChangeColor(AActor* SelectedActor, FLinearColor NewColor);

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Editor Tool")
    UStaticMeshComponent* MeshComponent;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Editor Tool")
    UMaterialInterface* Material;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Editor Tool")
    FName ColorParameterName;
};
