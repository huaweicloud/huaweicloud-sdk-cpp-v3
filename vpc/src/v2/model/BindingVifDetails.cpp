

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

}
}
}
}
}


