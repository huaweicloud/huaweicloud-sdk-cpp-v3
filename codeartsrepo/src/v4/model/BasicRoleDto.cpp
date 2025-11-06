

#include "huaweicloud/codeartsrepo/v4/model/BasicRoleDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BasicRoleDto::BasicRoleDto()
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

BasicRoleDto::~BasicRoleDto() = default;

void BasicRoleDto::validate()
{
}

web::json::value BasicRoleDto::toJson() const
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
bool BasicRoleDto::fromJson(const web::json::value& val)
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


int32_t BasicRoleDto::getId() const
{
    return id_;
}

void BasicRoleDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BasicRoleDto::idIsSet() const
{
    return idIsSet_;
}

void BasicRoleDto::unsetid()
{
    idIsSet_ = false;
}

std::string BasicRoleDto::getName() const
{
    return name_;
}

void BasicRoleDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BasicRoleDto::nameIsSet() const
{
    return nameIsSet_;
}

void BasicRoleDto::unsetname()
{
    nameIsSet_ = false;
}

std::string BasicRoleDto::getRelatedRoleId() const
{
    return relatedRoleId_;
}

void BasicRoleDto::setRelatedRoleId(const std::string& value)
{
    relatedRoleId_ = value;
    relatedRoleIdIsSet_ = true;
}

bool BasicRoleDto::relatedRoleIdIsSet() const
{
    return relatedRoleIdIsSet_;
}

void BasicRoleDto::unsetrelatedRoleId()
{
    relatedRoleIdIsSet_ = false;
}

std::string BasicRoleDto::getChineseName() const
{
    return chineseName_;
}

void BasicRoleDto::setChineseName(const std::string& value)
{
    chineseName_ = value;
    chineseNameIsSet_ = true;
}

bool BasicRoleDto::chineseNameIsSet() const
{
    return chineseNameIsSet_;
}

void BasicRoleDto::unsetchineseName()
{
    chineseNameIsSet_ = false;
}

}
}
}
}
}


