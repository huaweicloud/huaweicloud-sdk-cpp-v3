

#include "huaweicloud/projectman/v4/model/UpdateScrumPlanInProjectResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateScrumPlanInProjectResponse::UpdateScrumPlanInProjectResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpdateScrumPlanInProjectResponse::~UpdateScrumPlanInProjectResponse() = default;

void UpdateScrumPlanInProjectResponse::validate()
{
}

web::json::value UpdateScrumPlanInProjectResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateScrumPlanInProjectResponse::fromJson(const web::json::value& val)
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


std::string UpdateScrumPlanInProjectResponse::getBody() const
{
    return body_;
}

void UpdateScrumPlanInProjectResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateScrumPlanInProjectResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateScrumPlanInProjectResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


