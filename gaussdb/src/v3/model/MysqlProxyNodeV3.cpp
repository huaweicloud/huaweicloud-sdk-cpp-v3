

#include "huaweicloud/gaussdb/v3/model/MysqlProxyNodeV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlProxyNodeV3::MysqlProxyNodeV3()
{
    id_ = "";
    idIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
    availabilityZoneIsSet_ = false;
}

MysqlProxyNodeV3::~MysqlProxyNodeV3() = default;

void MysqlProxyNodeV3::validate()
{
}

web::json::value MysqlProxyNodeV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }

    return val;
}
bool MysqlProxyNodeV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlProxyAvailable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    return ok;
}


std::string MysqlProxyNodeV3::getId() const
{
    return id_;
}

void MysqlProxyNodeV3::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MysqlProxyNodeV3::idIsSet() const
{
    return idIsSet_;
}

void MysqlProxyNodeV3::unsetid()
{
    idIsSet_ = false;
}

std::string MysqlProxyNodeV3::getInstanceId() const
{
    return instanceId_;
}

void MysqlProxyNodeV3::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool MysqlProxyNodeV3::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void MysqlProxyNodeV3::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string MysqlProxyNodeV3::getStatus() const
{
    return status_;
}

void MysqlProxyNodeV3::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MysqlProxyNodeV3::statusIsSet() const
{
    return statusIsSet_;
}

void MysqlProxyNodeV3::unsetstatus()
{
    statusIsSet_ = false;
}

std::string MysqlProxyNodeV3::getName() const
{
    return name_;
}

void MysqlProxyNodeV3::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MysqlProxyNodeV3::nameIsSet() const
{
    return nameIsSet_;
}

void MysqlProxyNodeV3::unsetname()
{
    nameIsSet_ = false;
}

int32_t MysqlProxyNodeV3::getWeight() const
{
    return weight_;
}

void MysqlProxyNodeV3::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool MysqlProxyNodeV3::weightIsSet() const
{
    return weightIsSet_;
}

void MysqlProxyNodeV3::unsetweight()
{
    weightIsSet_ = false;
}

std::vector<MysqlProxyAvailable>& MysqlProxyNodeV3::getAvailabilityZone()
{
    return availabilityZone_;
}

void MysqlProxyNodeV3::setAvailabilityZone(const std::vector<MysqlProxyAvailable>& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool MysqlProxyNodeV3::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void MysqlProxyNodeV3::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

}
}
}
}
}


