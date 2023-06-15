
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ProtectableAgentReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ProtectableAgentReq_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/ProtectableAgentStatusResource.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ProtectableAgentReq
    : public ModelBase
{
public:
    ProtectableAgentReq();
    virtual ~ProtectableAgentReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ProtectableAgentReq members

    /// <summary>
    /// 查询参数列表
    /// </summary>

    std::vector<ProtectableAgentStatusResource>& getAgentStatus();
    bool agentStatusIsSet() const;
    void unsetagentStatus();
    void setAgentStatus(const std::vector<ProtectableAgentStatusResource>& value);


protected:
    std::vector<ProtectableAgentStatusResource> agentStatus_;
    bool agentStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ProtectableAgentReq_H_
