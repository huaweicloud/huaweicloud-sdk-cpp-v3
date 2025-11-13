

#include "huaweicloud/metastudio/v1/model/ShowUsageDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowUsageDataResponse::ShowUsageDataResponse()
{
    count_ = 0;
    countIsSet_ = false;
    timeListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowUsageDataResponse::~ShowUsageDataResponse() = default;

void ShowUsageDataResponse::validate()
{
}

web::json::value ShowUsageDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(timeListIsSet_) {
        val[utility::conversions::to_string_t("time_list")] = ModelBase::toJson(timeList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowUsageDataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TimeResourceUsageInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ShowUsageDataResponse::getCount() const
{
    return count_;
}

void ShowUsageDataResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowUsageDataResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowUsageDataResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<TimeResourceUsageInfo>& ShowUsageDataResponse::getTimeList()
{
    return timeList_;
}

void ShowUsageDataResponse::setTimeList(const std::vector<TimeResourceUsageInfo>& value)
{
    timeList_ = value;
    timeListIsSet_ = true;
}

bool ShowUsageDataResponse::timeListIsSet() const
{
    return timeListIsSet_;
}

void ShowUsageDataResponse::unsettimeList()
{
    timeListIsSet_ = false;
}

std::string ShowUsageDataResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowUsageDataResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowUsageDataResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowUsageDataResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


