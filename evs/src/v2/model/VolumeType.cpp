

#include "huaweicloud/evs/v2/model/VolumeType.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




VolumeType::VolumeType()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    extraSpecsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    qosSpecsId_ = "";
    qosSpecsIdIsSet_ = false;
    isPublic_ = false;
    isPublicIsSet_ = false;
}

VolumeType::~VolumeType() = default;

void VolumeType::validate()
{
}

web::json::value VolumeType::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(extraSpecsIsSet_) {
        val[utility::conversions::to_string_t("extra_specs")] = ModelBase::toJson(extraSpecs_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(qosSpecsIdIsSet_) {
        val[utility::conversions::to_string_t("qos_specs_id")] = ModelBase::toJson(qosSpecsId_);
    }
    if(isPublicIsSet_) {
        val[utility::conversions::to_string_t("is_public")] = ModelBase::toJson(isPublic_);
    }

    return val;
}

bool VolumeType::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("extra_specs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_specs"));
        if(!fieldValue.is_null())
        {
            VolumeTypeExtraSpecs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraSpecs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qos_specs_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qos_specs_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQosSpecsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_public"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_public"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPublic(refVal);
        }
    }
    return ok;
}


std::string VolumeType::getId() const
{
    return id_;
}

void VolumeType::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VolumeType::idIsSet() const
{
    return idIsSet_;
}

void VolumeType::unsetid()
{
    idIsSet_ = false;
}

std::string VolumeType::getName() const
{
    return name_;
}

void VolumeType::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VolumeType::nameIsSet() const
{
    return nameIsSet_;
}

void VolumeType::unsetname()
{
    nameIsSet_ = false;
}

VolumeTypeExtraSpecs VolumeType::getExtraSpecs() const
{
    return extraSpecs_;
}

void VolumeType::setExtraSpecs(const VolumeTypeExtraSpecs& value)
{
    extraSpecs_ = value;
    extraSpecsIsSet_ = true;
}

bool VolumeType::extraSpecsIsSet() const
{
    return extraSpecsIsSet_;
}

void VolumeType::unsetextraSpecs()
{
    extraSpecsIsSet_ = false;
}

std::string VolumeType::getDescription() const
{
    return description_;
}

void VolumeType::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool VolumeType::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void VolumeType::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string VolumeType::getQosSpecsId() const
{
    return qosSpecsId_;
}

void VolumeType::setQosSpecsId(const std::string& value)
{
    qosSpecsId_ = value;
    qosSpecsIdIsSet_ = true;
}

bool VolumeType::qosSpecsIdIsSet() const
{
    return qosSpecsIdIsSet_;
}

void VolumeType::unsetqosSpecsId()
{
    qosSpecsIdIsSet_ = false;
}

bool VolumeType::isIsPublic() const
{
    return isPublic_;
}

void VolumeType::setIsPublic(bool value)
{
    isPublic_ = value;
    isPublicIsSet_ = true;
}

bool VolumeType::isPublicIsSet() const
{
    return isPublicIsSet_;
}

void VolumeType::unsetisPublic()
{
    isPublicIsSet_ = false;
}

}
}
}
}
}


