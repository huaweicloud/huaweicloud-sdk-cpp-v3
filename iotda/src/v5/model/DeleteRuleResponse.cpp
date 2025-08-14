

#include "huaweicloud/iotda/v5/model/DeleteRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteRuleResponse::DeleteRuleResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteRuleResponse::~DeleteRuleResponse() = default;

void DeleteRuleResponse::validate()
{
}

web::json::value DeleteRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteRuleResponse::fromJson(const web::json::value& val)
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


std::string DeleteRuleResponse::getBody() const
{
    return body_;
}

void DeleteRuleResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteRuleResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteRuleResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


