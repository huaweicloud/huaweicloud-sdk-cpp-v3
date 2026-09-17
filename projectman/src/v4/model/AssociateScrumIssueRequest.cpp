

#include "huaweicloud/projectman/v4/model/AssociateScrumIssueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AssociateScrumIssueRequest::AssociateScrumIssueRequest()
{
    bodyIsSet_ = false;
}

AssociateScrumIssueRequest::~AssociateScrumIssueRequest() = default;

void AssociateScrumIssueRequest::validate()
{
}

web::json::value AssociateScrumIssueRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AssociateScrumIssueRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AssociateIssueRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AssociateIssueRequest AssociateScrumIssueRequest::getBody() const
{
    return body_;
}

void AssociateScrumIssueRequest::setBody(const AssociateIssueRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateScrumIssueRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateScrumIssueRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


