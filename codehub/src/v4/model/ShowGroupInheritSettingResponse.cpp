

#include "huaweicloud/codehub/v4/model/ShowGroupInheritSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowGroupInheritSettingResponse::ShowGroupInheritSettingResponse()
{
    bodyIsSet_ = false;
}

ShowGroupInheritSettingResponse::~ShowGroupInheritSettingResponse() = default;

void ShowGroupInheritSettingResponse::validate()
{
}

web::json::value ShowGroupInheritSettingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowGroupInheritSettingResponse::fromJson(const web::json::value& val)
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


std::vector<ProjectSettingsInheritCfgDto>& ShowGroupInheritSettingResponse::getBody()
{
    return body_;
}

void ShowGroupInheritSettingResponse::setBody(const std::vector<ProjectSettingsInheritCfgDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowGroupInheritSettingResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowGroupInheritSettingResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


