

#include "huaweicloud/drs/v5/model/CompareUserInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CompareUserInfo::CompareUserInfo()
{
    id_ = "";
    idIsSet_ = false;
    srcUserName_ = "";
    srcUserNameIsSet_ = false;
    tarUserName_ = "";
    tarUserNameIsSet_ = false;
    srcPrivileges_ = "";
    srcPrivilegesIsSet_ = false;
    tarPrivileges_ = "";
    tarPrivilegesIsSet_ = false;
    isTargetExisted_ = false;
    isTargetExistedIsSet_ = false;
    compareResult_ = 0;
    compareResultIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

CompareUserInfo::~CompareUserInfo() = default;

void CompareUserInfo::validate()
{
}

web::json::value CompareUserInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(srcUserNameIsSet_) {
        val[utility::conversions::to_string_t("src_user_name")] = ModelBase::toJson(srcUserName_);
    }
    if(tarUserNameIsSet_) {
        val[utility::conversions::to_string_t("tar_user_name")] = ModelBase::toJson(tarUserName_);
    }
    if(srcPrivilegesIsSet_) {
        val[utility::conversions::to_string_t("src_privileges")] = ModelBase::toJson(srcPrivileges_);
    }
    if(tarPrivilegesIsSet_) {
        val[utility::conversions::to_string_t("tar_privileges")] = ModelBase::toJson(tarPrivileges_);
    }
    if(isTargetExistedIsSet_) {
        val[utility::conversions::to_string_t("is_target_existed")] = ModelBase::toJson(isTargetExisted_);
    }
    if(compareResultIsSet_) {
        val[utility::conversions::to_string_t("compare_result")] = ModelBase::toJson(compareResult_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool CompareUserInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("src_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tar_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tar_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_privileges"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_privileges"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcPrivileges(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tar_privileges"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tar_privileges"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarPrivileges(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_target_existed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_target_existed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTargetExisted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_result"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string CompareUserInfo::getId() const
{
    return id_;
}

void CompareUserInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CompareUserInfo::idIsSet() const
{
    return idIsSet_;
}

void CompareUserInfo::unsetid()
{
    idIsSet_ = false;
}

std::string CompareUserInfo::getSrcUserName() const
{
    return srcUserName_;
}

void CompareUserInfo::setSrcUserName(const std::string& value)
{
    srcUserName_ = value;
    srcUserNameIsSet_ = true;
}

bool CompareUserInfo::srcUserNameIsSet() const
{
    return srcUserNameIsSet_;
}

void CompareUserInfo::unsetsrcUserName()
{
    srcUserNameIsSet_ = false;
}

std::string CompareUserInfo::getTarUserName() const
{
    return tarUserName_;
}

void CompareUserInfo::setTarUserName(const std::string& value)
{
    tarUserName_ = value;
    tarUserNameIsSet_ = true;
}

bool CompareUserInfo::tarUserNameIsSet() const
{
    return tarUserNameIsSet_;
}

void CompareUserInfo::unsettarUserName()
{
    tarUserNameIsSet_ = false;
}

std::string CompareUserInfo::getSrcPrivileges() const
{
    return srcPrivileges_;
}

void CompareUserInfo::setSrcPrivileges(const std::string& value)
{
    srcPrivileges_ = value;
    srcPrivilegesIsSet_ = true;
}

bool CompareUserInfo::srcPrivilegesIsSet() const
{
    return srcPrivilegesIsSet_;
}

void CompareUserInfo::unsetsrcPrivileges()
{
    srcPrivilegesIsSet_ = false;
}

std::string CompareUserInfo::getTarPrivileges() const
{
    return tarPrivileges_;
}

void CompareUserInfo::setTarPrivileges(const std::string& value)
{
    tarPrivileges_ = value;
    tarPrivilegesIsSet_ = true;
}

bool CompareUserInfo::tarPrivilegesIsSet() const
{
    return tarPrivilegesIsSet_;
}

void CompareUserInfo::unsettarPrivileges()
{
    tarPrivilegesIsSet_ = false;
}

bool CompareUserInfo::isIsTargetExisted() const
{
    return isTargetExisted_;
}

void CompareUserInfo::setIsTargetExisted(bool value)
{
    isTargetExisted_ = value;
    isTargetExistedIsSet_ = true;
}

bool CompareUserInfo::isTargetExistedIsSet() const
{
    return isTargetExistedIsSet_;
}

void CompareUserInfo::unsetisTargetExisted()
{
    isTargetExistedIsSet_ = false;
}

int32_t CompareUserInfo::getCompareResult() const
{
    return compareResult_;
}

void CompareUserInfo::setCompareResult(int32_t value)
{
    compareResult_ = value;
    compareResultIsSet_ = true;
}

bool CompareUserInfo::compareResultIsSet() const
{
    return compareResultIsSet_;
}

void CompareUserInfo::unsetcompareResult()
{
    compareResultIsSet_ = false;
}

std::string CompareUserInfo::getCreatedAt() const
{
    return createdAt_;
}

void CompareUserInfo::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CompareUserInfo::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CompareUserInfo::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CompareUserInfo::getUpdatedAt() const
{
    return updatedAt_;
}

void CompareUserInfo::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool CompareUserInfo::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void CompareUserInfo::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


