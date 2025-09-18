

#include "huaweicloud/projectman/v4/model/ShowScrumPlansByConditionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowScrumPlansByConditionResponse::ShowScrumPlansByConditionResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ShowScrumPlansByConditionResponse::~ShowScrumPlansByConditionResponse() = default;

void ShowScrumPlansByConditionResponse::validate()
{
}

web::json::value ShowScrumPlansByConditionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowScrumPlansByConditionResponse::fromJson(const web::json::value& val)
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


std::string ShowScrumPlansByConditionResponse::getBody() const
{
    return body_;
}

void ShowScrumPlansByConditionResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowScrumPlansByConditionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowScrumPlansByConditionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


