

#include "huaweicloud/smn/v2/model/UpdateApplicationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateApplicationRequest::UpdateApplicationRequest()
{
    applicationUrn_ = "";
    applicationUrnIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateApplicationRequest::~UpdateApplicationRequest() = default;

void UpdateApplicationRequest::validate()
{
}

web::json::value UpdateApplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationUrnIsSet_) {
        val[utility::conversions::to_string_t("application_urn")] = ModelBase::toJson(applicationUrn_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateApplicationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateApplicationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateApplicationRequest::getApplicationUrn() const
{
    return applicationUrn_;
}

void UpdateApplicationRequest::setApplicationUrn(const std::string& value)
{
    applicationUrn_ = value;
    applicationUrnIsSet_ = true;
}

bool UpdateApplicationRequest::applicationUrnIsSet() const
{
    return applicationUrnIsSet_;
}

void UpdateApplicationRequest::unsetapplicationUrn()
{
    applicationUrnIsSet_ = false;
}

UpdateApplicationRequestBody UpdateApplicationRequest::getBody() const
{
    return body_;
}

void UpdateApplicationRequest::setBody(const UpdateApplicationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateApplicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateApplicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


