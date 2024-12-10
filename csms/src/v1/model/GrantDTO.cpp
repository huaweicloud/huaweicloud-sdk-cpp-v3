

#include "huaweicloud/csms/v1/model/GrantDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




GrantDTO::GrantDTO()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    granteeUserIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
}

GrantDTO::~GrantDTO() = default;

void GrantDTO::validate()
{
}

web::json::value GrantDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(granteeUserIsSet_) {
        val[utility::conversions::to_string_t("grantee_user")] = ModelBase::toJson(granteeUser_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool GrantDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grantee_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grantee_user"));
        if(!fieldValue.is_null())
        {
            std::vector<GrantUserInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGranteeUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string GrantDTO::getId() const
{
    return id_;
}

void GrantDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GrantDTO::idIsSet() const
{
    return idIsSet_;
}

void GrantDTO::unsetid()
{
    idIsSet_ = false;
}

std::string GrantDTO::getName() const
{
    return name_;
}

void GrantDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GrantDTO::nameIsSet() const
{
    return nameIsSet_;
}

void GrantDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string GrantDTO::getType() const
{
    return type_;
}

void GrantDTO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool GrantDTO::typeIsSet() const
{
    return typeIsSet_;
}

void GrantDTO::unsettype()
{
    typeIsSet_ = false;
}

std::vector<GrantUserInfo>& GrantDTO::getGranteeUser()
{
    return granteeUser_;
}

void GrantDTO::setGranteeUser(const std::vector<GrantUserInfo>& value)
{
    granteeUser_ = value;
    granteeUserIsSet_ = true;
}

bool GrantDTO::granteeUserIsSet() const
{
    return granteeUserIsSet_;
}

void GrantDTO::unsetgranteeUser()
{
    granteeUserIsSet_ = false;
}

int64_t GrantDTO::getCreateTime() const
{
    return createTime_;
}

void GrantDTO::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool GrantDTO::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void GrantDTO::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t GrantDTO::getUpdateTime() const
{
    return updateTime_;
}

void GrantDTO::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool GrantDTO::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void GrantDTO::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


