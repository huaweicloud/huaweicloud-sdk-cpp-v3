
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_AddAgentPathRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_AddAgentPathRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/AgentAddPathReq.h>
#include <string>

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
class HUAWEICLOUD_CBR_V1_EXPORT  AddAgentPathRequest
    : public ModelBase
{
public:
    AddAgentPathRequest();
    virtual ~AddAgentPathRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddAgentPathRequest members

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

    AgentAddPathReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AgentAddPathReq& value);


protected:
    std::string agentId_;
    bool agentIdIsSet_;
    AgentAddPathReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddAgentPathRequest& dereference_from_shared_ptr(std::shared_ptr<AddAgentPathRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_AddAgentPathRequest_H_
