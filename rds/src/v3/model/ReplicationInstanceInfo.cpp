

#include "huaweicloud/rds/v3/model/ReplicationInstanceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ReplicationInstanceInfo::ReplicationInstanceInfo()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    dataVip_ = "";
    dataVipIsSet_ = false;
}

ReplicationInstanceInfo::~ReplicationInstanceInfo() = default;

void ReplicationInstanceInfo::validate()
{
}

web::json::value ReplicationInstanceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(dataVipIsSet_) {
        val[utility::conversions::to_string_t("data_vip")] = ModelBase::toJson(dataVip_);
    }

    return val;
}
bool ReplicationInstanceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_vip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_vip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVip(refVal);
        }
    }
    return ok;
}


std::string ReplicationInstanceInfo::getInstanceId() const
{
    return instanceId_;
}

void ReplicationInstanceInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ReplicationInstanceInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ReplicationInstanceInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ReplicationInstanceInfo::getInstanceName() const
{
    return instanceName_;
}

void ReplicationInstanceInfo::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ReplicationInstanceInfo::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ReplicationInstanceInfo::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ReplicationInstanceInfo::getDataVip() const
{
    return dataVip_;
}

void ReplicationInstanceInfo::setDataVip(const std::string& value)
{
    dataVip_ = value;
    dataVipIsSet_ = true;
}

bool ReplicationInstanceInfo::dataVipIsSet() const
{
    return dataVipIsSet_;
}

void ReplicationInstanceInfo::unsetdataVip()
{
    dataVipIsSet_ = false;
}

}
}
}
}
}


