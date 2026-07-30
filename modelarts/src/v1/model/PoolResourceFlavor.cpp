

#include "huaweicloud/modelarts/v1/model/PoolResourceFlavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolResourceFlavor::PoolResourceFlavor()
{
    flavor_ = "";
    flavorIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    maxCount_ = 0;
    maxCountIsSet_ = false;
    extendParamsIsSet_ = false;
    osIsSet_ = false;
}

PoolResourceFlavor::~PoolResourceFlavor() = default;

void PoolResourceFlavor::validate()
{
}

web::json::value PoolResourceFlavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(maxCountIsSet_) {
        val[utility::conversions::to_string_t("maxCount")] = ModelBase::toJson(maxCount_);
    }
    if(extendParamsIsSet_) {
        val[utility::conversions::to_string_t("extendParams")] = ModelBase::toJson(extendParams_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }

    return val;
}
bool PoolResourceFlavor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendParams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParams"));
        if(!fieldValue.is_null())
        {
            PoolResourceFlavor_extendParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            Os refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
        }
    }
    return ok;
}


std::string PoolResourceFlavor::getFlavor() const
{
    return flavor_;
}

void PoolResourceFlavor::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool PoolResourceFlavor::flavorIsSet() const
{
    return flavorIsSet_;
}

void PoolResourceFlavor::unsetflavor()
{
    flavorIsSet_ = false;
}

int32_t PoolResourceFlavor::getCount() const
{
    return count_;
}

void PoolResourceFlavor::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool PoolResourceFlavor::countIsSet() const
{
    return countIsSet_;
}

void PoolResourceFlavor::unsetcount()
{
    countIsSet_ = false;
}

int32_t PoolResourceFlavor::getMaxCount() const
{
    return maxCount_;
}

void PoolResourceFlavor::setMaxCount(int32_t value)
{
    maxCount_ = value;
    maxCountIsSet_ = true;
}

bool PoolResourceFlavor::maxCountIsSet() const
{
    return maxCountIsSet_;
}

void PoolResourceFlavor::unsetmaxCount()
{
    maxCountIsSet_ = false;
}

PoolResourceFlavor_extendParams PoolResourceFlavor::getExtendParams() const
{
    return extendParams_;
}

void PoolResourceFlavor::setExtendParams(const PoolResourceFlavor_extendParams& value)
{
    extendParams_ = value;
    extendParamsIsSet_ = true;
}

bool PoolResourceFlavor::extendParamsIsSet() const
{
    return extendParamsIsSet_;
}

void PoolResourceFlavor::unsetextendParams()
{
    extendParamsIsSet_ = false;
}

Os PoolResourceFlavor::getOs() const
{
    return os_;
}

void PoolResourceFlavor::setOs(const Os& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool PoolResourceFlavor::osIsSet() const
{
    return osIsSet_;
}

void PoolResourceFlavor::unsetos()
{
    osIsSet_ = false;
}

}
}
}
}
}


