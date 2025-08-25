

#include "huaweicloud/cpcs/v1/model/CloudServiceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CloudServiceInfo::CloudServiceInfo()
{
    serviceNum_ = 0;
    serviceNumIsSet_ = false;
    resourceNum_ = 0;
    resourceNumIsSet_ = false;
    resourceDistributionIsSet_ = false;
}

CloudServiceInfo::~CloudServiceInfo() = default;

void CloudServiceInfo::validate()
{
}

web::json::value CloudServiceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceNumIsSet_) {
        val[utility::conversions::to_string_t("service_num")] = ModelBase::toJson(serviceNum_);
    }
    if(resourceNumIsSet_) {
        val[utility::conversions::to_string_t("resource_num")] = ModelBase::toJson(resourceNum_);
    }
    if(resourceDistributionIsSet_) {
        val[utility::conversions::to_string_t("resource_distribution")] = ModelBase::toJson(resourceDistribution_);
    }

    return val;
}
bool CloudServiceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_distribution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_distribution"));
        if(!fieldValue.is_null())
        {
            ResourceDistribution refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceDistribution(refVal);
        }
    }
    return ok;
}


int32_t CloudServiceInfo::getServiceNum() const
{
    return serviceNum_;
}

void CloudServiceInfo::setServiceNum(int32_t value)
{
    serviceNum_ = value;
    serviceNumIsSet_ = true;
}

bool CloudServiceInfo::serviceNumIsSet() const
{
    return serviceNumIsSet_;
}

void CloudServiceInfo::unsetserviceNum()
{
    serviceNumIsSet_ = false;
}

int32_t CloudServiceInfo::getResourceNum() const
{
    return resourceNum_;
}

void CloudServiceInfo::setResourceNum(int32_t value)
{
    resourceNum_ = value;
    resourceNumIsSet_ = true;
}

bool CloudServiceInfo::resourceNumIsSet() const
{
    return resourceNumIsSet_;
}

void CloudServiceInfo::unsetresourceNum()
{
    resourceNumIsSet_ = false;
}

ResourceDistribution CloudServiceInfo::getResourceDistribution() const
{
    return resourceDistribution_;
}

void CloudServiceInfo::setResourceDistribution(const ResourceDistribution& value)
{
    resourceDistribution_ = value;
    resourceDistributionIsSet_ = true;
}

bool CloudServiceInfo::resourceDistributionIsSet() const
{
    return resourceDistributionIsSet_;
}

void CloudServiceInfo::unsetresourceDistribution()
{
    resourceDistributionIsSet_ = false;
}

}
}
}
}
}


