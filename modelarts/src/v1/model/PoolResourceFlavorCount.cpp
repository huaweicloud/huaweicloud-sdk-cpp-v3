

#include "huaweicloud/modelarts/v1/model/PoolResourceFlavorCount.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolResourceFlavorCount::PoolResourceFlavorCount()
{
    flavor_ = "";
    flavorIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    maxCount_ = 0;
    maxCountIsSet_ = false;
    azsIsSet_ = false;
    nodePool_ = "";
    nodePoolIsSet_ = false;
}

PoolResourceFlavorCount::~PoolResourceFlavorCount() = default;

void PoolResourceFlavorCount::validate()
{
}

web::json::value PoolResourceFlavorCount::toJson() const
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
    if(azsIsSet_) {
        val[utility::conversions::to_string_t("azs")] = ModelBase::toJson(azs_);
    }
    if(nodePoolIsSet_) {
        val[utility::conversions::to_string_t("nodePool")] = ModelBase::toJson(nodePool_);
    }

    return val;
}
bool PoolResourceFlavorCount::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("azs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("azs"));
        if(!fieldValue.is_null())
        {
            std::vector<PoolNodeAz> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodePool"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodePool"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodePool(refVal);
        }
    }
    return ok;
}


std::string PoolResourceFlavorCount::getFlavor() const
{
    return flavor_;
}

void PoolResourceFlavorCount::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool PoolResourceFlavorCount::flavorIsSet() const
{
    return flavorIsSet_;
}

void PoolResourceFlavorCount::unsetflavor()
{
    flavorIsSet_ = false;
}

int32_t PoolResourceFlavorCount::getCount() const
{
    return count_;
}

void PoolResourceFlavorCount::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool PoolResourceFlavorCount::countIsSet() const
{
    return countIsSet_;
}

void PoolResourceFlavorCount::unsetcount()
{
    countIsSet_ = false;
}

int32_t PoolResourceFlavorCount::getMaxCount() const
{
    return maxCount_;
}

void PoolResourceFlavorCount::setMaxCount(int32_t value)
{
    maxCount_ = value;
    maxCountIsSet_ = true;
}

bool PoolResourceFlavorCount::maxCountIsSet() const
{
    return maxCountIsSet_;
}

void PoolResourceFlavorCount::unsetmaxCount()
{
    maxCountIsSet_ = false;
}

std::vector<PoolNodeAz>& PoolResourceFlavorCount::getAzs()
{
    return azs_;
}

void PoolResourceFlavorCount::setAzs(const std::vector<PoolNodeAz>& value)
{
    azs_ = value;
    azsIsSet_ = true;
}

bool PoolResourceFlavorCount::azsIsSet() const
{
    return azsIsSet_;
}

void PoolResourceFlavorCount::unsetazs()
{
    azsIsSet_ = false;
}

std::string PoolResourceFlavorCount::getNodePool() const
{
    return nodePool_;
}

void PoolResourceFlavorCount::setNodePool(const std::string& value)
{
    nodePool_ = value;
    nodePoolIsSet_ = true;
}

bool PoolResourceFlavorCount::nodePoolIsSet() const
{
    return nodePoolIsSet_;
}

void PoolResourceFlavorCount::unsetnodePool()
{
    nodePoolIsSet_ = false;
}

}
}
}
}
}


