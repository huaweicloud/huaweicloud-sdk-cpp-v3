

#include "huaweicloud/geip/v3/model/AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    bandwidth_ = 0;
    bandwidthIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    localArea_ = "";
    localAreaIsSet_ = false;
    remoteArea_ = "";
    remoteAreaIsSet_ = false;
    tagsIsSet_ = false;
}

AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::~AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info() = default;

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::validate()
{
}

web::json::value AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(localAreaIsSet_) {
        val[utility::conversions::to_string_t("local_area")] = ModelBase::toJson(localArea_);
    }
    if(remoteAreaIsSet_) {
        val[utility::conversions::to_string_t("remote_area")] = ModelBase::toJson(remoteArea_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("local_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("local_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalArea(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteArea(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::getId() const
{
    return id_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::idIsSet() const
{
    return idIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::unsetid()
{
    idIsSet_ = false;
}

std::string AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::getName() const
{
    return name_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::nameIsSet() const
{
    return nameIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::unsetname()
{
    nameIsSet_ = false;
}

std::string AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::getDescription() const
{
    return description_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::getType() const
{
    return type_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::typeIsSet() const
{
    return typeIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::unsettype()
{
    typeIsSet_ = false;
}

std::string AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::getChargeMode() const
{
    return chargeMode_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

int32_t AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::getBandwidth() const
{
    return bandwidth_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::setBandwidth(int32_t value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

int32_t AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::getSize() const
{
    return size_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::sizeIsSet() const
{
    return sizeIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::unsetsize()
{
    sizeIsSet_ = false;
}

std::string AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::getLocalArea() const
{
    return localArea_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::setLocalArea(const std::string& value)
{
    localArea_ = value;
    localAreaIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::localAreaIsSet() const
{
    return localAreaIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::unsetlocalArea()
{
    localAreaIsSet_ = false;
}

std::string AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::getRemoteArea() const
{
    return remoteArea_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::setRemoteArea(const std::string& value)
{
    remoteArea_ = value;
    remoteAreaIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::remoteAreaIsSet() const
{
    return remoteAreaIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::unsetremoteArea()
{
    remoteAreaIsSet_ = false;
}

std::vector<AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info_tags>& AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::getTags()
{
    return tags_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::setTags(const std::vector<AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::tagsIsSet() const
{
    return tagsIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


