
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckAgentRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckAgentRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/ProtectableAgentReq.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  CheckAgentRequest
    : public ModelBase
{
public:
    CheckAgentRequest();
    virtual ~CheckAgentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckAgentRequest members

    /// <summary>
    /// 
    /// </summary>

    ProtectableAgentReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ProtectableAgentReq& value);


protected:
    ProtectableAgentReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CheckAgentRequest& dereference_from_shared_ptr(std::shared_ptr<CheckAgentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckAgentRequest_H_
