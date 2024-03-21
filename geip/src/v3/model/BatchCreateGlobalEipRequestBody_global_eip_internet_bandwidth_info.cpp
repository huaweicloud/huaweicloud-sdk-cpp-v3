

#include "huaweicloud/geip/v3/model/BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info()
{
    id_ = "";
    idIsSet_ = false;
    ingressSize_ = 0;
    ingressSizeIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    tagsIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::~BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info() = default;

void BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::validate()
{
}

web::json::value BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ingressSizeIsSet_) {
        val[utility::conversions::to_string_t("ingress_size")] = ModelBase::toJson(ingressSize_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ingress_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ingress_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIngressSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateGlobalEipRequestBody_global_eip_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    return ok;
}


std::string BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::getId() const
{
    return id_;
}

void BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::idIsSet() const
{
    return idIsSet_;
}

void BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::unsetid()
{
    idIsSet_ = false;
}

int32_t BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::getIngressSize() const
{
    return ingressSize_;
}

void BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::setIngressSize(int32_t value)
{
    ingressSize_ = value;
    ingressSizeIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::ingressSizeIsSet() const
{
    return ingressSizeIsSet_;
}

void BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::unsetingressSize()
{
    ingressSizeIsSet_ = false;
}

std::string BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::getChargeMode() const
{
    return chargeMode_;
}

void BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

int32_t BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::getSize() const
{
    return size_;
}

void BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::sizeIsSet() const
{
    return sizeIsSet_;
}

void BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::unsetsize()
{
    sizeIsSet_ = false;
}

std::string BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::getName() const
{
    return name_;
}

void BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::nameIsSet() const
{
    return nameIsSet_;
}

void BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::unsetname()
{
    nameIsSet_ = false;
}

std::vector<CreateGlobalEipRequestBody_global_eip_tags>& BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::getTags()
{
    return tags_;
}

void BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::setTags(const std::vector<CreateGlobalEipRequestBody_global_eip_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::unsettags()
{
    tagsIsSet_ = false;
}

std::string BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::getType() const
{
    return type_;
}

void BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::typeIsSet() const
{
    return typeIsSet_;
}

void BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


