

#include "huaweicloud/projectman/v4/model/IssueCustomField.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueCustomField::IssueCustomField()
{
    name_ = "";
    nameIsSet_ = false;
    customField_ = "";
    customFieldIsSet_ = false;
    options_ = "";
    optionsIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    trackerIdsIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
}

IssueCustomField::~IssueCustomField() = default;

void IssueCustomField::validate()
{
}

web::json::value IssueCustomField::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(customFieldIsSet_) {
        val[utility::conversions::to_string_t("custom_field")] = ModelBase::toJson(customField_);
    }
    if(optionsIsSet_) {
        val[utility::conversions::to_string_t("options")] = ModelBase::toJson(options_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(trackerIdsIsSet_) {
        val[utility::conversions::to_string_t("tracker_ids")] = ModelBase::toJson(trackerIds_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool IssueCustomField::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("options"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptions(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tracker_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string IssueCustomField::getName() const
{
    return name_;
}

void IssueCustomField::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IssueCustomField::nameIsSet() const
{
    return nameIsSet_;
}

void IssueCustomField::unsetname()
{
    nameIsSet_ = false;
}

std::string IssueCustomField::getCustomField() const
{
    return customField_;
}

void IssueCustomField::setCustomField(const std::string& value)
{
    customField_ = value;
    customFieldIsSet_ = true;
}

bool IssueCustomField::customFieldIsSet() const
{
    return customFieldIsSet_;
}

void IssueCustomField::unsetcustomField()
{
    customFieldIsSet_ = false;
}

std::string IssueCustomField::getOptions() const
{
    return options_;
}

void IssueCustomField::setOptions(const std::string& value)
{
    options_ = value;
    optionsIsSet_ = true;
}

bool IssueCustomField::optionsIsSet() const
{
    return optionsIsSet_;
}

void IssueCustomField::unsetoptions()
{
    optionsIsSet_ = false;
}

std::string IssueCustomField::getType() const
{
    return type_;
}

void IssueCustomField::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool IssueCustomField::typeIsSet() const
{
    return typeIsSet_;
}

void IssueCustomField::unsettype()
{
    typeIsSet_ = false;
}

std::vector<int32_t>& IssueCustomField::getTrackerIds()
{
    return trackerIds_;
}

void IssueCustomField::setTrackerIds(std::vector<int32_t> value)
{
    trackerIds_ = value;
    trackerIdsIsSet_ = true;
}

bool IssueCustomField::trackerIdsIsSet() const
{
    return trackerIdsIsSet_;
}

void IssueCustomField::unsettrackerIds()
{
    trackerIdsIsSet_ = false;
}

std::string IssueCustomField::getCreateTime() const
{
    return createTime_;
}

void IssueCustomField::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool IssueCustomField::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void IssueCustomField::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


