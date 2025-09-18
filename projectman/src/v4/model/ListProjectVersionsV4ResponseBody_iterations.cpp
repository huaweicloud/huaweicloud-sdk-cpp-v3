

#include "huaweicloud/projectman/v4/model/ListProjectVersionsV4ResponseBody_iterations.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectVersionsV4ResponseBody_iterations::ListProjectVersionsV4ResponseBody_iterations()
{
    description_ = "";
    descriptionIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    updatedTime_ = 0L;
    updatedTimeIsSet_ = false;
    deleted_ = false;
    deletedIsSet_ = false;
}

ListProjectVersionsV4ResponseBody_iterations::~ListProjectVersionsV4ResponseBody_iterations() = default;

void ListProjectVersionsV4ResponseBody_iterations::validate()
{
}

web::json::value ListProjectVersionsV4ResponseBody_iterations::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(updatedTimeIsSet_) {
        val[utility::conversions::to_string_t("updated_time")] = ModelBase::toJson(updatedTime_);
    }
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }

    return val;
}
bool ListProjectVersionsV4ResponseBody_iterations::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleted(refVal);
        }
    }
    return ok;
}


std::string ListProjectVersionsV4ResponseBody_iterations::getDescription() const
{
    return description_;
}

void ListProjectVersionsV4ResponseBody_iterations::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListProjectVersionsV4ResponseBody_iterations::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListProjectVersionsV4ResponseBody_iterations::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ListProjectVersionsV4ResponseBody_iterations::getEndTime() const
{
    return endTime_;
}

void ListProjectVersionsV4ResponseBody_iterations::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListProjectVersionsV4ResponseBody_iterations::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListProjectVersionsV4ResponseBody_iterations::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListProjectVersionsV4ResponseBody_iterations::getId() const
{
    return id_;
}

void ListProjectVersionsV4ResponseBody_iterations::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListProjectVersionsV4ResponseBody_iterations::idIsSet() const
{
    return idIsSet_;
}

void ListProjectVersionsV4ResponseBody_iterations::unsetid()
{
    idIsSet_ = false;
}

std::string ListProjectVersionsV4ResponseBody_iterations::getName() const
{
    return name_;
}

void ListProjectVersionsV4ResponseBody_iterations::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListProjectVersionsV4ResponseBody_iterations::nameIsSet() const
{
    return nameIsSet_;
}

void ListProjectVersionsV4ResponseBody_iterations::unsetname()
{
    nameIsSet_ = false;
}

std::string ListProjectVersionsV4ResponseBody_iterations::getBeginTime() const
{
    return beginTime_;
}

void ListProjectVersionsV4ResponseBody_iterations::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ListProjectVersionsV4ResponseBody_iterations::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ListProjectVersionsV4ResponseBody_iterations::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ListProjectVersionsV4ResponseBody_iterations::getStatus() const
{
    return status_;
}

void ListProjectVersionsV4ResponseBody_iterations::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListProjectVersionsV4ResponseBody_iterations::statusIsSet() const
{
    return statusIsSet_;
}

void ListProjectVersionsV4ResponseBody_iterations::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t ListProjectVersionsV4ResponseBody_iterations::getUpdatedTime() const
{
    return updatedTime_;
}

void ListProjectVersionsV4ResponseBody_iterations::setUpdatedTime(int64_t value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool ListProjectVersionsV4ResponseBody_iterations::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void ListProjectVersionsV4ResponseBody_iterations::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

bool ListProjectVersionsV4ResponseBody_iterations::isDeleted() const
{
    return deleted_;
}

void ListProjectVersionsV4ResponseBody_iterations::setDeleted(bool value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool ListProjectVersionsV4ResponseBody_iterations::deletedIsSet() const
{
    return deletedIsSet_;
}

void ListProjectVersionsV4ResponseBody_iterations::unsetdeleted()
{
    deletedIsSet_ = false;
}

}
}
}
}
}


