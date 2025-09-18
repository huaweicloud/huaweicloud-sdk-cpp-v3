

#include "huaweicloud/codeartscheck/v2/model/ListTaskRulesetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ListTaskRulesetResponse::ListTaskRulesetResponse()
{
    bodyIsSet_ = false;
}

ListTaskRulesetResponse::~ListTaskRulesetResponse() = default;

void ListTaskRulesetResponse::validate()
{
}

web::json::value ListTaskRulesetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListTaskRulesetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskRulesetInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<TaskRulesetInfo>& ListTaskRulesetResponse::getBody()
{
    return body_;
}

void ListTaskRulesetResponse::setBody(const std::vector<TaskRulesetInfo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTaskRulesetResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTaskRulesetResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


