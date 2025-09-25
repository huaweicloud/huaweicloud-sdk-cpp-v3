

#include "huaweicloud/codehub/v4/model/TransferGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




TransferGroupResponse::TransferGroupResponse()
{
    id_ = 0;
    idIsSet_ = false;
    fullName_ = "";
    fullNameIsSet_ = false;
    fullPath_ = "";
    fullPathIsSet_ = false;
    myRoleIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    parentId_ = 0;
    parentIdIsSet_ = false;
    creatorId_ = 0;
    creatorIdIsSet_ = false;
}

TransferGroupResponse::~TransferGroupResponse() = default;

void TransferGroupResponse::validate()
{
}

web::json::value TransferGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(fullNameIsSet_) {
        val[utility::conversions::to_string_t("full_name")] = ModelBase::toJson(fullName_);
    }
    if(fullPathIsSet_) {
        val[utility::conversions::to_string_t("full_path")] = ModelBase::toJson(fullPath_);
    }
    if(myRoleIsSet_) {
        val[utility::conversions::to_string_t("my_role")] = ModelBase::toJson(myRole_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }

    return val;
}
bool TransferGroupResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("full_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("my_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("my_role"));
        if(!fieldValue.is_null())
        {
            GroupMyRoleDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMyRole(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    return ok;
}


int32_t TransferGroupResponse::getId() const
{
    return id_;
}

void TransferGroupResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TransferGroupResponse::idIsSet() const
{
    return idIsSet_;
}

void TransferGroupResponse::unsetid()
{
    idIsSet_ = false;
}

std::string TransferGroupResponse::getFullName() const
{
    return fullName_;
}

void TransferGroupResponse::setFullName(const std::string& value)
{
    fullName_ = value;
    fullNameIsSet_ = true;
}

bool TransferGroupResponse::fullNameIsSet() const
{
    return fullNameIsSet_;
}

void TransferGroupResponse::unsetfullName()
{
    fullNameIsSet_ = false;
}

std::string TransferGroupResponse::getFullPath() const
{
    return fullPath_;
}

void TransferGroupResponse::setFullPath(const std::string& value)
{
    fullPath_ = value;
    fullPathIsSet_ = true;
}

bool TransferGroupResponse::fullPathIsSet() const
{
    return fullPathIsSet_;
}

void TransferGroupResponse::unsetfullPath()
{
    fullPathIsSet_ = false;
}

GroupMyRoleDto TransferGroupResponse::getMyRole() const
{
    return myRole_;
}

void TransferGroupResponse::setMyRole(const GroupMyRoleDto& value)
{
    myRole_ = value;
    myRoleIsSet_ = true;
}

bool TransferGroupResponse::myRoleIsSet() const
{
    return myRoleIsSet_;
}

void TransferGroupResponse::unsetmyRole()
{
    myRoleIsSet_ = false;
}

std::string TransferGroupResponse::getName() const
{
    return name_;
}

void TransferGroupResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TransferGroupResponse::nameIsSet() const
{
    return nameIsSet_;
}

void TransferGroupResponse::unsetname()
{
    nameIsSet_ = false;
}

int32_t TransferGroupResponse::getParentId() const
{
    return parentId_;
}

void TransferGroupResponse::setParentId(int32_t value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool TransferGroupResponse::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void TransferGroupResponse::unsetparentId()
{
    parentIdIsSet_ = false;
}

int32_t TransferGroupResponse::getCreatorId() const
{
    return creatorId_;
}

void TransferGroupResponse::setCreatorId(int32_t value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool TransferGroupResponse::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void TransferGroupResponse::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

}
}
}
}
}


