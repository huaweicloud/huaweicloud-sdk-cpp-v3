

#include "huaweicloud/projectman/v4/model/AssociateIssuesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AssociateIssuesResponse::AssociateIssuesResponse()
{
    bodyIsSet_ = false;
}

AssociateIssuesResponse::~AssociateIssuesResponse() = default;

void AssociateIssuesResponse::validate()
{
}

web::json::value AssociateIssuesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AssociateIssuesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<AssociateIpdIssuesResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<AssociateIpdIssuesResp>& AssociateIssuesResponse::getBody()
{
    return body_;
}

void AssociateIssuesResponse::setBody(const std::vector<AssociateIpdIssuesResp>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateIssuesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateIssuesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


