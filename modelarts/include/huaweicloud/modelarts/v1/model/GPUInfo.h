
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GPUInfo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GPUInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  GPUInfo
    : public ModelBase
{
public:
    GPUInfo();
    virtual ~GPUInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GPUInfo members

    /// <summary>
    /// **参数解释**：GPU卡数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getGpu() const;
    bool gpuIsSet() const;
    void unsetgpu();
    void setGpu(int32_t value);

    /// <summary>
    /// **参数解释**：GPU内存。 **取值范围**：不涉及。
    /// </summary>

    std::string getGpuMemory() const;
    bool gpuMemoryIsSet() const;
    void unsetgpuMemory();
    void setGpuMemory(const std::string& value);

    /// <summary>
    /// **参数解释**：GPU类型。 **取值范围**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    int32_t gpu_;
    bool gpuIsSet_;
    std::string gpuMemory_;
    bool gpuMemoryIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GPUInfo_H_
