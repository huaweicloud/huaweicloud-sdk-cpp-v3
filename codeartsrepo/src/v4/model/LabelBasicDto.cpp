

#include "huaweicloud/codeartsrepo/v4/model/LabelBasicDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




LabelBasicDto::LabelBasicDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    color_ = "";
    colorIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    textColor_ = "";
    textColorIsSet_ = false;
    expiresAt_ = "";
    expiresAtIsSet_ = false;
    isExpired_ = false;
    isExpiredIsSet_ = false;
    openMergeRequestsCount_ = 0;
    openMergeRequestsCountIsSet_ = false;
    openChangeRequestCount_ = 0;
    openChangeRequestCountIsSet_ = false;
}

LabelBasicDto::~LabelBasicDto() = default;

void LabelBasicDto::validate()
{
}

web::json::value LabelBasicDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(colorIsSet_) {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(color_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(textColorIsSet_) {
        val[utility::conversions::to_string_t("text_color")] = ModelBase::toJson(textColor_);
    }
    if(expiresAtIsSet_) {
        val[utility::conversions::to_string_t("expires_at")] = ModelBase::toJson(expiresAt_);
    }
    if(isExpiredIsSet_) {
        val[utility::conversions::to_string_t("is_expired")] = ModelBase::toJson(isExpired_);
    }
    if(openMergeRequestsCountIsSet_) {
        val[utility::conversions::to_string_t("open_merge_requests_count")] = ModelBase::toJson(openMergeRequestsCount_);
    }
    if(openChangeRequestCountIsSet_) {
        val[utility::conversions::to_string_t("open_change_request_count")] = ModelBase::toJson(openChangeRequestCount_);
    }

    return val;
}
bool LabelBasicDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("text_color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextColor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expires_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expires_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiresAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_expired"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_expired"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsExpired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("open_merge_requests_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open_merge_requests_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenMergeRequestsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("open_change_request_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open_change_request_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenChangeRequestCount(refVal);
        }
    }
    return ok;
}


int32_t LabelBasicDto::getId() const
{
    return id_;
}

void LabelBasicDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool LabelBasicDto::idIsSet() const
{
    return idIsSet_;
}

void LabelBasicDto::unsetid()
{
    idIsSet_ = false;
}

std::string LabelBasicDto::getName() const
{
    return name_;
}

void LabelBasicDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LabelBasicDto::nameIsSet() const
{
    return nameIsSet_;
}

void LabelBasicDto::unsetname()
{
    nameIsSet_ = false;
}

std::string LabelBasicDto::getColor() const
{
    return color_;
}

void LabelBasicDto::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool LabelBasicDto::colorIsSet() const
{
    return colorIsSet_;
}

void LabelBasicDto::unsetcolor()
{
    colorIsSet_ = false;
}

std::string LabelBasicDto::getDescription() const
{
    return description_;
}

void LabelBasicDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool LabelBasicDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void LabelBasicDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string LabelBasicDto::getTextColor() const
{
    return textColor_;
}

void LabelBasicDto::setTextColor(const std::string& value)
{
    textColor_ = value;
    textColorIsSet_ = true;
}

bool LabelBasicDto::textColorIsSet() const
{
    return textColorIsSet_;
}

void LabelBasicDto::unsettextColor()
{
    textColorIsSet_ = false;
}

std::string LabelBasicDto::getExpiresAt() const
{
    return expiresAt_;
}

void LabelBasicDto::setExpiresAt(const std::string& value)
{
    expiresAt_ = value;
    expiresAtIsSet_ = true;
}

bool LabelBasicDto::expiresAtIsSet() const
{
    return expiresAtIsSet_;
}

void LabelBasicDto::unsetexpiresAt()
{
    expiresAtIsSet_ = false;
}

bool LabelBasicDto::isIsExpired() const
{
    return isExpired_;
}

void LabelBasicDto::setIsExpired(bool value)
{
    isExpired_ = value;
    isExpiredIsSet_ = true;
}

bool LabelBasicDto::isExpiredIsSet() const
{
    return isExpiredIsSet_;
}

void LabelBasicDto::unsetisExpired()
{
    isExpiredIsSet_ = false;
}

int32_t LabelBasicDto::getOpenMergeRequestsCount() const
{
    return openMergeRequestsCount_;
}

void LabelBasicDto::setOpenMergeRequestsCount(int32_t value)
{
    openMergeRequestsCount_ = value;
    openMergeRequestsCountIsSet_ = true;
}

bool LabelBasicDto::openMergeRequestsCountIsSet() const
{
    return openMergeRequestsCountIsSet_;
}

void LabelBasicDto::unsetopenMergeRequestsCount()
{
    openMergeRequestsCountIsSet_ = false;
}

int32_t LabelBasicDto::getOpenChangeRequestCount() const
{
    return openChangeRequestCount_;
}

void LabelBasicDto::setOpenChangeRequestCount(int32_t value)
{
    openChangeRequestCount_ = value;
    openChangeRequestCountIsSet_ = true;
}

bool LabelBasicDto::openChangeRequestCountIsSet() const
{
    return openChangeRequestCountIsSet_;
}

void LabelBasicDto::unsetopenChangeRequestCount()
{
    openChangeRequestCountIsSet_ = false;
}

}
}
}
}
}


