

#include "huaweicloud/cfw/v1/model/IpsSwitchResponseDTO.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpsSwitchResponseDTO::IpsSwitchResponseDTO()
{
    id_ = "";
    idIsSet_ = false;
    basicDefenseStatus_ = 0;
    basicDefenseStatusIsSet_ = false;
    virtualPatchesStatus_ = 0;
    virtualPatchesStatusIsSet_ = false;
}

IpsSwitchResponseDTO::~IpsSwitchResponseDTO() = default;

void IpsSwitchResponseDTO::validate()
{
}

web::json::value IpsSwitchResponseDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(basicDefenseStatusIsSet_) {
        val[utility::conversions::to_string_t("basic_defense_status")] = ModelBase::toJson(basicDefenseStatus_);
    }
    if(virtualPatchesStatusIsSet_) {
        val[utility::conversions::to_string_t("virtual_patches_status")] = ModelBase::toJson(virtualPatchesStatus_);
    }

    return val;
}

bool IpsSwitchResponseDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("basic_defense_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic_defense_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasicDefenseStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("virtual_patches_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("virtual_patches_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVirtualPatchesStatus(refVal);
        }
    }
    return ok;
}


std::string IpsSwitchResponseDTO::getId() const
{
    return id_;
}

void IpsSwitchResponseDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IpsSwitchResponseDTO::idIsSet() const
{
    return idIsSet_;
}

void IpsSwitchResponseDTO::unsetid()
{
    idIsSet_ = false;
}

int32_t IpsSwitchResponseDTO::getBasicDefenseStatus() const
{
    return basicDefenseStatus_;
}

void IpsSwitchResponseDTO::setBasicDefenseStatus(int32_t value)
{
    basicDefenseStatus_ = value;
    basicDefenseStatusIsSet_ = true;
}

bool IpsSwitchResponseDTO::basicDefenseStatusIsSet() const
{
    return basicDefenseStatusIsSet_;
}

void IpsSwitchResponseDTO::unsetbasicDefenseStatus()
{
    basicDefenseStatusIsSet_ = false;
}

int32_t IpsSwitchResponseDTO::getVirtualPatchesStatus() const
{
    return virtualPatchesStatus_;
}

void IpsSwitchResponseDTO::setVirtualPatchesStatus(int32_t value)
{
    virtualPatchesStatus_ = value;
    virtualPatchesStatusIsSet_ = true;
}

bool IpsSwitchResponseDTO::virtualPatchesStatusIsSet() const
{
    return virtualPatchesStatusIsSet_;
}

void IpsSwitchResponseDTO::unsetvirtualPatchesStatus()
{
    virtualPatchesStatusIsSet_ = false;
}

}
}
}
}
}


