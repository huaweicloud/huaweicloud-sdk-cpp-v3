

#include "huaweicloud/drs/v5/model/DriverInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DriverInfo::DriverInfo()
{
    driverName_ = "";
    driverNameIsSet_ = false;
    lastModified_ = "";
    lastModifiedIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

DriverInfo::~DriverInfo() = default;

void DriverInfo::validate()
{
}

web::json::value DriverInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(driverNameIsSet_) {
        val[utility::conversions::to_string_t("driver_name")] = ModelBase::toJson(driverName_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool DriverInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("driver_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("driver_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriverName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string DriverInfo::getDriverName() const
{
    return driverName_;
}

void DriverInfo::setDriverName(const std::string& value)
{
    driverName_ = value;
    driverNameIsSet_ = true;
}

bool DriverInfo::driverNameIsSet() const
{
    return driverNameIsSet_;
}

void DriverInfo::unsetdriverName()
{
    driverNameIsSet_ = false;
}

std::string DriverInfo::getLastModified() const
{
    return lastModified_;
}

void DriverInfo::setLastModified(const std::string& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool DriverInfo::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void DriverInfo::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

int32_t DriverInfo::getSize() const
{
    return size_;
}

void DriverInfo::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool DriverInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void DriverInfo::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


