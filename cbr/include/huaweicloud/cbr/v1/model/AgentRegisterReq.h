
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_AgentRegisterReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_AgentRegisterReq_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/AgentRegister.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  AgentRegisterReq
    : public ModelBase
{
public:
    AgentRegisterReq();
    virtual ~AgentRegisterReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AgentRegisterReq members

    /// <summary>
    /// 
    /// </summary>

    AgentRegister getAgent() const;
    bool agentIsSet() const;
    void unsetagent();
    void setAgent(const AgentRegister& value);


protected:
    AgentRegister agent_;
    bool agentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_AgentRegisterReq_H_
