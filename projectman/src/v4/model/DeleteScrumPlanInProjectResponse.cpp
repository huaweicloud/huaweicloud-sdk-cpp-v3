

#include "huaweicloud/projectman/v4/model/DeleteScrumPlanInProjectResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteScrumPlanInProjectResponse::DeleteScrumPlanInProjectResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteScrumPlanInProjectResponse::~DeleteScrumPlanInProjectResponse() = default;

void DeleteScrumPlanInProjectResponse::validate()
{
}

web::json::value DeleteScrumPlanInProjectResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteScrumPlanInProjectResponse::fromJson(const web::json::value& val)
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


std::string DeleteScrumPlanInProjectResponse::getBody() const
{
    return body_;
}

void DeleteScrumPlanInProjectResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteScrumPlanInProjectResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteScrumPlanInProjectResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


