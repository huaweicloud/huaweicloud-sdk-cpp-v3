

#include "huaweicloud/modelarts/v1/model/PoolDriver.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolDriver::PoolDriver()
{
    gpuVersion_ = "";
    gpuVersionIsSet_ = false;
    npuVersion_ = "";
    npuVersionIsSet_ = false;
    updateStrategy_ = "";
    updateStrategyIsSet_ = false;
}

PoolDriver::~PoolDriver() = default;

void PoolDriver::validate()
{
}

web::json::value PoolDriver::toJson() const
{
    web::json::value val = web::json::value::object();

    if(gpuVersionIsSet_) {
        val[utility::conversions::to_string_t("gpuVersion")] = ModelBase::toJson(gpuVersion_);
    }
    if(npuVersionIsSet_) {
        val[utility::conversions::to_string_t("npuVersion")] = ModelBase::toJson(npuVersion_);
    }
    if(updateStrategyIsSet_) {
        val[utility::conversions::to_string_t("updateStrategy")] = ModelBase::toJson(updateStrategy_);
    }

    return val;
}
bool PoolDriver::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("gpuVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpuVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpuVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("npuVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("npuVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNpuVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateStrategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateStrategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateStrategy(refVal);
        }
    }
    return ok;
}


std::string PoolDriver::getGpuVersion() const
{
    return gpuVersion_;
}

void PoolDriver::setGpuVersion(const std::string& value)
{
    gpuVersion_ = value;
    gpuVersionIsSet_ = true;
}

bool PoolDriver::gpuVersionIsSet() const
{
    return gpuVersionIsSet_;
}

void PoolDriver::unsetgpuVersion()
{
    gpuVersionIsSet_ = false;
}

std::string PoolDriver::getNpuVersion() const
{
    return npuVersion_;
}

void PoolDriver::setNpuVersion(const std::string& value)
{
    npuVersion_ = value;
    npuVersionIsSet_ = true;
}

bool PoolDriver::npuVersionIsSet() const
{
    return npuVersionIsSet_;
}

void PoolDriver::unsetnpuVersion()
{
    npuVersionIsSet_ = false;
}

std::string PoolDriver::getUpdateStrategy() const
{
    return updateStrategy_;
}

void PoolDriver::setUpdateStrategy(const std::string& value)
{
    updateStrategy_ = value;
    updateStrategyIsSet_ = true;
}

bool PoolDriver::updateStrategyIsSet() const
{
    return updateStrategyIsSet_;
}

void PoolDriver::unsetupdateStrategy()
{
    updateStrategyIsSet_ = false;
}

}
}
}
}
}


