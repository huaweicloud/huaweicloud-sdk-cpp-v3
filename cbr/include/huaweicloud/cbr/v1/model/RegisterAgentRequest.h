
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_RegisterAgentRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_RegisterAgentRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/AgentRegisterReq.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  RegisterAgentRequest
    : public ModelBase
{
public:
    RegisterAgentRequest();
    virtual ~RegisterAgentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RegisterAgentRequest members

    /// <summary>
    /// 
    /// </summary>

    AgentRegisterReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AgentRegisterReq& value);


protected:
    AgentRegisterReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RegisterAgentRequest& dereference_from_shared_ptr(std::shared_ptr<RegisterAgentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_RegisterAgentRequest_H_
