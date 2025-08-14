

#include "huaweicloud/iotda/v5/model/DeleteRuleActionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteRuleActionResponse::DeleteRuleActionResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteRuleActionResponse::~DeleteRuleActionResponse() = default;

void DeleteRuleActionResponse::validate()
{
}

web::json::value DeleteRuleActionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteRuleActionResponse::fromJson(const web::json::value& val)
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


std::string DeleteRuleActionResponse::getBody() const
{
    return body_;
}

void DeleteRuleActionResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteRuleActionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteRuleActionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


