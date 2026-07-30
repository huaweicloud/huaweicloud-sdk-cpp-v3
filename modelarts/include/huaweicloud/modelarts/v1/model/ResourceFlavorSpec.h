
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorSpec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorSpec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ResourceFlavorSpec_gpu.h>
#include <huaweicloud/modelarts/v1/model/ResourceFlavorSpec_npu.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/ResourceFlavorSpec_dataVolume.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源规格描述信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResourceFlavorSpec
    : public ModelBase
{
public:
    ResourceFlavorSpec();
    virtual ~ResourceFlavorSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceFlavorSpec members

    /// <summary>
    /// **参数解释**：资源规格类型。 **取值范围**：可选值如下： - Dedicate：物理资源规格。物理资源规格可以创建节点资源。 [- Logical：逻辑资源规格。](tag:hcso)
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：资源规格实例的计算架构。 **取值范围**：可选值如下： - x86：x86架构。 - arm64：ARM架构。
    /// </summary>

    std::string getCpuArch() const;
    bool cpuArchIsSet() const;
    void unsetcpuArch();
    void setCpuArch(const std::string& value);

    /// <summary>
    /// **参数解释**：资源规格实例的CPU核心数量。 **取值范围**：不涉及。
    /// </summary>

    std::string getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const std::string& value);

    /// <summary>
    /// **参数解释**：资源规格实例的内存大小。以Gi为单位。 **取值范围**：不涉及。
    /// </summary>

    std::string getMemory() const;
    bool memoryIsSet() const;
    void unsetmemory();
    void setMemory(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceFlavorSpec_gpu getGpu() const;
    bool gpuIsSet() const;
    void unsetgpu();
    void setGpu(const ResourceFlavorSpec_gpu& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceFlavorSpec_npu getNpu() const;
    bool npuIsSet() const;
    void unsetnpu();
    void setNpu(const ResourceFlavorSpec_npu& value);

    /// <summary>
    /// **参数解释**：资源规格实例的存储资源信息。
    /// </summary>

    std::vector<ResourceFlavorSpec_dataVolume>& getDataVolume();
    bool dataVolumeIsSet() const;
    void unsetdataVolume();
    void setDataVolume(const std::vector<ResourceFlavorSpec_dataVolume>& value);

    /// <summary>
    /// **参数解释**：资源规格支持的计费模式。
    /// </summary>

    std::vector<int32_t>& getBillingModes();
    bool billingModesIsSet() const;
    void unsetbillingModes();
    void setBillingModes(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释**：资源规格计费码。 **取值范围**：不涉及。
    /// </summary>

    std::string getBillingCode() const;
    bool billingCodeIsSet() const;
    void unsetbillingCode();
    void setBillingCode(const std::string& value);

    /// <summary>
    /// **参数解释**：资源规格支持的作业类型列表。
    /// </summary>

    std::vector<std::string>& getJobFlavors();
    bool jobFlavorsIsSet() const;
    void unsetjobFlavors();
    void setJobFlavors(const std::vector<std::string>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string cpuArch_;
    bool cpuArchIsSet_;
    std::string cpu_;
    bool cpuIsSet_;
    std::string memory_;
    bool memoryIsSet_;
    ResourceFlavorSpec_gpu gpu_;
    bool gpuIsSet_;
    ResourceFlavorSpec_npu npu_;
    bool npuIsSet_;
    std::vector<ResourceFlavorSpec_dataVolume> dataVolume_;
    bool dataVolumeIsSet_;
    std::vector<int32_t> billingModes_;
    bool billingModesIsSet_;
    std::string billingCode_;
    bool billingCodeIsSet_;
    std::vector<std::string> jobFlavors_;
    bool jobFlavorsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorSpec_H_
