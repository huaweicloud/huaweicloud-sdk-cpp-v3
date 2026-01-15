

#include "huaweicloud/vpc/v2/model/BindingVifDetails.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




BindingVifDetails::BindingVifDetails()
{
    primaryInterface_ = false;
    primaryInterfaceIsSet_ = false;
    portFilter_ = false;
    portFilterIsSet_ = false;
    ovsHybridPlug_ = false;
    ovsHybridPlugIsSet_ = false;
    vlanId_ = "";
    vlanIdIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    parentDeviceId_ = "";
    parentDeviceIdIsSet_ = false;
}

BindingVifDetails::~BindingVifDetails() = default;

void BindingVifDetails::validate()
{
}

web::json::value BindingVifDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(primaryInterfaceIsSet_) {
        val[utility::conversions::to_string_t("primary_interface")] = ModelBase::toJson(primaryInterface_);
    }
    if(portFilterIsSet_) {
        val[utility::conversions::to_string_t("port_filter")] = ModelBase::toJson(portFilter_);
    }
    if(ovsHybridPlugIsSet_) {
        val[utility::conversions::to_string_t("ovs_hybrid_plug")] = ModelBase::toJson(ovsHybridPlug_);
    }
    if(vlanIdIsSet_) {
        val[utility::conversions::to_string_t("vlan_id")] = ModelBase::toJson(vlanId_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(parentDeviceIdIsSet_) {
        val[utility::conversions::to_string_t("parent_device_id")] = ModelBase::toJson(parentDeviceId_);
    }

    return val;
}
bool BindingVifDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("primary_interface"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary_interface"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimaryInterface(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_filter"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ovs_hybrid_plug"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ovs_hybrid_plug"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOvsHybridPlug(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vlan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vlan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVlanId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentDeviceId(refVal);
        }
    }
    return ok;
}


bool BindingVifDetails::isPrimaryInterface() const
{
    return primaryInterface_;
}

void BindingVifDetails::setPrimaryInterface(bool value)
{
    primaryInterface_ = value;
    primaryInterfaceIsSet_ = true;
}

bool BindingVifDetails::primaryInterfaceIsSet() const
{
    return primaryInterfaceIsSet_;
}

void BindingVifDetails::unsetprimaryInterface()
{
    primaryInterfaceIsSet_ = false;
}

bool BindingVifDetails::isPortFilter() const
{
    return portFilter_;
}

void BindingVifDetails::setPortFilter(bool value)
{
    portFilter_ = value;
    portFilterIsSet_ = true;
}

bool BindingVifDetails::portFilterIsSet() const
{
    return portFilterIsSet_;
}

void BindingVifDetails::unsetportFilter()
{
    portFilterIsSet_ = false;
}

bool BindingVifDetails::isOvsHybridPlug() const
{
    return ovsHybridPlug_;
}

void BindingVifDetails::setOvsHybridPlug(bool value)
{
    ovsHybridPlug_ = value;
    ovsHybridPlugIsSet_ = true;
}

bool BindingVifDetails::ovsHybridPlugIsSet() const
{
    return ovsHybridPlugIsSet_;
}

void BindingVifDetails::unsetovsHybridPlug()
{
    ovsHybridPlugIsSet_ = false;
}

std::string BindingVifDetails::getVlanId() const
{
    return vlanId_;
}

void BindingVifDetails::setVlanId(const std::string& value)
{
    vlanId_ = value;
    vlanIdIsSet_ = true;
}

bool BindingVifDetails::vlanIdIsSet() const
{
    return vlanIdIsSet_;
}

void BindingVifDetails::unsetvlanId()
{
    vlanIdIsSet_ = false;
}

std::string BindingVifDetails::getParentId() const
{
    return parentId_;
}

void BindingVifDetails::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool BindingVifDetails::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void BindingVifDetails::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string BindingVifDetails::getParentDeviceId() const
{
    return parentDeviceId_;
}

void BindingVifDetails::setParentDeviceId(const std::string& value)
{
    parentDeviceId_ = value;
    parentDeviceIdIsSet_ = true;
}

bool BindingVifDetails::parentDeviceIdIsSet() const
{
    return parentDeviceIdIsSet_;
}

void BindingVifDetails::unsetparentDeviceId()
{
    parentDeviceIdIsSet_ = false;
}

}
}
}
}
}


