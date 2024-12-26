

#include "huaweicloud/cfw/v1/model/ShowAlarmConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAlarmConfigResponse::ShowAlarmConfigResponse()
{
    alarmConfigsIsSet_ = false;
    dataIsSet_ = false;
}

ShowAlarmConfigResponse::~ShowAlarmConfigResponse() = default;

void ShowAlarmConfigResponse::validate()
{
}

web::json::value ShowAlarmConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alarmConfigsIsSet_) {
        val[utility::conversions::to_string_t("alarm_configs")] = ModelBase::toJson(alarmConfigs_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowAlarmConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alarm_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<AlarmConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<AlarmConfig>& ShowAlarmConfigResponse::getAlarmConfigs()
{
    return alarmConfigs_;
}

void ShowAlarmConfigResponse::setAlarmConfigs(const std::vector<AlarmConfig>& value)
{
    alarmConfigs_ = value;
    alarmConfigsIsSet_ = true;
}

bool ShowAlarmConfigResponse::alarmConfigsIsSet() const
{
    return alarmConfigsIsSet_;
}

void ShowAlarmConfigResponse::unsetalarmConfigs()
{
    alarmConfigsIsSet_ = false;
}

Object ShowAlarmConfigResponse::getData() const
{
    return data_;
}

void ShowAlarmConfigResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowAlarmConfigResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowAlarmConfigResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


