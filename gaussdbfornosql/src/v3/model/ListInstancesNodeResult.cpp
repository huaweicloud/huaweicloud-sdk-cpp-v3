

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstancesNodeResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstancesNodeResult::ListInstancesNodeResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    privateIp_ = "";
    privateIpIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    supportReduce_ = false;
    supportReduceIsSet_ = false;
}

ListInstancesNodeResult::~ListInstancesNodeResult() = default;

void ListInstancesNodeResult::validate()
{
}

web::json::value ListInstancesNodeResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(privateIpIsSet_) {
        val[utility::conversions::to_string_t("private_ip")] = ModelBase::toJson(privateIp_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(supportReduceIsSet_) {
        val[utility::conversions::to_string_t("support_reduce")] = ModelBase::toJson(supportReduce_);
    }

    return val;
}
bool ListInstancesNodeResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_reduce"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_reduce"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportReduce(refVal);
        }
    }
    return ok;
}


std::string ListInstancesNodeResult::getId() const
{
    return id_;
}

void ListInstancesNodeResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInstancesNodeResult::idIsSet() const
{
    return idIsSet_;
}

void ListInstancesNodeResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListInstancesNodeResult::getName() const
{
    return name_;
}

void ListInstancesNodeResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInstancesNodeResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListInstancesNodeResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ListInstancesNodeResult::getStatus() const
{
    return status_;
}

void ListInstancesNodeResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListInstancesNodeResult::statusIsSet() const
{
    return statusIsSet_;
}

void ListInstancesNodeResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListInstancesNodeResult::getRole() const
{
    return role_;
}

void ListInstancesNodeResult::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool ListInstancesNodeResult::roleIsSet() const
{
    return roleIsSet_;
}

void ListInstancesNodeResult::unsetrole()
{
    roleIsSet_ = false;
}

std::string ListInstancesNodeResult::getSubnetId() const
{
    return subnetId_;
}

void ListInstancesNodeResult::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ListInstancesNodeResult::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ListInstancesNodeResult::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string ListInstancesNodeResult::getPrivateIp() const
{
    return privateIp_;
}

void ListInstancesNodeResult::setPrivateIp(const std::string& value)
{
    privateIp_ = value;
    privateIpIsSet_ = true;
}

bool ListInstancesNodeResult::privateIpIsSet() const
{
    return privateIpIsSet_;
}

void ListInstancesNodeResult::unsetprivateIp()
{
    privateIpIsSet_ = false;
}

std::string ListInstancesNodeResult::getPublicIp() const
{
    return publicIp_;
}

void ListInstancesNodeResult::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool ListInstancesNodeResult::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void ListInstancesNodeResult::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string ListInstancesNodeResult::getSpecCode() const
{
    return specCode_;
}

void ListInstancesNodeResult::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool ListInstancesNodeResult::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void ListInstancesNodeResult::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string ListInstancesNodeResult::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ListInstancesNodeResult::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListInstancesNodeResult::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListInstancesNodeResult::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

bool ListInstancesNodeResult::isSupportReduce() const
{
    return supportReduce_;
}

void ListInstancesNodeResult::setSupportReduce(bool value)
{
    supportReduce_ = value;
    supportReduceIsSet_ = true;
}

bool ListInstancesNodeResult::supportReduceIsSet() const
{
    return supportReduceIsSet_;
}

void ListInstancesNodeResult::unsetsupportReduce()
{
    supportReduceIsSet_ = false;
}

}
}
}
}
}


