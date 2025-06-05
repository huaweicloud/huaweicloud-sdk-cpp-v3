

#include "huaweicloud/codeartsbuild/v3/model/AddKeystorePermissionResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




AddKeystorePermissionResponseBody::AddKeystorePermissionResponseBody()
{
    id_ = "";
    idIsSet_ = false;
    setting_ = false;
    settingIsSet_ = false;
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
    isCreator_ = false;
    isCreatorIsSet_ = false;
    canAbsent_ = false;
    canAbsentIsSet_ = false;
}

AddKeystorePermissionResponseBody::~AddKeystorePermissionResponseBody() = default;

void AddKeystorePermissionResponseBody::validate()
{
}

web::json::value AddKeystorePermissionResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(settingIsSet_) {
        val[utility::conversions::to_string_t("setting")] = ModelBase::toJson(setting_);
    }
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
    if(isCreatorIsSet_) {
        val[utility::conversions::to_string_t("is_creator")] = ModelBase::toJson(isCreator_);
    }
    if(canAbsentIsSet_) {
        val[utility::conversions::to_string_t("can_absent")] = ModelBase::toJson(canAbsent_);
    }

    return val;
}
bool AddKeystorePermissionResponseBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("setting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setting"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetting(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_creator"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCreator(refVal);
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


std::string AddKeystorePermissionResponseBody::getId() const
{
    return id_;
}

void AddKeystorePermissionResponseBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AddKeystorePermissionResponseBody::idIsSet() const
{
    return idIsSet_;
}

void AddKeystorePermissionResponseBody::unsetid()
{
    idIsSet_ = false;
}

bool AddKeystorePermissionResponseBody::isSetting() const
{
    return setting_;
}

void AddKeystorePermissionResponseBody::setSetting(bool value)
{
    setting_ = value;
    settingIsSet_ = true;
}

bool AddKeystorePermissionResponseBody::settingIsSet() const
{
    return settingIsSet_;
}

void AddKeystorePermissionResponseBody::unsetsetting()
{
    settingIsSet_ = false;
}

bool AddKeystorePermissionResponseBody::isDelete() const
{
    return delete_;
}

void AddKeystorePermissionResponseBody::setDelete(bool value)
{
    delete_ = value;
    deleteIsSet_ = true;
}

bool AddKeystorePermissionResponseBody::deleteIsSet() const
{
    return deleteIsSet_;
}

void AddKeystorePermissionResponseBody::unsetdelete()
{
    deleteIsSet_ = false;
}

std::string AddKeystorePermissionResponseBody::getKeystoreId() const
{
    return keystoreId_;
}

void AddKeystorePermissionResponseBody::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool AddKeystorePermissionResponseBody::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void AddKeystorePermissionResponseBody::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

bool AddKeystorePermissionResponseBody::isModify() const
{
    return modify_;
}

void AddKeystorePermissionResponseBody::setModify(bool value)
{
    modify_ = value;
    modifyIsSet_ = true;
}

bool AddKeystorePermissionResponseBody::modifyIsSet() const
{
    return modifyIsSet_;
}

void AddKeystorePermissionResponseBody::unsetmodify()
{
    modifyIsSet_ = false;
}

bool AddKeystorePermissionResponseBody::isUsage() const
{
    return usage_;
}

void AddKeystorePermissionResponseBody::setUsage(bool value)
{
    usage_ = value;
    usageIsSet_ = true;
}

bool AddKeystorePermissionResponseBody::usageIsSet() const
{
    return usageIsSet_;
}

void AddKeystorePermissionResponseBody::unsetusage()
{
    usageIsSet_ = false;
}

std::string AddKeystorePermissionResponseBody::getUserName() const
{
    return userName_;
}

void AddKeystorePermissionResponseBody::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool AddKeystorePermissionResponseBody::userNameIsSet() const
{
    return userNameIsSet_;
}

void AddKeystorePermissionResponseBody::unsetuserName()
{
    userNameIsSet_ = false;
}

bool AddKeystorePermissionResponseBody::isIsCreator() const
{
    return isCreator_;
}

void AddKeystorePermissionResponseBody::setIsCreator(bool value)
{
    isCreator_ = value;
    isCreatorIsSet_ = true;
}

bool AddKeystorePermissionResponseBody::isCreatorIsSet() const
{
    return isCreatorIsSet_;
}

void AddKeystorePermissionResponseBody::unsetisCreator()
{
    isCreatorIsSet_ = false;
}

bool AddKeystorePermissionResponseBody::isCanAbsent() const
{
    return canAbsent_;
}

void AddKeystorePermissionResponseBody::setCanAbsent(bool value)
{
    canAbsent_ = value;
    canAbsentIsSet_ = true;
}

bool AddKeystorePermissionResponseBody::canAbsentIsSet() const
{
    return canAbsentIsSet_;
}

void AddKeystorePermissionResponseBody::unsetcanAbsent()
{
    canAbsentIsSet_ = false;
}

}
}
}
}
}


