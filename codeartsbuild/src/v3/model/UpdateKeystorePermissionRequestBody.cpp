

#include "huaweicloud/codeartsbuild/v3/model/UpdateKeystorePermissionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateKeystorePermissionRequestBody::UpdateKeystorePermissionRequestBody()
{
    canAbsent_ = false;
    canAbsentIsSet_ = false;
    delete_ = false;
    deleteIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
    modify_ = false;
    modifyIsSet_ = false;
    usage_ = false;
    usageIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

UpdateKeystorePermissionRequestBody::~UpdateKeystorePermissionRequestBody() = default;

void UpdateKeystorePermissionRequestBody::validate()
{
}

web::json::value UpdateKeystorePermissionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(canAbsentIsSet_) {
        val[utility::conversions::to_string_t("can_absent")] = ModelBase::toJson(canAbsent_);
    }
    if(deleteIsSet_) {
        val[utility::conversions::to_string_t("delete")] = ModelBase::toJson(delete_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }
    if(modifyIsSet_) {
        val[utility::conversions::to_string_t("modify")] = ModelBase::toJson(modify_);
    }
    if(usageIsSet_) {
        val[utility::conversions::to_string_t("usage")] = ModelBase::toJson(usage_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool UpdateKeystorePermissionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("can_absent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_absent"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanAbsent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keystore_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usage"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsage(refVal);
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
    return ok;
}


bool UpdateKeystorePermissionRequestBody::isCanAbsent() const
{
    return canAbsent_;
}

void UpdateKeystorePermissionRequestBody::setCanAbsent(bool value)
{
    canAbsent_ = value;
    canAbsentIsSet_ = true;
}

bool UpdateKeystorePermissionRequestBody::canAbsentIsSet() const
{
    return canAbsentIsSet_;
}

void UpdateKeystorePermissionRequestBody::unsetcanAbsent()
{
    canAbsentIsSet_ = false;
}

bool UpdateKeystorePermissionRequestBody::isDelete() const
{
    return delete_;
}

void UpdateKeystorePermissionRequestBody::setDelete(bool value)
{
    delete_ = value;
    deleteIsSet_ = true;
}

bool UpdateKeystorePermissionRequestBody::deleteIsSet() const
{
    return deleteIsSet_;
}

void UpdateKeystorePermissionRequestBody::unsetdelete()
{
    deleteIsSet_ = false;
}

std::string UpdateKeystorePermissionRequestBody::getId() const
{
    return id_;
}

void UpdateKeystorePermissionRequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateKeystorePermissionRequestBody::idIsSet() const
{
    return idIsSet_;
}

void UpdateKeystorePermissionRequestBody::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateKeystorePermissionRequestBody::getKeystoreId() const
{
    return keystoreId_;
}

void UpdateKeystorePermissionRequestBody::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool UpdateKeystorePermissionRequestBody::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void UpdateKeystorePermissionRequestBody::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

bool UpdateKeystorePermissionRequestBody::isModify() const
{
    return modify_;
}

void UpdateKeystorePermissionRequestBody::setModify(bool value)
{
    modify_ = value;
    modifyIsSet_ = true;
}

bool UpdateKeystorePermissionRequestBody::modifyIsSet() const
{
    return modifyIsSet_;
}

void UpdateKeystorePermissionRequestBody::unsetmodify()
{
    modifyIsSet_ = false;
}

bool UpdateKeystorePermissionRequestBody::isUsage() const
{
    return usage_;
}

void UpdateKeystorePermissionRequestBody::setUsage(bool value)
{
    usage_ = value;
    usageIsSet_ = true;
}

bool UpdateKeystorePermissionRequestBody::usageIsSet() const
{
    return usageIsSet_;
}

void UpdateKeystorePermissionRequestBody::unsetusage()
{
    usageIsSet_ = false;
}

std::string UpdateKeystorePermissionRequestBody::getUserName() const
{
    return userName_;
}

void UpdateKeystorePermissionRequestBody::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool UpdateKeystorePermissionRequestBody::userNameIsSet() const
{
    return userNameIsSet_;
}

void UpdateKeystorePermissionRequestBody::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


