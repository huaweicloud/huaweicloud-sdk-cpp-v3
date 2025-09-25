

#include "huaweicloud/codehub/v4/model/RoleBasicDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RoleBasicDto::RoleBasicDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    relatedRoleId_ = "";
    relatedRoleIdIsSet_ = false;
    chineseName_ = "";
    chineseNameIsSet_ = false;
}

RoleBasicDto::~RoleBasicDto() = default;

void RoleBasicDto::validate()
{
}

web::json::value RoleBasicDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(relatedRoleIdIsSet_) {
        val[utility::conversions::to_string_t("related_role_id")] = ModelBase::toJson(relatedRoleId_);
    }
    if(chineseNameIsSet_) {
        val[utility::conversions::to_string_t("chinese_name")] = ModelBase::toJson(chineseName_);
    }

    return val;
}
bool RoleBasicDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("related_role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chinese_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chinese_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChineseName(refVal);
        }
    }
    return ok;
}


int32_t RoleBasicDto::getId() const
{
    return id_;
}

void RoleBasicDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RoleBasicDto::idIsSet() const
{
    return idIsSet_;
}

void RoleBasicDto::unsetid()
{
    idIsSet_ = false;
}

std::string RoleBasicDto::getName() const
{
    return name_;
}

void RoleBasicDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RoleBasicDto::nameIsSet() const
{
    return nameIsSet_;
}

void RoleBasicDto::unsetname()
{
    nameIsSet_ = false;
}

std::string RoleBasicDto::getRelatedRoleId() const
{
    return relatedRoleId_;
}

void RoleBasicDto::setRelatedRoleId(const std::string& value)
{
    relatedRoleId_ = value;
    relatedRoleIdIsSet_ = true;
}

bool RoleBasicDto::relatedRoleIdIsSet() const
{
    return relatedRoleIdIsSet_;
}

void RoleBasicDto::unsetrelatedRoleId()
{
    relatedRoleIdIsSet_ = false;
}

std::string RoleBasicDto::getChineseName() const
{
    return chineseName_;
}

void RoleBasicDto::setChineseName(const std::string& value)
{
    chineseName_ = value;
    chineseNameIsSet_ = true;
}

bool RoleBasicDto::chineseNameIsSet() const
{
    return chineseNameIsSet_;
}

void RoleBasicDto::unsetchineseName()
{
    chineseNameIsSet_ = false;
}

}
}
}
}
}


