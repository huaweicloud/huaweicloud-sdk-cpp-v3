

#include "huaweicloud/gaussdbforopengauss/v3/model/DataIoTime.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DataIoTime::DataIoTime()
{
    allTime_ = 0L;
    allTimeIsSet_ = false;
    dataIoTimeDetailsIsSet_ = false;
}

DataIoTime::~DataIoTime() = default;

void DataIoTime::validate()
{
}

web::json::value DataIoTime::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allTimeIsSet_) {
        val[utility::conversions::to_string_t("all_time")] = ModelBase::toJson(allTime_);
    }
    if(dataIoTimeDetailsIsSet_) {
        val[utility::conversions::to_string_t("data_io_time_details")] = ModelBase::toJson(dataIoTimeDetails_);
    }

    return val;
}
bool DataIoTime::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("all_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_io_time_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_io_time_details"));
        if(!fieldValue.is_null())
        {
            EventTimeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataIoTimeDetails(refVal);
        }
    }
    return ok;
}


int64_t DataIoTime::getAllTime() const
{
    return allTime_;
}

void DataIoTime::setAllTime(int64_t value)
{
    allTime_ = value;
    allTimeIsSet_ = true;
}

bool DataIoTime::allTimeIsSet() const
{
    return allTimeIsSet_;
}

void DataIoTime::unsetallTime()
{
    allTimeIsSet_ = false;
}

EventTimeInfo DataIoTime::getDataIoTimeDetails() const
{
    return dataIoTimeDetails_;
}

void DataIoTime::setDataIoTimeDetails(const EventTimeInfo& value)
{
    dataIoTimeDetails_ = value;
    dataIoTimeDetailsIsSet_ = true;
}

bool DataIoTime::dataIoTimeDetailsIsSet() const
{
    return dataIoTimeDetailsIsSet_;
}

void DataIoTime::unsetdataIoTimeDetails()
{
    dataIoTimeDetailsIsSet_ = false;
}

}
}
}
}
}


