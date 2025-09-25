

#include "huaweicloud/codehub/v4/model/ShowProjectSettingsInheritCfgResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProjectSettingsInheritCfgResponse::ShowProjectSettingsInheritCfgResponse()
{
    bodyIsSet_ = false;
}

ShowProjectSettingsInheritCfgResponse::~ShowProjectSettingsInheritCfgResponse() = default;

void ShowProjectSettingsInheritCfgResponse::validate()
{
}

web::json::value ShowProjectSettingsInheritCfgResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowProjectSettingsInheritCfgResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectSettingsInheritCfgDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ProjectSettingsInheritCfgDto>& ShowProjectSettingsInheritCfgResponse::getBody()
{
    return body_;
}

void ShowProjectSettingsInheritCfgResponse::setBody(const std::vector<ProjectSettingsInheritCfgDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowProjectSettingsInheritCfgResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowProjectSettingsInheritCfgResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


