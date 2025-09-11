

#include "huaweicloud/dbss/v1/model/DiskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DiskInfo::DiskInfo()
{
    dataAvailable_ = 0.0;
    dataAvailableIsSet_ = false;
    dataTotal_ = 0.0;
    dataTotalIsSet_ = false;
    dataUsePercent_ = 0;
    dataUsePercentIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    swapAvailable_ = 0.0;
    swapAvailableIsSet_ = false;
    swapTotal_ = 0.0;
    swapTotalIsSet_ = false;
    swapUsePercent_ = 0;
    swapUsePercentIsSet_ = false;
    systemAvailable_ = 0.0;
    systemAvailableIsSet_ = false;
    systemTotal_ = 0.0;
    systemTotalIsSet_ = false;
    systemUsePercent_ = 0;
    systemUsePercentIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

DiskInfo::~DiskInfo() = default;

void DiskInfo::validate()
{
}

web::json::value DiskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataAvailableIsSet_) {
        val[utility::conversions::to_string_t("data_available")] = ModelBase::toJson(dataAvailable_);
    }
    if(dataTotalIsSet_) {
        val[utility::conversions::to_string_t("data_total")] = ModelBase::toJson(dataTotal_);
    }
    if(dataUsePercentIsSet_) {
        val[utility::conversions::to_string_t("data_use_percent")] = ModelBase::toJson(dataUsePercent_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(swapAvailableIsSet_) {
        val[utility::conversions::to_string_t("swap_available")] = ModelBase::toJson(swapAvailable_);
    }
    if(swapTotalIsSet_) {
        val[utility::conversions::to_string_t("swap_total")] = ModelBase::toJson(swapTotal_);
    }
    if(swapUsePercentIsSet_) {
        val[utility::conversions::to_string_t("swap_use_percent")] = ModelBase::toJson(swapUsePercent_);
    }
    if(systemAvailableIsSet_) {
        val[utility::conversions::to_string_t("system_available")] = ModelBase::toJson(systemAvailable_);
    }
    if(systemTotalIsSet_) {
        val[utility::conversions::to_string_t("system_total")] = ModelBase::toJson(systemTotal_);
    }
    if(systemUsePercentIsSet_) {
        val[utility::conversions::to_string_t("system_use_percent")] = ModelBase::toJson(systemUsePercent_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool DiskInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_available"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_total"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_use_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_use_percent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataUsePercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("swap_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("swap_available"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwapAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("swap_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("swap_total"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwapTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("swap_use_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("swap_use_percent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwapUsePercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_available"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_total"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system_use_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_use_percent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemUsePercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}


double DiskInfo::getDataAvailable() const
{
    return dataAvailable_;
}

void DiskInfo::setDataAvailable(double value)
{
    dataAvailable_ = value;
    dataAvailableIsSet_ = true;
}

bool DiskInfo::dataAvailableIsSet() const
{
    return dataAvailableIsSet_;
}

void DiskInfo::unsetdataAvailable()
{
    dataAvailableIsSet_ = false;
}

double DiskInfo::getDataTotal() const
{
    return dataTotal_;
}

void DiskInfo::setDataTotal(double value)
{
    dataTotal_ = value;
    dataTotalIsSet_ = true;
}

bool DiskInfo::dataTotalIsSet() const
{
    return dataTotalIsSet_;
}

void DiskInfo::unsetdataTotal()
{
    dataTotalIsSet_ = false;
}

int32_t DiskInfo::getDataUsePercent() const
{
    return dataUsePercent_;
}

void DiskInfo::setDataUsePercent(int32_t value)
{
    dataUsePercent_ = value;
    dataUsePercentIsSet_ = true;
}

bool DiskInfo::dataUsePercentIsSet() const
{
    return dataUsePercentIsSet_;
}

void DiskInfo::unsetdataUsePercent()
{
    dataUsePercentIsSet_ = false;
}

std::string DiskInfo::getId() const
{
    return id_;
}

void DiskInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DiskInfo::idIsSet() const
{
    return idIsSet_;
}

void DiskInfo::unsetid()
{
    idIsSet_ = false;
}

double DiskInfo::getSwapAvailable() const
{
    return swapAvailable_;
}

void DiskInfo::setSwapAvailable(double value)
{
    swapAvailable_ = value;
    swapAvailableIsSet_ = true;
}

bool DiskInfo::swapAvailableIsSet() const
{
    return swapAvailableIsSet_;
}

void DiskInfo::unsetswapAvailable()
{
    swapAvailableIsSet_ = false;
}

double DiskInfo::getSwapTotal() const
{
    return swapTotal_;
}

void DiskInfo::setSwapTotal(double value)
{
    swapTotal_ = value;
    swapTotalIsSet_ = true;
}

bool DiskInfo::swapTotalIsSet() const
{
    return swapTotalIsSet_;
}

void DiskInfo::unsetswapTotal()
{
    swapTotalIsSet_ = false;
}

int32_t DiskInfo::getSwapUsePercent() const
{
    return swapUsePercent_;
}

void DiskInfo::setSwapUsePercent(int32_t value)
{
    swapUsePercent_ = value;
    swapUsePercentIsSet_ = true;
}

bool DiskInfo::swapUsePercentIsSet() const
{
    return swapUsePercentIsSet_;
}

void DiskInfo::unsetswapUsePercent()
{
    swapUsePercentIsSet_ = false;
}

double DiskInfo::getSystemAvailable() const
{
    return systemAvailable_;
}

void DiskInfo::setSystemAvailable(double value)
{
    systemAvailable_ = value;
    systemAvailableIsSet_ = true;
}

bool DiskInfo::systemAvailableIsSet() const
{
    return systemAvailableIsSet_;
}

void DiskInfo::unsetsystemAvailable()
{
    systemAvailableIsSet_ = false;
}

double DiskInfo::getSystemTotal() const
{
    return systemTotal_;
}

void DiskInfo::setSystemTotal(double value)
{
    systemTotal_ = value;
    systemTotalIsSet_ = true;
}

bool DiskInfo::systemTotalIsSet() const
{
    return systemTotalIsSet_;
}

void DiskInfo::unsetsystemTotal()
{
    systemTotalIsSet_ = false;
}

int32_t DiskInfo::getSystemUsePercent() const
{
    return systemUsePercent_;
}

void DiskInfo::setSystemUsePercent(int32_t value)
{
    systemUsePercent_ = value;
    systemUsePercentIsSet_ = true;
}

bool DiskInfo::systemUsePercentIsSet() const
{
    return systemUsePercentIsSet_;
}

void DiskInfo::unsetsystemUsePercent()
{
    systemUsePercentIsSet_ = false;
}

std::string DiskInfo::getTime() const
{
    return time_;
}

void DiskInfo::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool DiskInfo::timeIsSet() const
{
    return timeIsSet_;
}

void DiskInfo::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


