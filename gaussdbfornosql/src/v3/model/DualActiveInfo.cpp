

#include "huaweicloud/gaussdbfornosql/v3/model/DualActiveInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DualActiveInfo::DualActiveInfo()
{
    role_ = "";
    roleIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    destinationInstanceId_ = "";
    destinationInstanceIdIsSet_ = false;
    destinationRegion_ = "";
    destinationRegionIsSet_ = false;
    destinationInstanceName_ = "";
    destinationInstanceNameIsSet_ = false;
    destinationInstanceNodeNum_ = "";
    destinationInstanceNodeNumIsSet_ = false;
    destinationInstanceSpecCode_ = "";
    destinationInstanceSpecCodeIsSet_ = false;
}

DualActiveInfo::~DualActiveInfo() = default;

void DualActiveInfo::validate()
{
}

web::json::value DualActiveInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(destinationInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("destination_instance_id")] = ModelBase::toJson(destinationInstanceId_);
    }
    if(destinationRegionIsSet_) {
        val[utility::conversions::to_string_t("destination_region")] = ModelBase::toJson(destinationRegion_);
    }
    if(destinationInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("destination_instance_name")] = ModelBase::toJson(destinationInstanceName_);
    }
    if(destinationInstanceNodeNumIsSet_) {
        val[utility::conversions::to_string_t("destination_instance_node_num")] = ModelBase::toJson(destinationInstanceNodeNum_);
    }
    if(destinationInstanceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("destination_instance_spec_code")] = ModelBase::toJson(destinationInstanceSpecCode_);
    }

    return val;
}
bool DualActiveInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("destination_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_instance_node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_instance_node_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationInstanceNodeNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_instance_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_instance_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationInstanceSpecCode(refVal);
        }
    }
    return ok;
}


std::string DualActiveInfo::getRole() const
{
    return role_;
}

void DualActiveInfo::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool DualActiveInfo::roleIsSet() const
{
    return roleIsSet_;
}

void DualActiveInfo::unsetrole()
{
    roleIsSet_ = false;
}

std::string DualActiveInfo::getStatus() const
{
    return status_;
}

void DualActiveInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DualActiveInfo::statusIsSet() const
{
    return statusIsSet_;
}

void DualActiveInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DualActiveInfo::getDestinationInstanceId() const
{
    return destinationInstanceId_;
}

void DualActiveInfo::setDestinationInstanceId(const std::string& value)
{
    destinationInstanceId_ = value;
    destinationInstanceIdIsSet_ = true;
}

bool DualActiveInfo::destinationInstanceIdIsSet() const
{
    return destinationInstanceIdIsSet_;
}

void DualActiveInfo::unsetdestinationInstanceId()
{
    destinationInstanceIdIsSet_ = false;
}

std::string DualActiveInfo::getDestinationRegion() const
{
    return destinationRegion_;
}

void DualActiveInfo::setDestinationRegion(const std::string& value)
{
    destinationRegion_ = value;
    destinationRegionIsSet_ = true;
}

bool DualActiveInfo::destinationRegionIsSet() const
{
    return destinationRegionIsSet_;
}

void DualActiveInfo::unsetdestinationRegion()
{
    destinationRegionIsSet_ = false;
}

std::string DualActiveInfo::getDestinationInstanceName() const
{
    return destinationInstanceName_;
}

void DualActiveInfo::setDestinationInstanceName(const std::string& value)
{
    destinationInstanceName_ = value;
    destinationInstanceNameIsSet_ = true;
}

bool DualActiveInfo::destinationInstanceNameIsSet() const
{
    return destinationInstanceNameIsSet_;
}

void DualActiveInfo::unsetdestinationInstanceName()
{
    destinationInstanceNameIsSet_ = false;
}

std::string DualActiveInfo::getDestinationInstanceNodeNum() const
{
    return destinationInstanceNodeNum_;
}

void DualActiveInfo::setDestinationInstanceNodeNum(const std::string& value)
{
    destinationInstanceNodeNum_ = value;
    destinationInstanceNodeNumIsSet_ = true;
}

bool DualActiveInfo::destinationInstanceNodeNumIsSet() const
{
    return destinationInstanceNodeNumIsSet_;
}

void DualActiveInfo::unsetdestinationInstanceNodeNum()
{
    destinationInstanceNodeNumIsSet_ = false;
}

std::string DualActiveInfo::getDestinationInstanceSpecCode() const
{
    return destinationInstanceSpecCode_;
}

void DualActiveInfo::setDestinationInstanceSpecCode(const std::string& value)
{
    destinationInstanceSpecCode_ = value;
    destinationInstanceSpecCodeIsSet_ = true;
}

bool DualActiveInfo::destinationInstanceSpecCodeIsSet() const
{
    return destinationInstanceSpecCodeIsSet_;
}

void DualActiveInfo::unsetdestinationInstanceSpecCode()
{
    destinationInstanceSpecCodeIsSet_ = false;
}

}
}
}
}
}


