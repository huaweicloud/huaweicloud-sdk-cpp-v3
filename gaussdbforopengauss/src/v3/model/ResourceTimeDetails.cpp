

#include "huaweicloud/gaussdbforopengauss/v3/model/ResourceTimeDetails.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ResourceTimeDetails::ResourceTimeDetails()
{
    cpuTime_ = 0L;
    cpuTimeIsSet_ = false;
    dataIoTime_ = 0L;
    dataIoTimeIsSet_ = false;
    otherTime_ = 0L;
    otherTimeIsSet_ = false;
}

ResourceTimeDetails::~ResourceTimeDetails() = default;

void ResourceTimeDetails::validate()
{
}

web::json::value ResourceTimeDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cpuTimeIsSet_) {
        val[utility::conversions::to_string_t("cpu_time")] = ModelBase::toJson(cpuTime_);
    }
    if(dataIoTimeIsSet_) {
        val[utility::conversions::to_string_t("data_io_time")] = ModelBase::toJson(dataIoTime_);
    }
    if(otherTimeIsSet_) {
        val[utility::conversions::to_string_t("other_time")] = ModelBase::toJson(otherTime_);
    }

    return val;
}
bool ResourceTimeDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cpu_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_io_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_io_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataIoTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("other_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOtherTime(refVal);
        }
    }
    return ok;
}


int64_t ResourceTimeDetails::getCpuTime() const
{
    return cpuTime_;
}

void ResourceTimeDetails::setCpuTime(int64_t value)
{
    cpuTime_ = value;
    cpuTimeIsSet_ = true;
}

bool ResourceTimeDetails::cpuTimeIsSet() const
{
    return cpuTimeIsSet_;
}

void ResourceTimeDetails::unsetcpuTime()
{
    cpuTimeIsSet_ = false;
}

int64_t ResourceTimeDetails::getDataIoTime() const
{
    return dataIoTime_;
}

void ResourceTimeDetails::setDataIoTime(int64_t value)
{
    dataIoTime_ = value;
    dataIoTimeIsSet_ = true;
}

bool ResourceTimeDetails::dataIoTimeIsSet() const
{
    return dataIoTimeIsSet_;
}

void ResourceTimeDetails::unsetdataIoTime()
{
    dataIoTimeIsSet_ = false;
}

int64_t ResourceTimeDetails::getOtherTime() const
{
    return otherTime_;
}

void ResourceTimeDetails::setOtherTime(int64_t value)
{
    otherTime_ = value;
    otherTimeIsSet_ = true;
}

bool ResourceTimeDetails::otherTimeIsSet() const
{
    return otherTimeIsSet_;
}

void ResourceTimeDetails::unsetotherTime()
{
    otherTimeIsSet_ = false;
}

}
}
}
}
}


