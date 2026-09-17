

#include "huaweicloud/projectman/v4/model/CancelScrumAssociateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CancelScrumAssociateRequest::CancelScrumAssociateRequest()
{
    bodyIsSet_ = false;
}

CancelScrumAssociateRequest::~CancelScrumAssociateRequest() = default;

void CancelScrumAssociateRequest::validate()
{
}

web::json::value CancelScrumAssociateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CancelScrumAssociateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CancelAssociateIssueRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CancelAssociateIssueRequest CancelScrumAssociateRequest::getBody() const
{
    return body_;
}

void CancelScrumAssociateRequest::setBody(const CancelAssociateIssueRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CancelScrumAssociateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CancelScrumAssociateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


