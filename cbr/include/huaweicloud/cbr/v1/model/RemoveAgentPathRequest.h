
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_RemoveAgentPathRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_RemoveAgentPathRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/AgentRemovePathReq.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  RemoveAgentPathRequest
    : public ModelBase
{
public:
    RemoveAgentPathRequest();
    virtual ~RemoveAgentPathRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemoveAgentPathRequest members

    /// <summary>
    /// 客户端ID
    /// </summary>

    std::string getAgentId() const;
    bool agentIdIsSet() const;
    void unsetagentId();
    void setAgentId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AgentRemovePathReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AgentRemovePathReq& value);


protected:
    std::string agentId_;
    bool agentIdIsSet_;
    AgentRemovePathReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RemoveAgentPathRequest& dereference_from_shared_ptr(std::shared_ptr<RemoveAgentPathRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_RemoveAgentPathRequest_H_
