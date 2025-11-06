

#include "huaweicloud/codeartsrepo/v3/model/AssociateIssuesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




AssociateIssuesRequest::AssociateIssuesRequest()
{
    bodyIsSet_ = false;
}

AssociateIssuesRequest::~AssociateIssuesRequest() = default;

void AssociateIssuesRequest::validate()
{
}

web::json::value AssociateIssuesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AssociateIssuesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AssociateIssuesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AssociateIssuesRequestBody AssociateIssuesRequest::getBody() const
{
    return body_;
}

void AssociateIssuesRequest::setBody(const AssociateIssuesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateIssuesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateIssuesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


