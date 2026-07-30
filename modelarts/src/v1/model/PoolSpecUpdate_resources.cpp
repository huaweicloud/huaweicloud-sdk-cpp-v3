

#include "huaweicloud/modelarts/v1/model/PoolSpecUpdate_resources.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolSpecUpdate_resources::PoolSpecUpdate_resources()
{
    flavor_ = "";
    flavorIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    azsIsSet_ = false;
}

PoolSpecUpdate_resources::~PoolSpecUpdate_resources() = default;

void PoolSpecUpdate_resources::validate()
{
}

web::json::value PoolSpecUpdate_resources::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(azsIsSet_) {
        val[utility::conversions::to_string_t("azs")] = ModelBase::toJson(azs_);
    }

    return val;
}
bool PoolSpecUpdate_resources::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("azs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("azs"));
        if(!fieldValue.is_null())
        {
            std::vector<PoolNodeAz> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzs(refVal);
        }
    }
    return ok;
}


std::string PoolSpecUpdate_resources::getFlavor() const
{
    return flavor_;
}

void PoolSpecUpdate_resources::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool PoolSpecUpdate_resources::flavorIsSet() const
{
    return flavorIsSet_;
}

void PoolSpecUpdate_resources::unsetflavor()
{
    flavorIsSet_ = false;
}

int32_t PoolSpecUpdate_resources::getCount() const
{
    return count_;
}

void PoolSpecUpdate_resources::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool PoolSpecUpdate_resources::countIsSet() const
{
    return countIsSet_;
}

void PoolSpecUpdate_resources::unsetcount()
{
    countIsSet_ = false;
}

std::vector<PoolNodeAz>& PoolSpecUpdate_resources::getAzs()
{
    return azs_;
}

void PoolSpecUpdate_resources::setAzs(const std::vector<PoolNodeAz>& value)
{
    azs_ = value;
    azsIsSet_ = true;
}

bool PoolSpecUpdate_resources::azsIsSet() const
{
    return azsIsSet_;
}

void PoolSpecUpdate_resources::unsetazs()
{
    azsIsSet_ = false;
}

}
}
}
}
}


