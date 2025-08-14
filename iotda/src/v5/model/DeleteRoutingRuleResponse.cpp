

#include "huaweicloud/iotda/v5/model/DeleteRoutingRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteRoutingRuleResponse::DeleteRoutingRuleResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteRoutingRuleResponse::~DeleteRoutingRuleResponse() = default;

void DeleteRoutingRuleResponse::validate()
{
}

web::json::value DeleteRoutingRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteRoutingRuleResponse::fromJson(const web::json::value& val)
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


std::string DeleteRoutingRuleResponse::getBody() const
{
    return body_;
}

void DeleteRoutingRuleResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteRoutingRuleResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteRoutingRuleResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


