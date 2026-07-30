
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeResource_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeResource_H_


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
/// 节点资源量。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeResource
    : public ModelBase
{
public:
    NodeResource();
    virtual ~NodeResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeResource members

    /// <summary>
    /// **参数解释**：节点的CPU核心数量。 **取值范围**：不涉及。
    /// </summary>

    std::string getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的内存大小。以Gi为单位。 **取值范围**：不涉及。
    /// </summary>

    std::string getMemory() const;
    bool memoryIsSet() const;
    void unsetmemory();
    void setMemory(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的GPU卡数。 **取值范围**：不涉及。
    /// </summary>

    std::string getNvidiaComGpu() const;
    bool nvidiaComGpuIsSet() const;
    void unsetnvidiaComGpu();
    void setNvidiaComGpu(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的snt3型NPU卡数量。 **取值范围**：不涉及。
    /// </summary>

    std::string getHuaweiComAscendSnt3() const;
    bool huaweiComAscendSnt3IsSet() const;
    void unsethuaweiComAscendSnt3();
    void setHuaweiComAscendSnt3(const std::string& value);

    /// <summary>
    /// **参数解释**：节点的snt9型NPU卡数量。 **取值范围**：不涉及。
    /// </summary>

    std::string getHuaweiComAscendSnt9() const;
    bool huaweiComAscendSnt9IsSet() const;
    void unsethuaweiComAscendSnt9();
    void setHuaweiComAscendSnt9(const std::string& value);


protected:
    std::string cpu_;
    bool cpuIsSet_;
    std::string memory_;
    bool memoryIsSet_;
    std::string nvidiaComGpu_;
    bool nvidiaComGpuIsSet_;
    std::string huaweiComAscendSnt3_;
    bool huaweiComAscendSnt3IsSet_;
    std::string huaweiComAscendSnt9_;
    bool huaweiComAscendSnt9IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeResource_H_
