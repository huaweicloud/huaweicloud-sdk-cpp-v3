

#include "huaweicloud/functiongraph/v2/model/ListFunctionApplicationResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionApplicationResult::ListFunctionApplicationResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    lastModifiedTime_ = 0L;
    lastModifiedTimeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ListFunctionApplicationResult::~ListFunctionApplicationResult() = default;

void ListFunctionApplicationResult::validate()
{
}

web::json::value ListFunctionApplicationResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(lastModifiedTimeIsSet_) {
        val[utility::conversions::to_string_t("last_modified_time")] = ModelBase::toJson(lastModifiedTime_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ListFunctionApplicationResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifiedTime(refVal);
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


std::string ListFunctionApplicationResult::getId() const
{
    return id_;
}

void ListFunctionApplicationResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListFunctionApplicationResult::idIsSet() const
{
    return idIsSet_;
}

void ListFunctionApplicationResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListFunctionApplicationResult::getName() const
{
    return name_;
}

void ListFunctionApplicationResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListFunctionApplicationResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListFunctionApplicationResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ListFunctionApplicationResult::getStatus() const
{
    return status_;
}

void ListFunctionApplicationResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListFunctionApplicationResult::statusIsSet() const
{
    return statusIsSet_;
}

void ListFunctionApplicationResult::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t ListFunctionApplicationResult::getLastModifiedTime() const
{
    return lastModifiedTime_;
}

void ListFunctionApplicationResult::setLastModifiedTime(int64_t value)
{
    lastModifiedTime_ = value;
    lastModifiedTimeIsSet_ = true;
}

bool ListFunctionApplicationResult::lastModifiedTimeIsSet() const
{
    return lastModifiedTimeIsSet_;
}

void ListFunctionApplicationResult::unsetlastModifiedTime()
{
    lastModifiedTimeIsSet_ = false;
}

std::string ListFunctionApplicationResult::getDescription() const
{
    return description_;
}

void ListFunctionApplicationResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListFunctionApplicationResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListFunctionApplicationResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


