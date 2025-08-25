

#include "huaweicloud/cce/v3/model/MasterEIPResponseSpec_spec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MasterEIPResponseSpec_spec::MasterEIPResponseSpec_spec()
{
    id_ = "";
    idIsSet_ = false;
    eipIsSet_ = false;
    isDynamic_ = false;
    isDynamicIsSet_ = false;
}

MasterEIPResponseSpec_spec::~MasterEIPResponseSpec_spec() = default;

void MasterEIPResponseSpec_spec::validate()
{
}

web::json::value MasterEIPResponseSpec_spec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(eipIsSet_) {
        val[utility::conversions::to_string_t("eip")] = ModelBase::toJson(eip_);
    }
    if(isDynamicIsSet_) {
        val[utility::conversions::to_string_t("IsDynamic")] = ModelBase::toJson(isDynamic_);
    }

    return val;
}
bool MasterEIPResponseSpec_spec::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip"));
        if(!fieldValue.is_null())
        {
            EipSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("IsDynamic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("IsDynamic"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDynamic(refVal);
        }
    }
    return ok;
}


std::string MasterEIPResponseSpec_spec::getId() const
{
    return id_;
}

void MasterEIPResponseSpec_spec::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MasterEIPResponseSpec_spec::idIsSet() const
{
    return idIsSet_;
}

void MasterEIPResponseSpec_spec::unsetid()
{
    idIsSet_ = false;
}

EipSpec MasterEIPResponseSpec_spec::getEip() const
{
    return eip_;
}

void MasterEIPResponseSpec_spec::setEip(const EipSpec& value)
{
    eip_ = value;
    eipIsSet_ = true;
}

bool MasterEIPResponseSpec_spec::eipIsSet() const
{
    return eipIsSet_;
}

void MasterEIPResponseSpec_spec::unseteip()
{
    eipIsSet_ = false;
}

bool MasterEIPResponseSpec_spec::isIsDynamic() const
{
    return isDynamic_;
}

void MasterEIPResponseSpec_spec::setIsDynamic(bool value)
{
    isDynamic_ = value;
    isDynamicIsSet_ = true;
}

bool MasterEIPResponseSpec_spec::isDynamicIsSet() const
{
    return isDynamicIsSet_;
}

void MasterEIPResponseSpec_spec::unsetisDynamic()
{
    isDynamicIsSet_ = false;
}

}
}
}
}
}


