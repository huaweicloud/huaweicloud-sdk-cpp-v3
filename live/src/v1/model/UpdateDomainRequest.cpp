

#include "huaweicloud/live/v1/model/UpdateDomainRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateDomainRequest::UpdateDomainRequest()
{
    bodyIsSet_ = false;
}

UpdateDomainRequest::~UpdateDomainRequest() = default;

void UpdateDomainRequest::validate()
{
}

web::json::value UpdateDomainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDomainRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LiveDomainModifyReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


LiveDomainModifyReq UpdateDomainRequest::getBody() const
{
    return body_;
}

void UpdateDomainRequest::setBody(const LiveDomainModifyReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDomainRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDomainRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


