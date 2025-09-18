

#include "huaweicloud/projectman/v4/model/IssueStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueStatus::IssueStatus()
{
    id_ = "";
    idIsSet_ = false;
    statusId_ = 0;
    statusIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    trackerIdsIsSet_ = false;
    statusAttributeIsSet_ = false;
}

IssueStatus::~IssueStatus() = default;

void IssueStatus::validate()
{
}

web::json::value IssueStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIdIsSet_) {
        val[utility::conversions::to_string_t("status_id")] = ModelBase::toJson(statusId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(trackerIdsIsSet_) {
        val[utility::conversions::to_string_t("tracker_ids")] = ModelBase::toJson(trackerIds_);
    }
    if(statusAttributeIsSet_) {
        val[utility::conversions::to_string_t("status_attribute")] = ModelBase::toJson(statusAttribute_);
    }

    return val;
}
bool IssueStatus::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tracker_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_attribute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_attribute"));
        if(!fieldValue.is_null())
        {
            StatusAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusAttribute(refVal);
        }
    }
    return ok;
}


std::string IssueStatus::getId() const
{
    return id_;
}

void IssueStatus::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueStatus::idIsSet() const
{
    return idIsSet_;
}

void IssueStatus::unsetid()
{
    idIsSet_ = false;
}

int32_t IssueStatus::getStatusId() const
{
    return statusId_;
}

void IssueStatus::setStatusId(int32_t value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool IssueStatus::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void IssueStatus::unsetstatusId()
{
    statusIdIsSet_ = false;
}

std::string IssueStatus::getName() const
{
    return name_;
}

void IssueStatus::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IssueStatus::nameIsSet() const
{
    return nameIsSet_;
}

void IssueStatus::unsetname()
{
    nameIsSet_ = false;
}

std::vector<int32_t>& IssueStatus::getTrackerIds()
{
    return trackerIds_;
}

void IssueStatus::setTrackerIds(std::vector<int32_t> value)
{
    trackerIds_ = value;
    trackerIdsIsSet_ = true;
}

bool IssueStatus::trackerIdsIsSet() const
{
    return trackerIdsIsSet_;
}

void IssueStatus::unsettrackerIds()
{
    trackerIdsIsSet_ = false;
}

StatusAttribute IssueStatus::getStatusAttribute() const
{
    return statusAttribute_;
}

void IssueStatus::setStatusAttribute(const StatusAttribute& value)
{
    statusAttribute_ = value;
    statusAttributeIsSet_ = true;
}

bool IssueStatus::statusAttributeIsSet() const
{
    return statusAttributeIsSet_;
}

void IssueStatus::unsetstatusAttribute()
{
    statusAttributeIsSet_ = false;
}

}
}
}
}
}


