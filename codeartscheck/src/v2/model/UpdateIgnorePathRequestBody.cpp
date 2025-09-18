

#include "huaweicloud/codeartscheck/v2/model/UpdateIgnorePathRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




UpdateIgnorePathRequestBody::UpdateIgnorePathRequestBody()
{
    ignorePathSettingsIsSet_ = false;
}

UpdateIgnorePathRequestBody::~UpdateIgnorePathRequestBody() = default;

void UpdateIgnorePathRequestBody::validate()
{
}

web::json::value UpdateIgnorePathRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ignorePathSettingsIsSet_) {
        val[utility::conversions::to_string_t("ignore_path_settings")] = ModelBase::toJson(ignorePathSettings_);
    }

    return val;
}
bool UpdateIgnorePathRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ignore_path_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ignore_path_settings"));
        if(!fieldValue.is_null())
        {
            std::vector<IgnorePathSettingItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIgnorePathSettings(refVal);
        }
    }
    return ok;
}


std::vector<IgnorePathSettingItem>& UpdateIgnorePathRequestBody::getIgnorePathSettings()
{
    return ignorePathSettings_;
}

void UpdateIgnorePathRequestBody::setIgnorePathSettings(const std::vector<IgnorePathSettingItem>& value)
{
    ignorePathSettings_ = value;
    ignorePathSettingsIsSet_ = true;
}

bool UpdateIgnorePathRequestBody::ignorePathSettingsIsSet() const
{
    return ignorePathSettingsIsSet_;
}

void UpdateIgnorePathRequestBody::unsetignorePathSettings()
{
    ignorePathSettingsIsSet_ = false;
}

}
}
}
}
}


