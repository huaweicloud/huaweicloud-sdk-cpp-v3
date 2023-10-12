
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckAgentResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckAgentResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/ProtectableAgentStatus.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  CheckAgentResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckAgentResponse();
    virtual ~CheckAgentResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckAgentResponse members

    /// <summary>
    /// 状态列表
    /// </summary>

    std::vector<ProtectableAgentStatus>& getAgentStatus();
    bool agentStatusIsSet() const;
    void unsetagentStatus();
    void setAgentStatus(const std::vector<ProtectableAgentStatus>& value);


protected:
    std::vector<ProtectableAgentStatus> agentStatus_;
    bool agentStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckAgentResponse_H_
