

#include "huaweicloud/projectman/v4/model/ShowScrumIssueSeveritiesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowScrumIssueSeveritiesResponse::ShowScrumIssueSeveritiesResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ShowScrumIssueSeveritiesResponse::~ShowScrumIssueSeveritiesResponse() = default;

void ShowScrumIssueSeveritiesResponse::validate()
{
}

web::json::value ShowScrumIssueSeveritiesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowScrumIssueSeveritiesResponse::fromJson(const web::json::value& val)
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


std::string ShowScrumIssueSeveritiesResponse::getBody() const
{
    return body_;
}

void ShowScrumIssueSeveritiesResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowScrumIssueSeveritiesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowScrumIssueSeveritiesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


