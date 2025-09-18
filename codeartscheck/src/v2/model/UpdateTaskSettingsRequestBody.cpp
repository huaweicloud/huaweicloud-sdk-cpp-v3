

#include "huaweicloud/codeartscheck/v2/model/UpdateTaskSettingsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




UpdateTaskSettingsRequestBody::UpdateTaskSettingsRequestBody()
{
    taskAdvancedSettingsIsSet_ = false;
}

UpdateTaskSettingsRequestBody::~UpdateTaskSettingsRequestBody() = default;

void UpdateTaskSettingsRequestBody::validate()
{
}

web::json::value UpdateTaskSettingsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskAdvancedSettingsIsSet_) {
        val[utility::conversions::to_string_t("task_advanced_settings")] = ModelBase::toJson(taskAdvancedSettings_);
    }

    return val;
}
bool UpdateTaskSettingsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_advanced_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_advanced_settings"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskAdvancedSettingsItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskAdvancedSettings(refVal);
        }
    }
    return ok;
}


std::vector<TaskAdvancedSettingsItem>& UpdateTaskSettingsRequestBody::getTaskAdvancedSettings()
{
    return taskAdvancedSettings_;
}

void UpdateTaskSettingsRequestBody::setTaskAdvancedSettings(const std::vector<TaskAdvancedSettingsItem>& value)
{
    taskAdvancedSettings_ = value;
    taskAdvancedSettingsIsSet_ = true;
}

bool UpdateTaskSettingsRequestBody::taskAdvancedSettingsIsSet() const
{
    return taskAdvancedSettingsIsSet_;
}

void UpdateTaskSettingsRequestBody::unsettaskAdvancedSettings()
{
    taskAdvancedSettingsIsSet_ = false;
}

}
}
}
}
}


