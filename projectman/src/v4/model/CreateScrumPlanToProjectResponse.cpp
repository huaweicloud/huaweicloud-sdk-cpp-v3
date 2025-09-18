

#include "huaweicloud/projectman/v4/model/CreateScrumPlanToProjectResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateScrumPlanToProjectResponse::CreateScrumPlanToProjectResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CreateScrumPlanToProjectResponse::~CreateScrumPlanToProjectResponse() = default;

void CreateScrumPlanToProjectResponse::validate()
{
}

web::json::value CreateScrumPlanToProjectResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateScrumPlanToProjectResponse::fromJson(const web::json::value& val)
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


std::string CreateScrumPlanToProjectResponse::getBody() const
{
    return body_;
}

void CreateScrumPlanToProjectResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateScrumPlanToProjectResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateScrumPlanToProjectResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


