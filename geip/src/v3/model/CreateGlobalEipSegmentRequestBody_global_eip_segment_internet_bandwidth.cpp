

#include "huaweicloud/geip/v3/model/CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth()
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

CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::~CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth() = default;

void CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::validate()
{
}

web::json::value CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::toJson() const
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
bool CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::fromJson(const web::json::value& val)
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
            std::vector<AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info_tags> refVal;
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


std::string CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::getId() const
{
    return id_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::idIsSet() const
{
    return idIsSet_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::unsetid()
{
    idIsSet_ = false;
}

int32_t CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::getIngressSize() const
{
    return ingressSize_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::setIngressSize(int32_t value)
{
    ingressSize_ = value;
    ingressSizeIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::ingressSizeIsSet() const
{
    return ingressSizeIsSet_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::unsetingressSize()
{
    ingressSizeIsSet_ = false;
}

std::string CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::getChargeMode() const
{
    return chargeMode_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

int32_t CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::getSize() const
{
    return size_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::sizeIsSet() const
{
    return sizeIsSet_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::unsetsize()
{
    sizeIsSet_ = false;
}

std::string CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::getName() const
{
    return name_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::nameIsSet() const
{
    return nameIsSet_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::unsetname()
{
    nameIsSet_ = false;
}

std::vector<AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info_tags>& CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::getTags()
{
    return tags_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::setTags(const std::vector<AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::unsettags()
{
    tagsIsSet_ = false;
}

std::string CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::getType() const
{
    return type_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::typeIsSet() const
{
    return typeIsSet_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


