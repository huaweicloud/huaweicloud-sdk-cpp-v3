
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateAgentResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateAgentResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/Agent.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  UpdateAgentResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateAgentResponse();
    virtual ~UpdateAgentResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateAgentResponse members

    /// <summary>
    /// 
    /// </summary>

    Agent getAgent() const;
    bool agentIsSet() const;
    void unsetagent();
    void setAgent(const Agent& value);


protected:
    Agent agent_;
    bool agentIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateAgentResponse_H_
