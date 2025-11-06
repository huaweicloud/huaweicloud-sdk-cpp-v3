

#include "huaweicloud/codeartsrepo/v4/model/LabelDetailDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




LabelDetailDto::LabelDetailDto()
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
    priority_ = 0;
    priorityIsSet_ = false;
    isRepositoryLabel_ = false;
    isRepositoryLabelIsSet_ = false;
}

LabelDetailDto::~LabelDetailDto() = default;

void LabelDetailDto::validate()
{
}

web::json::value LabelDetailDto::toJson() const
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
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(isRepositoryLabelIsSet_) {
        val[utility::conversions::to_string_t("is_repository_label")] = ModelBase::toJson(isRepositoryLabel_);
    }

    return val;
}
bool LabelDetailDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_repository_label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_repository_label"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRepositoryLabel(refVal);
        }
    }
    return ok;
}


int32_t LabelDetailDto::getId() const
{
    return id_;
}

void LabelDetailDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool LabelDetailDto::idIsSet() const
{
    return idIsSet_;
}

void LabelDetailDto::unsetid()
{
    idIsSet_ = false;
}

std::string LabelDetailDto::getName() const
{
    return name_;
}

void LabelDetailDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LabelDetailDto::nameIsSet() const
{
    return nameIsSet_;
}

void LabelDetailDto::unsetname()
{
    nameIsSet_ = false;
}

std::string LabelDetailDto::getColor() const
{
    return color_;
}

void LabelDetailDto::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool LabelDetailDto::colorIsSet() const
{
    return colorIsSet_;
}

void LabelDetailDto::unsetcolor()
{
    colorIsSet_ = false;
}

std::string LabelDetailDto::getDescription() const
{
    return description_;
}

void LabelDetailDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool LabelDetailDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void LabelDetailDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string LabelDetailDto::getTextColor() const
{
    return textColor_;
}

void LabelDetailDto::setTextColor(const std::string& value)
{
    textColor_ = value;
    textColorIsSet_ = true;
}

bool LabelDetailDto::textColorIsSet() const
{
    return textColorIsSet_;
}

void LabelDetailDto::unsettextColor()
{
    textColorIsSet_ = false;
}

std::string LabelDetailDto::getExpiresAt() const
{
    return expiresAt_;
}

void LabelDetailDto::setExpiresAt(const std::string& value)
{
    expiresAt_ = value;
    expiresAtIsSet_ = true;
}

bool LabelDetailDto::expiresAtIsSet() const
{
    return expiresAtIsSet_;
}

void LabelDetailDto::unsetexpiresAt()
{
    expiresAtIsSet_ = false;
}

bool LabelDetailDto::isIsExpired() const
{
    return isExpired_;
}

void LabelDetailDto::setIsExpired(bool value)
{
    isExpired_ = value;
    isExpiredIsSet_ = true;
}

bool LabelDetailDto::isExpiredIsSet() const
{
    return isExpiredIsSet_;
}

void LabelDetailDto::unsetisExpired()
{
    isExpiredIsSet_ = false;
}

int32_t LabelDetailDto::getOpenMergeRequestsCount() const
{
    return openMergeRequestsCount_;
}

void LabelDetailDto::setOpenMergeRequestsCount(int32_t value)
{
    openMergeRequestsCount_ = value;
    openMergeRequestsCountIsSet_ = true;
}

bool LabelDetailDto::openMergeRequestsCountIsSet() const
{
    return openMergeRequestsCountIsSet_;
}

void LabelDetailDto::unsetopenMergeRequestsCount()
{
    openMergeRequestsCountIsSet_ = false;
}

int32_t LabelDetailDto::getOpenChangeRequestCount() const
{
    return openChangeRequestCount_;
}

void LabelDetailDto::setOpenChangeRequestCount(int32_t value)
{
    openChangeRequestCount_ = value;
    openChangeRequestCountIsSet_ = true;
}

bool LabelDetailDto::openChangeRequestCountIsSet() const
{
    return openChangeRequestCountIsSet_;
}

void LabelDetailDto::unsetopenChangeRequestCount()
{
    openChangeRequestCountIsSet_ = false;
}

int32_t LabelDetailDto::getPriority() const
{
    return priority_;
}

void LabelDetailDto::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool LabelDetailDto::priorityIsSet() const
{
    return priorityIsSet_;
}

void LabelDetailDto::unsetpriority()
{
    priorityIsSet_ = false;
}

bool LabelDetailDto::isIsRepositoryLabel() const
{
    return isRepositoryLabel_;
}

void LabelDetailDto::setIsRepositoryLabel(bool value)
{
    isRepositoryLabel_ = value;
    isRepositoryLabelIsSet_ = true;
}

bool LabelDetailDto::isRepositoryLabelIsSet() const
{
    return isRepositoryLabelIsSet_;
}

void LabelDetailDto::unsetisRepositoryLabel()
{
    isRepositoryLabelIsSet_ = false;
}

}
}
}
}
}


