

#include "huaweicloud/cpcs/v1/model/VsmResourceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




VsmResourceInfo::VsmResourceInfo()
{
    clusterNum_ = 0;
    clusterNumIsSet_ = false;
    cpcsClusterNum_ = 0;
    cpcsClusterNumIsSet_ = false;
    instanceNum_ = 0;
    instanceNumIsSet_ = false;
    cpcsInstanceNum_ = 0;
    cpcsInstanceNumIsSet_ = false;
    instanceQuota_ = 0;
    instanceQuotaIsSet_ = false;
}

VsmResourceInfo::~VsmResourceInfo() = default;

void VsmResourceInfo::validate()
{
}

web::json::value VsmResourceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterNumIsSet_) {
        val[utility::conversions::to_string_t("cluster_num")] = ModelBase::toJson(clusterNum_);
    }
    if(cpcsClusterNumIsSet_) {
        val[utility::conversions::to_string_t("cpcs_cluster_num")] = ModelBase::toJson(cpcsClusterNum_);
    }
    if(instanceNumIsSet_) {
        val[utility::conversions::to_string_t("instance_num")] = ModelBase::toJson(instanceNum_);
    }
    if(cpcsInstanceNumIsSet_) {
        val[utility::conversions::to_string_t("cpcs_instance_num")] = ModelBase::toJson(cpcsInstanceNum_);
    }
    if(instanceQuotaIsSet_) {
        val[utility::conversions::to_string_t("instance_quota")] = ModelBase::toJson(instanceQuota_);
    }

    return val;
}
bool VsmResourceInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cpcs_cluster_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpcs_cluster_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpcsClusterNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cpcs_instance_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpcs_instance_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpcsInstanceNum(refVal);
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
    return ok;
}


int32_t VsmResourceInfo::getClusterNum() const
{
    return clusterNum_;
}

void VsmResourceInfo::setClusterNum(int32_t value)
{
    clusterNum_ = value;
    clusterNumIsSet_ = true;
}

bool VsmResourceInfo::clusterNumIsSet() const
{
    return clusterNumIsSet_;
}

void VsmResourceInfo::unsetclusterNum()
{
    clusterNumIsSet_ = false;
}

int32_t VsmResourceInfo::getCpcsClusterNum() const
{
    return cpcsClusterNum_;
}

void VsmResourceInfo::setCpcsClusterNum(int32_t value)
{
    cpcsClusterNum_ = value;
    cpcsClusterNumIsSet_ = true;
}

bool VsmResourceInfo::cpcsClusterNumIsSet() const
{
    return cpcsClusterNumIsSet_;
}

void VsmResourceInfo::unsetcpcsClusterNum()
{
    cpcsClusterNumIsSet_ = false;
}

int32_t VsmResourceInfo::getInstanceNum() const
{
    return instanceNum_;
}

void VsmResourceInfo::setInstanceNum(int32_t value)
{
    instanceNum_ = value;
    instanceNumIsSet_ = true;
}

bool VsmResourceInfo::instanceNumIsSet() const
{
    return instanceNumIsSet_;
}

void VsmResourceInfo::unsetinstanceNum()
{
    instanceNumIsSet_ = false;
}

int32_t VsmResourceInfo::getCpcsInstanceNum() const
{
    return cpcsInstanceNum_;
}

void VsmResourceInfo::setCpcsInstanceNum(int32_t value)
{
    cpcsInstanceNum_ = value;
    cpcsInstanceNumIsSet_ = true;
}

bool VsmResourceInfo::cpcsInstanceNumIsSet() const
{
    return cpcsInstanceNumIsSet_;
}

void VsmResourceInfo::unsetcpcsInstanceNum()
{
    cpcsInstanceNumIsSet_ = false;
}

int32_t VsmResourceInfo::getInstanceQuota() const
{
    return instanceQuota_;
}

void VsmResourceInfo::setInstanceQuota(int32_t value)
{
    instanceQuota_ = value;
    instanceQuotaIsSet_ = true;
}

bool VsmResourceInfo::instanceQuotaIsSet() const
{
    return instanceQuotaIsSet_;
}

void VsmResourceInfo::unsetinstanceQuota()
{
    instanceQuotaIsSet_ = false;
}

}
}
}
}
}


