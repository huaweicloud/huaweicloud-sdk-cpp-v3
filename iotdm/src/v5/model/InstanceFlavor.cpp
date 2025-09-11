

#include "huaweicloud/iotdm/v5/model/InstanceFlavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




InstanceFlavor::InstanceFlavor()
{
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    chargeModesIsSet_ = false;
}

InstanceFlavor::~InstanceFlavor() = default;

void InstanceFlavor::validate()
{
}

web::json::value InstanceFlavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(chargeModesIsSet_) {
        val[utility::conversions::to_string_t("charge_modes")] = ModelBase::toJson(chargeModes_);
    }

    return val;
}
bool InstanceFlavor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("charge_modes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_modes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeModes(refVal);
        }
    }
    return ok;
}


std::string InstanceFlavor::getInstanceType() const
{
    return instanceType_;
}

void InstanceFlavor::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool InstanceFlavor::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void InstanceFlavor::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string InstanceFlavor::getType() const
{
    return type_;
}

void InstanceFlavor::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool InstanceFlavor::typeIsSet() const
{
    return typeIsSet_;
}

void InstanceFlavor::unsettype()
{
    typeIsSet_ = false;
}

std::string InstanceFlavor::getStatus() const
{
    return status_;
}

void InstanceFlavor::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InstanceFlavor::statusIsSet() const
{
    return statusIsSet_;
}

void InstanceFlavor::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& InstanceFlavor::getChargeModes()
{
    return chargeModes_;
}

void InstanceFlavor::setChargeModes(const std::vector<std::string>& value)
{
    chargeModes_ = value;
    chargeModesIsSet_ = true;
}

bool InstanceFlavor::chargeModesIsSet() const
{
    return chargeModesIsSet_;
}

void InstanceFlavor::unsetchargeModes()
{
    chargeModesIsSet_ = false;
}

}
}
}
}
}


