

#include "huaweicloud/cpcs/v1/model/AssociateAppsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AssociateAppsRequest::AssociateAppsRequest()
{
    bodyIsSet_ = false;
}

AssociateAppsRequest::~AssociateAppsRequest() = default;

void AssociateAppsRequest::validate()
{
}

web::json::value AssociateAppsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AssociateAppsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AssociateAppsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AssociateAppsRequestBody AssociateAppsRequest::getBody() const
{
    return body_;
}

void AssociateAppsRequest::setBody(const AssociateAppsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateAppsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateAppsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


