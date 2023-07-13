

#include "huaweicloud/eip/v3/model/ShareBandwidthTypeShowResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ShareBandwidthTypeShowResp::ShareBandwidthTypeShowResp()
{
    id_ = "";
    idIsSet_ = false;
    bandwidthType_ = "";
    bandwidthTypeIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    nameEn_ = "";
    nameEnIsSet_ = false;
    nameZh_ = "";
    nameZhIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ShareBandwidthTypeShowResp::~ShareBandwidthTypeShowResp() = default;

void ShareBandwidthTypeShowResp::validate()
{
}

web::json::value ShareBandwidthTypeShowResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bandwidthTypeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_type")] = ModelBase::toJson(bandwidthType_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(nameEnIsSet_) {
        val[utility::conversions::to_string_t("name_en")] = ModelBase::toJson(nameEn_);
    }
    if(nameZhIsSet_) {
        val[utility::conversions::to_string_t("name_zh")] = ModelBase::toJson(nameZh_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool ShareBandwidthTypeShowResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("bandwidth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_zh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_zh"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameZh(refVal);
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
    return ok;
}

std::string ShareBandwidthTypeShowResp::getId() const
{
    return id_;
}

void ShareBandwidthTypeShowResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShareBandwidthTypeShowResp::idIsSet() const
{
    return idIsSet_;
}

void ShareBandwidthTypeShowResp::unsetid()
{
    idIsSet_ = false;
}

std::string ShareBandwidthTypeShowResp::getBandwidthType() const
{
    return bandwidthType_;
}

void ShareBandwidthTypeShowResp::setBandwidthType(const std::string& value)
{
    bandwidthType_ = value;
    bandwidthTypeIsSet_ = true;
}

bool ShareBandwidthTypeShowResp::bandwidthTypeIsSet() const
{
    return bandwidthTypeIsSet_;
}

void ShareBandwidthTypeShowResp::unsetbandwidthType()
{
    bandwidthTypeIsSet_ = false;
}

std::string ShareBandwidthTypeShowResp::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void ShareBandwidthTypeShowResp::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool ShareBandwidthTypeShowResp::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void ShareBandwidthTypeShowResp::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::string ShareBandwidthTypeShowResp::getCreatedAt() const
{
    return createdAt_;
}

void ShareBandwidthTypeShowResp::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShareBandwidthTypeShowResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShareBandwidthTypeShowResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShareBandwidthTypeShowResp::getUpdatedAt() const
{
    return updatedAt_;
}

void ShareBandwidthTypeShowResp::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShareBandwidthTypeShowResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShareBandwidthTypeShowResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ShareBandwidthTypeShowResp::getNameEn() const
{
    return nameEn_;
}

void ShareBandwidthTypeShowResp::setNameEn(const std::string& value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool ShareBandwidthTypeShowResp::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void ShareBandwidthTypeShowResp::unsetnameEn()
{
    nameEnIsSet_ = false;
}

std::string ShareBandwidthTypeShowResp::getNameZh() const
{
    return nameZh_;
}

void ShareBandwidthTypeShowResp::setNameZh(const std::string& value)
{
    nameZh_ = value;
    nameZhIsSet_ = true;
}

bool ShareBandwidthTypeShowResp::nameZhIsSet() const
{
    return nameZhIsSet_;
}

void ShareBandwidthTypeShowResp::unsetnameZh()
{
    nameZhIsSet_ = false;
}

std::string ShareBandwidthTypeShowResp::getDescription() const
{
    return description_;
}

void ShareBandwidthTypeShowResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShareBandwidthTypeShowResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShareBandwidthTypeShowResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


