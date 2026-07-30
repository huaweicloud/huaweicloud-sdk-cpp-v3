
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NotebookCustomSpec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NotebookCustomSpec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数描述**：自定义规格参数信息。 **约束限制**：CPU、GPU专属池下，支持的自定义规格参数，此字段与请求体中的flavor字段不可同时填写。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NotebookCustomSpec
    : public ModelBase
{
public:
    NotebookCustomSpec();
    virtual ~NotebookCustomSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NotebookCustomSpec members

    /// <summary>
    /// **参数描述**：实例申请的GPU卡数。 **约束限制**：CPU专属池场景下无此字段，GPU专属池场景必填。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    float getGpu() const;
    bool gpuIsSet() const;
    void unsetgpu();
    void setGpu(float value);

    /// <summary>
    /// **参数描述**：实例申请的CPU核数大小。 **约束限制**：CPU/GPU专属池场景下自定义规格必填。 **取值范围**：整数部分最多10位，小数部分最多2位，且数值不得小于0.4。 **默认取值**：不涉及。
    /// </summary>

    float getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(float value);

    /// <summary>
    /// **参数描述**：实例申请的内存大小。 **约束限制**：CPU/GPU专属池场景下自定义规格必填。 **取值范围**：必须是整数，整数部分最多10位，且数值不得小于513。 **默认取值**：不涉及。
    /// </summary>

    float getMemory() const;
    bool memoryIsSet() const;
    void unsetmemory();
    void setMemory(float value);

    /// <summary>
    /// **参数描述**：实例申请的GPU加速卡类型。 **约束限制**：CPU专属池场景下无此字段，GPU专属池场景下必填。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getGpuType() const;
    bool gpuTypeIsSet() const;
    void unsetgpuType();
    void setGpuType(const std::string& value);

    /// <summary>
    /// **参数描述**：实例申请的CPU架构。 **约束限制**：CPU/GPU专属池场景下自定义规格必填。 **取值范围**：枚举类型，取值如下： - X86_64：x86架构 - AARCH64：ARM架构  **默认取值**：不涉及。
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);

    /// <summary>
    /// **参数描述**：实例申请的规格类型。 **约束限制**：CPU/GPU专属池场景下自定义规格必填。 **取值范围**：枚举类型，取值如下： - CPU：CPU规格。 - GPU：GPU规格。  **默认取值**：不涉及。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**：实例选择的目标资源池节点实例规格。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getResourceFlavor() const;
    bool resourceFlavorIsSet() const;
    void unsetresourceFlavor();
    void setResourceFlavor(const std::string& value);


protected:
    float gpu_;
    bool gpuIsSet_;
    float cpu_;
    bool cpuIsSet_;
    float memory_;
    bool memoryIsSet_;
    std::string gpuType_;
    bool gpuTypeIsSet_;
    std::string arch_;
    bool archIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string resourceFlavor_;
    bool resourceFlavorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NotebookCustomSpec_H_
