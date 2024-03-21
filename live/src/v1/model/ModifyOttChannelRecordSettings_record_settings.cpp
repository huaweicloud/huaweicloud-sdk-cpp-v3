

#include "huaweicloud/live/v1/model/ModifyOttChannelRecordSettings_record_settings.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyOttChannelRecordSettings_record_settings::ModifyOttChannelRecordSettings_record_settings()
{
    rollingbufferDuration_ = 0;
    rollingbufferDurationIsSet_ = false;
}

ModifyOttChannelRecordSettings_record_settings::~ModifyOttChannelRecordSettings_record_settings() = default;

void ModifyOttChannelRecordSettings_record_settings::validate()
{
}

web::json::value ModifyOttChannelRecordSettings_record_settings::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rollingbufferDurationIsSet_) {
        val[utility::conversions::to_string_t("rollingbuffer_duration")] = ModelBase::toJson(rollingbufferDuration_);
    }

    return val;
}
bool ModifyOttChannelRecordSettings_record_settings::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rollingbuffer_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rollingbuffer_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRollingbufferDuration(refVal);
        }
    }
    return ok;
}


int32_t ModifyOttChannelRecordSettings_record_settings::getRollingbufferDuration() const
{
    return rollingbufferDuration_;
}

void ModifyOttChannelRecordSettings_record_settings::setRollingbufferDuration(int32_t value)
{
    rollingbufferDuration_ = value;
    rollingbufferDurationIsSet_ = true;
}

bool ModifyOttChannelRecordSettings_record_settings::rollingbufferDurationIsSet() const
{
    return rollingbufferDurationIsSet_;
}

void ModifyOttChannelRecordSettings_record_settings::unsetrollingbufferDuration()
{
    rollingbufferDurationIsSet_ = false;
}

}
}
}
}
}


