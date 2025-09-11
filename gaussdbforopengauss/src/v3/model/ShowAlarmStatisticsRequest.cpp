

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowAlarmStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowAlarmStatisticsRequest::ShowAlarmStatisticsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    topNum_ = 0;
    topNumIsSet_ = false;
}

ShowAlarmStatisticsRequest::~ShowAlarmStatisticsRequest() = default;

void ShowAlarmStatisticsRequest::validate()
{
}

web::json::value ShowAlarmStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(topNumIsSet_) {
        val[utility::conversions::to_string_t("top_num")] = ModelBase::toJson(topNum_);
    }

    return val;
}
bool ShowAlarmStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopNum(refVal);
        }
    }
    return ok;
}


std::string ShowAlarmStatisticsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAlarmStatisticsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAlarmStatisticsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAlarmStatisticsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowAlarmStatisticsRequest::getStartTime() const
{
    return startTime_;
}

void ShowAlarmStatisticsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowAlarmStatisticsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowAlarmStatisticsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t ShowAlarmStatisticsRequest::getTopNum() const
{
    return topNum_;
}

void ShowAlarmStatisticsRequest::setTopNum(int32_t value)
{
    topNum_ = value;
    topNumIsSet_ = true;
}

bool ShowAlarmStatisticsRequest::topNumIsSet() const
{
    return topNumIsSet_;
}

void ShowAlarmStatisticsRequest::unsettopNum()
{
    topNumIsSet_ = false;
}

}
}
}
}
}


