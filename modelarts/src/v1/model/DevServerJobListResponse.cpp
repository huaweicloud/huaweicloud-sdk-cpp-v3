

#include "huaweicloud/modelarts/v1/model/DevServerJobListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DevServerJobListResponse::DevServerJobListResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    abnormalCount_ = 0;
    abnormalCountIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
}

DevServerJobListResponse::~DevServerJobListResponse() = default;

void DevServerJobListResponse::validate()
{
}

web::json::value DevServerJobListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(abnormalCountIsSet_) {
        val[utility::conversions::to_string_t("abnormal_count")] = ModelBase::toJson(abnormalCount_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }

    return val;
}
bool DevServerJobListResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("abnormal_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("abnormal_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbnormalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    return ok;
}


std::string DevServerJobListResponse::getId() const
{
    return id_;
}

void DevServerJobListResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DevServerJobListResponse::idIsSet() const
{
    return idIsSet_;
}

void DevServerJobListResponse::unsetid()
{
    idIsSet_ = false;
}

std::string DevServerJobListResponse::getName() const
{
    return name_;
}

void DevServerJobListResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DevServerJobListResponse::nameIsSet() const
{
    return nameIsSet_;
}

void DevServerJobListResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string DevServerJobListResponse::getUserName() const
{
    return userName_;
}

void DevServerJobListResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool DevServerJobListResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void DevServerJobListResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string DevServerJobListResponse::getDescription() const
{
    return description_;
}

void DevServerJobListResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DevServerJobListResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DevServerJobListResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string DevServerJobListResponse::getType() const
{
    return type_;
}

void DevServerJobListResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DevServerJobListResponse::typeIsSet() const
{
    return typeIsSet_;
}

void DevServerJobListResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string DevServerJobListResponse::getStatus() const
{
    return status_;
}

void DevServerJobListResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DevServerJobListResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DevServerJobListResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t DevServerJobListResponse::getAbnormalCount() const
{
    return abnormalCount_;
}

void DevServerJobListResponse::setAbnormalCount(int32_t value)
{
    abnormalCount_ = value;
    abnormalCountIsSet_ = true;
}

bool DevServerJobListResponse::abnormalCountIsSet() const
{
    return abnormalCountIsSet_;
}

void DevServerJobListResponse::unsetabnormalCount()
{
    abnormalCountIsSet_ = false;
}

std::string DevServerJobListResponse::getCreateAt() const
{
    return createAt_;
}

void DevServerJobListResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool DevServerJobListResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void DevServerJobListResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string DevServerJobListResponse::getUpdateAt() const
{
    return updateAt_;
}

void DevServerJobListResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool DevServerJobListResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void DevServerJobListResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


