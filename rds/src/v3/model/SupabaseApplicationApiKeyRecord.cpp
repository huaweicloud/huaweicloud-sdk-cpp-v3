

#include "huaweicloud/rds/v3/model/SupabaseApplicationApiKeyRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseApplicationApiKeyRecord::SupabaseApplicationApiKeyRecord()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    createdUser_ = "";
    createdUserIsSet_ = false;
    updatedUser_ = "";
    updatedUserIsSet_ = false;
    createdTime_ = 0L;
    createdTimeIsSet_ = false;
    updatedTime_ = 0L;
    updatedTimeIsSet_ = false;
}

SupabaseApplicationApiKeyRecord::~SupabaseApplicationApiKeyRecord() = default;

void SupabaseApplicationApiKeyRecord::validate()
{
}

web::json::value SupabaseApplicationApiKeyRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(createdUserIsSet_) {
        val[utility::conversions::to_string_t("created_user")] = ModelBase::toJson(createdUser_);
    }
    if(updatedUserIsSet_) {
        val[utility::conversions::to_string_t("updated_user")] = ModelBase::toJson(updatedUser_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(updatedTimeIsSet_) {
        val[utility::conversions::to_string_t("updated_time")] = ModelBase::toJson(updatedTime_);
    }

    return val;
}
bool SupabaseApplicationApiKeyRecord::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
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
    return ok;
}


std::string SupabaseApplicationApiKeyRecord::getId() const
{
    return id_;
}

void SupabaseApplicationApiKeyRecord::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SupabaseApplicationApiKeyRecord::idIsSet() const
{
    return idIsSet_;
}

void SupabaseApplicationApiKeyRecord::unsetid()
{
    idIsSet_ = false;
}

std::string SupabaseApplicationApiKeyRecord::getName() const
{
    return name_;
}

void SupabaseApplicationApiKeyRecord::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SupabaseApplicationApiKeyRecord::nameIsSet() const
{
    return nameIsSet_;
}

void SupabaseApplicationApiKeyRecord::unsetname()
{
    nameIsSet_ = false;
}

std::string SupabaseApplicationApiKeyRecord::getRemark() const
{
    return remark_;
}

void SupabaseApplicationApiKeyRecord::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool SupabaseApplicationApiKeyRecord::remarkIsSet() const
{
    return remarkIsSet_;
}

void SupabaseApplicationApiKeyRecord::unsetremark()
{
    remarkIsSet_ = false;
}

std::string SupabaseApplicationApiKeyRecord::getStatus() const
{
    return status_;
}

void SupabaseApplicationApiKeyRecord::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SupabaseApplicationApiKeyRecord::statusIsSet() const
{
    return statusIsSet_;
}

void SupabaseApplicationApiKeyRecord::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SupabaseApplicationApiKeyRecord::getType() const
{
    return type_;
}

void SupabaseApplicationApiKeyRecord::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SupabaseApplicationApiKeyRecord::typeIsSet() const
{
    return typeIsSet_;
}

void SupabaseApplicationApiKeyRecord::unsettype()
{
    typeIsSet_ = false;
}

std::string SupabaseApplicationApiKeyRecord::getCreatedUser() const
{
    return createdUser_;
}

void SupabaseApplicationApiKeyRecord::setCreatedUser(const std::string& value)
{
    createdUser_ = value;
    createdUserIsSet_ = true;
}

bool SupabaseApplicationApiKeyRecord::createdUserIsSet() const
{
    return createdUserIsSet_;
}

void SupabaseApplicationApiKeyRecord::unsetcreatedUser()
{
    createdUserIsSet_ = false;
}

std::string SupabaseApplicationApiKeyRecord::getUpdatedUser() const
{
    return updatedUser_;
}

void SupabaseApplicationApiKeyRecord::setUpdatedUser(const std::string& value)
{
    updatedUser_ = value;
    updatedUserIsSet_ = true;
}

bool SupabaseApplicationApiKeyRecord::updatedUserIsSet() const
{
    return updatedUserIsSet_;
}

void SupabaseApplicationApiKeyRecord::unsetupdatedUser()
{
    updatedUserIsSet_ = false;
}

int64_t SupabaseApplicationApiKeyRecord::getCreatedTime() const
{
    return createdTime_;
}

void SupabaseApplicationApiKeyRecord::setCreatedTime(int64_t value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool SupabaseApplicationApiKeyRecord::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void SupabaseApplicationApiKeyRecord::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

int64_t SupabaseApplicationApiKeyRecord::getUpdatedTime() const
{
    return updatedTime_;
}

void SupabaseApplicationApiKeyRecord::setUpdatedTime(int64_t value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool SupabaseApplicationApiKeyRecord::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void SupabaseApplicationApiKeyRecord::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

}
}
}
}
}


