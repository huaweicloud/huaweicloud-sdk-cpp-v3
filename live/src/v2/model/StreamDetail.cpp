

#include "huaweicloud/live/v2/model/StreamDetail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




StreamDetail::StreamDetail()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    dataListIsSet_ = false;
}

StreamDetail::~StreamDetail() = default;

void StreamDetail::validate()
{
}

web::json::value StreamDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(dataListIsSet_) {
        val[utility::conversions::to_string_t("data_list")] = ModelBase::toJson(dataList_);
    }

    return val;
}

bool StreamDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_list"));
        if(!fieldValue.is_null())
        {
            std::vector<int64_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataList(refVal);
        }
    }
    return ok;
}

std::string StreamDetail::getStartTime() const
{
    return startTime_;
}

void StreamDetail::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool StreamDetail::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void StreamDetail::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string StreamDetail::getEndTime() const
{
    return endTime_;
}

void StreamDetail::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool StreamDetail::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void StreamDetail::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<int64_t>& StreamDetail::getDataList()
{
    return dataList_;
}

void StreamDetail::setDataList(std::vector<int64_t> value)
{
    dataList_ = value;
    dataListIsSet_ = true;
}

bool StreamDetail::dataListIsSet() const
{
    return dataListIsSet_;
}

void StreamDetail::unsetdataList()
{
    dataListIsSet_ = false;
}

}
}
}
}
}


