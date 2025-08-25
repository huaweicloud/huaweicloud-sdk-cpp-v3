

#include "huaweicloud/cpcs/v1/model/CcspServiceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CcspServiceInfo::CcspServiceInfo()
{
    clusterNum_ = 0;
    clusterNumIsSet_ = false;
    instanceNum_ = 0;
    instanceNumIsSet_ = false;
    instanceQuota_ = 0;
    instanceQuotaIsSet_ = false;
    instanceDistributionIsSet_ = false;
}

CcspServiceInfo::~CcspServiceInfo() = default;

void CcspServiceInfo::validate()
{
}

web::json::value CcspServiceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterNumIsSet_) {
        val[utility::conversions::to_string_t("cluster_num")] = ModelBase::toJson(clusterNum_);
    }
    if(instanceNumIsSet_) {
        val[utility::conversions::to_string_t("instance_num")] = ModelBase::toJson(instanceNum_);
    }
    if(instanceQuotaIsSet_) {
        val[utility::conversions::to_string_t("instance_quota")] = ModelBase::toJson(instanceQuota_);
    }
    if(instanceDistributionIsSet_) {
        val[utility::conversions::to_string_t("instance_distribution")] = ModelBase::toJson(instanceDistribution_);
    }

    return val;
}
bool CcspServiceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_distribution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_distribution"));
        if(!fieldValue.is_null())
        {
            InstanceDistribution refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceDistribution(refVal);
        }
    }
    return ok;
}


int32_t CcspServiceInfo::getClusterNum() const
{
    return clusterNum_;
}

void CcspServiceInfo::setClusterNum(int32_t value)
{
    clusterNum_ = value;
    clusterNumIsSet_ = true;
}

bool CcspServiceInfo::clusterNumIsSet() const
{
    return clusterNumIsSet_;
}

void CcspServiceInfo::unsetclusterNum()
{
    clusterNumIsSet_ = false;
}

int32_t CcspServiceInfo::getInstanceNum() const
{
    return instanceNum_;
}

void CcspServiceInfo::setInstanceNum(int32_t value)
{
    instanceNum_ = value;
    instanceNumIsSet_ = true;
}

bool CcspServiceInfo::instanceNumIsSet() const
{
    return instanceNumIsSet_;
}

void CcspServiceInfo::unsetinstanceNum()
{
    instanceNumIsSet_ = false;
}

int32_t CcspServiceInfo::getInstanceQuota() const
{
    return instanceQuota_;
}

void CcspServiceInfo::setInstanceQuota(int32_t value)
{
    instanceQuota_ = value;
    instanceQuotaIsSet_ = true;
}

bool CcspServiceInfo::instanceQuotaIsSet() const
{
    return instanceQuotaIsSet_;
}

void CcspServiceInfo::unsetinstanceQuota()
{
    instanceQuotaIsSet_ = false;
}

InstanceDistribution CcspServiceInfo::getInstanceDistribution() const
{
    return instanceDistribution_;
}

void CcspServiceInfo::setInstanceDistribution(const InstanceDistribution& value)
{
    instanceDistribution_ = value;
    instanceDistributionIsSet_ = true;
}

bool CcspServiceInfo::instanceDistributionIsSet() const
{
    return instanceDistributionIsSet_;
}

void CcspServiceInfo::unsetinstanceDistribution()
{
    instanceDistributionIsSet_ = false;
}

}
}
}
}
}


