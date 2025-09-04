

#include "huaweicloud/codeartsbuild/v3/model/AddKeystorePermissionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




AddKeystorePermissionRequestBody::AddKeystorePermissionRequestBody()
{
    delete_ = false;
    deleteIsSet_ = false;
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
    modify_ = false;
    modifyIsSet_ = false;
    usage_ = false;
    usageIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    setting_ = false;
    settingIsSet_ = false;
    canAbsent_ = false;
    canAbsentIsSet_ = false;
}

AddKeystorePermissionRequestBody::~AddKeystorePermissionRequestBody() = default;

void AddKeystorePermissionRequestBody::validate()
{
}

web::json::value AddKeystorePermissionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deleteIsSet_) {
        val[utility::conversions::to_string_t("delete")] = ModelBase::toJson(delete_);
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
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(settingIsSet_) {
        val[utility::conversions::to_string_t("setting")] = ModelBase::toJson(setting_);
    }
    if(canAbsentIsSet_) {
        val[utility::conversions::to_string_t("can_absent")] = ModelBase::toJson(canAbsent_);
    }

    return val;
}
bool AddKeystorePermissionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelete(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("setting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setting"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_absent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_absent"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanAbsent(refVal);
        }
    }
    return ok;
}


bool AddKeystorePermissionRequestBody::isDelete() const
{
    return delete_;
}

void AddKeystorePermissionRequestBody::setDelete(bool value)
{
    delete_ = value;
    deleteIsSet_ = true;
}

bool AddKeystorePermissionRequestBody::deleteIsSet() const
{
    return deleteIsSet_;
}

void AddKeystorePermissionRequestBody::unsetdelete()
{
    deleteIsSet_ = false;
}

std::string AddKeystorePermissionRequestBody::getKeystoreId() const
{
    return keystoreId_;
}

void AddKeystorePermissionRequestBody::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool AddKeystorePermissionRequestBody::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void AddKeystorePermissionRequestBody::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

bool AddKeystorePermissionRequestBody::isModify() const
{
    return modify_;
}

void AddKeystorePermissionRequestBody::setModify(bool value)
{
    modify_ = value;
    modifyIsSet_ = true;
}

bool AddKeystorePermissionRequestBody::modifyIsSet() const
{
    return modifyIsSet_;
}

void AddKeystorePermissionRequestBody::unsetmodify()
{
    modifyIsSet_ = false;
}

bool AddKeystorePermissionRequestBody::isUsage() const
{
    return usage_;
}

void AddKeystorePermissionRequestBody::setUsage(bool value)
{
    usage_ = value;
    usageIsSet_ = true;
}

bool AddKeystorePermissionRequestBody::usageIsSet() const
{
    return usageIsSet_;
}

void AddKeystorePermissionRequestBody::unsetusage()
{
    usageIsSet_ = false;
}

std::string AddKeystorePermissionRequestBody::getUserName() const
{
    return userName_;
}

void AddKeystorePermissionRequestBody::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool AddKeystorePermissionRequestBody::userNameIsSet() const
{
    return userNameIsSet_;
}

void AddKeystorePermissionRequestBody::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string AddKeystorePermissionRequestBody::getUserId() const
{
    return userId_;
}

void AddKeystorePermissionRequestBody::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool AddKeystorePermissionRequestBody::userIdIsSet() const
{
    return userIdIsSet_;
}

void AddKeystorePermissionRequestBody::unsetuserId()
{
    userIdIsSet_ = false;
}

bool AddKeystorePermissionRequestBody::isSetting() const
{
    return setting_;
}

void AddKeystorePermissionRequestBody::setSetting(bool value)
{
    setting_ = value;
    settingIsSet_ = true;
}

bool AddKeystorePermissionRequestBody::settingIsSet() const
{
    return settingIsSet_;
}

void AddKeystorePermissionRequestBody::unsetsetting()
{
    settingIsSet_ = false;
}

bool AddKeystorePermissionRequestBody::isCanAbsent() const
{
    return canAbsent_;
}

void AddKeystorePermissionRequestBody::setCanAbsent(bool value)
{
    canAbsent_ = value;
    canAbsentIsSet_ = true;
}

bool AddKeystorePermissionRequestBody::canAbsentIsSet() const
{
    return canAbsentIsSet_;
}

void AddKeystorePermissionRequestBody::unsetcanAbsent()
{
    canAbsentIsSet_ = false;
}

}
}
}
}
}


