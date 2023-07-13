
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateAgentRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateAgentRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/AgentUpdateReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  UpdateAgentRequest
    : public ModelBase
{
public:
    UpdateAgentRequest();
    virtual ~UpdateAgentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateAgentRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getAgentId() const;
    bool agentIdIsSet() const;
    void unsetagentId();
    void setAgentId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AgentUpdateReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AgentUpdateReq& value);


protected:
    std::string agentId_;
    bool agentIdIsSet_;
    AgentUpdateReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateAgentRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateAgentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateAgentRequest_H_
