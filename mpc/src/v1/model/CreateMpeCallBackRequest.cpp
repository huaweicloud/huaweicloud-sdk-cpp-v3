

#include "huaweicloud/mpc/v1/model/CreateMpeCallBackRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateMpeCallBackRequest::CreateMpeCallBackRequest()
{
    bodyIsSet_ = false;
}

CreateMpeCallBackRequest::~CreateMpeCallBackRequest() = default;

void CreateMpeCallBackRequest::validate()
{
}

web::json::value CreateMpeCallBackRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateMpeCallBackRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            MpeCallBackReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

MpeCallBackReq CreateMpeCallBackRequest::getBody() const
{
    return body_;
}

void CreateMpeCallBackRequest::setBody(const MpeCallBackReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMpeCallBackRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMpeCallBackRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


