
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NotebookCustomSpecRep_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NotebookCustomSpecRep_H_


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
/// **参数描述**：CPU、GPU专属池下，用户指定自定义规格的响应体信息
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NotebookCustomSpecRep
    : public ModelBase
{
public:
    NotebookCustomSpecRep();
    virtual ~NotebookCustomSpecRep();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NotebookCustomSpecRep members

    /// <summary>
    /// **参数描述**：实例申请的GPU卡数。 **取值范围**：不涉及。
    /// </summary>

    float getGpu() const;
    bool gpuIsSet() const;
    void unsetgpu();
    void setGpu(float value);

    /// <summary>
    /// **参数描述**：实例申请的GPU加速卡类型。 **取值范围**：不涉及。
    /// </summary>

    std::string getGpuType() const;
    bool gpuTypeIsSet() const;
    void unsetgpuType();
    void setGpuType(const std::string& value);

    /// <summary>
    /// **参数描述**：实例申请的CPU核数大小。 **取值范围**：整数部分最多10位，小数部分最多2位，且数值不得小于0.4。
    /// </summary>

    float getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(float value);

    /// <summary>
    /// **参数描述**：实例申请的内存大小。 **取值范围**：必须是整数，整数部分最多10位，且数值不得小于513。
    /// </summary>

    float getMemory() const;
    bool memoryIsSet() const;
    void unsetmemory();
    void setMemory(float value);

    /// <summary>
    /// **参数描述**：实例申请的CPU架构。 **取值范围**：枚举类型，取值如下：  - X86_64：x86架构 - AARCH64：ARM架构
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);

    /// <summary>
    /// **参数描述**：实例申请的规格类型。 **取值范围**：枚举类型，取值如下：  - CPU：CPU规格。 - GPU：GPU规格。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**：实例选择的目标资源池节点实例规格。 **取值范围**：不涉及。
    /// </summary>

    std::string getResourceFlavor() const;
    bool resourceFlavorIsSet() const;
    void unsetresourceFlavor();
    void setResourceFlavor(const std::string& value);


protected:
    float gpu_;
    bool gpuIsSet_;
    std::string gpuType_;
    bool gpuTypeIsSet_;
    float cpu_;
    bool cpuIsSet_;
    float memory_;
    bool memoryIsSet_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NotebookCustomSpecRep_H_
