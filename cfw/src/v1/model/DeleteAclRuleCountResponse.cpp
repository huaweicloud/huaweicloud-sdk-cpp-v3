

#include "huaweicloud/cfw/v1/model/DeleteAclRuleCountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteAclRuleCountResponse::DeleteAclRuleCountResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteAclRuleCountResponse::~DeleteAclRuleCountResponse() = default;

void DeleteAclRuleCountResponse::validate()
{
}

web::json::value DeleteAclRuleCountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteAclRuleCountResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteAclRuleCountResponse::getBody() const
{
    return body_;
}

void DeleteAclRuleCountResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAclRuleCountResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAclRuleCountResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


