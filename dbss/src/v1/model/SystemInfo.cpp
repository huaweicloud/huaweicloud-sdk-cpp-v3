

#include "huaweicloud/dbss/v1/model/SystemInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SystemInfo::SystemInfo()
{
    cpuUse_ = 0.0;
    cpuUseIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    memUse_ = 0.0;
    memUseIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

SystemInfo::~SystemInfo() = default;

void SystemInfo::validate()
{
}

web::json::value SystemInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cpuUseIsSet_) {
        val[utility::conversions::to_string_t("cpu_use")] = ModelBase::toJson(cpuUse_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(memUseIsSet_) {
        val[utility::conversions::to_string_t("mem_use")] = ModelBase::toJson(memUse_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool SystemInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cpu_use"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_use"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuUse(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("mem_use"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem_use"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemUse(refVal);
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


double SystemInfo::getCpuUse() const
{
    return cpuUse_;
}

void SystemInfo::setCpuUse(double value)
{
    cpuUse_ = value;
    cpuUseIsSet_ = true;
}

bool SystemInfo::cpuUseIsSet() const
{
    return cpuUseIsSet_;
}

void SystemInfo::unsetcpuUse()
{
    cpuUseIsSet_ = false;
}

std::string SystemInfo::getId() const
{
    return id_;
}

void SystemInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SystemInfo::idIsSet() const
{
    return idIsSet_;
}

void SystemInfo::unsetid()
{
    idIsSet_ = false;
}

double SystemInfo::getMemUse() const
{
    return memUse_;
}

void SystemInfo::setMemUse(double value)
{
    memUse_ = value;
    memUseIsSet_ = true;
}

bool SystemInfo::memUseIsSet() const
{
    return memUseIsSet_;
}

void SystemInfo::unsetmemUse()
{
    memUseIsSet_ = false;
}

std::string SystemInfo::getTime() const
{
    return time_;
}

void SystemInfo::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool SystemInfo::timeIsSet() const
{
    return timeIsSet_;
}

void SystemInfo::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


