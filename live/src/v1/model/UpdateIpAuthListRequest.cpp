

#include "huaweicloud/live/v1/model/UpdateIpAuthListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateIpAuthListRequest::UpdateIpAuthListRequest()
{
    bodyIsSet_ = false;
}

UpdateIpAuthListRequest::~UpdateIpAuthListRequest() = default;

void UpdateIpAuthListRequest::validate()
{
}

web::json::value UpdateIpAuthListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateIpAuthListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IPAuthInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


IPAuthInfo UpdateIpAuthListRequest::getBody() const
{
    return body_;
}

void UpdateIpAuthListRequest::setBody(const IPAuthInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateIpAuthListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateIpAuthListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


