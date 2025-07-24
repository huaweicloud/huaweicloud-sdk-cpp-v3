

#include "huaweicloud/cloudtest/v1/model/SaveTaskSettingRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SaveTaskSettingRequestBody::SaveTaskSettingRequestBody()
{
    maxRunningTime_ = 0;
    maxRunningTimeIsSet_ = false;
    isLongRun_ = "";
    isLongRunIsSet_ = false;
}

SaveTaskSettingRequestBody::~SaveTaskSettingRequestBody() = default;

void SaveTaskSettingRequestBody::validate()
{
}

web::json::value SaveTaskSettingRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxRunningTimeIsSet_) {
        val[utility::conversions::to_string_t("max_running_time")] = ModelBase::toJson(maxRunningTime_);
    }
    if(isLongRunIsSet_) {
        val[utility::conversions::to_string_t("is_long_run")] = ModelBase::toJson(isLongRun_);
    }

    return val;
}
bool SaveTaskSettingRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("max_running_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_running_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxRunningTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_long_run"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_long_run"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLongRun(refVal);
        }
    }
    return ok;
}


int32_t SaveTaskSettingRequestBody::getMaxRunningTime() const
{
    return maxRunningTime_;
}

void SaveTaskSettingRequestBody::setMaxRunningTime(int32_t value)
{
    maxRunningTime_ = value;
    maxRunningTimeIsSet_ = true;
}

bool SaveTaskSettingRequestBody::maxRunningTimeIsSet() const
{
    return maxRunningTimeIsSet_;
}

void SaveTaskSettingRequestBody::unsetmaxRunningTime()
{
    maxRunningTimeIsSet_ = false;
}

std::string SaveTaskSettingRequestBody::getIsLongRun() const
{
    return isLongRun_;
}

void SaveTaskSettingRequestBody::setIsLongRun(const std::string& value)
{
    isLongRun_ = value;
    isLongRunIsSet_ = true;
}

bool SaveTaskSettingRequestBody::isLongRunIsSet() const
{
    return isLongRunIsSet_;
}

void SaveTaskSettingRequestBody::unsetisLongRun()
{
    isLongRunIsSet_ = false;
}

}
}
}
}
}


