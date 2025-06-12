

#include "huaweicloud/codeartsbuild/v3/model/ListKeystoreSearchResponseBody_result_keystore_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListKeystoreSearchResponseBody_result_keystore_list::ListKeystoreSearchResponseBody_result_keystore_list()
{
    id_ = "";
    idIsSet_ = false;
    permissionIsSet_ = false;
    createTimeStamp_ = "";
    createTimeStampIsSet_ = false;
    updateTimeStamp_ = "";
    updateTimeStampIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    keystoreName_ = "";
    keystoreNameIsSet_ = false;
    createUserId_ = "";
    createUserIdIsSet_ = false;
    createUserName_ = "";
    createUserNameIsSet_ = false;
    updateUserId_ = "";
    updateUserIdIsSet_ = false;
    updateUserName_ = "";
    updateUserNameIsSet_ = false;
    share_ = 0.0;
    shareIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ListKeystoreSearchResponseBody_result_keystore_list::~ListKeystoreSearchResponseBody_result_keystore_list() = default;

void ListKeystoreSearchResponseBody_result_keystore_list::validate()
{
}

web::json::value ListKeystoreSearchResponseBody_result_keystore_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(permissionIsSet_) {
        val[utility::conversions::to_string_t("permission")] = ModelBase::toJson(permission_);
    }
    if(createTimeStampIsSet_) {
        val[utility::conversions::to_string_t("create_time_stamp")] = ModelBase::toJson(createTimeStamp_);
    }
    if(updateTimeStampIsSet_) {
        val[utility::conversions::to_string_t("update_time_stamp")] = ModelBase::toJson(updateTimeStamp_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(keystoreNameIsSet_) {
        val[utility::conversions::to_string_t("keystore_name")] = ModelBase::toJson(keystoreName_);
    }
    if(createUserIdIsSet_) {
        val[utility::conversions::to_string_t("create_user_id")] = ModelBase::toJson(createUserId_);
    }
    if(createUserNameIsSet_) {
        val[utility::conversions::to_string_t("create_user_name")] = ModelBase::toJson(createUserName_);
    }
    if(updateUserIdIsSet_) {
        val[utility::conversions::to_string_t("update_user_id")] = ModelBase::toJson(updateUserId_);
    }
    if(updateUserNameIsSet_) {
        val[utility::conversions::to_string_t("update_user_name")] = ModelBase::toJson(updateUserName_);
    }
    if(shareIsSet_) {
        val[utility::conversions::to_string_t("share")] = ModelBase::toJson(share_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ListKeystoreSearchResponseBody_result_keystore_list::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission"));
        if(!fieldValue.is_null())
        {
            ListKeystoreSearchResponseBody_result_permission refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_stamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_stamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keystore_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("share"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShare(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
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
    return ok;
}


std::string ListKeystoreSearchResponseBody_result_keystore_list::getId() const
{
    return id_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_keystore_list::idIsSet() const
{
    return idIsSet_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::unsetid()
{
    idIsSet_ = false;
}

ListKeystoreSearchResponseBody_result_permission ListKeystoreSearchResponseBody_result_keystore_list::getPermission() const
{
    return permission_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::setPermission(const ListKeystoreSearchResponseBody_result_permission& value)
{
    permission_ = value;
    permissionIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_keystore_list::permissionIsSet() const
{
    return permissionIsSet_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::unsetpermission()
{
    permissionIsSet_ = false;
}

std::string ListKeystoreSearchResponseBody_result_keystore_list::getCreateTimeStamp() const
{
    return createTimeStamp_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::setCreateTimeStamp(const std::string& value)
{
    createTimeStamp_ = value;
    createTimeStampIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_keystore_list::createTimeStampIsSet() const
{
    return createTimeStampIsSet_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::unsetcreateTimeStamp()
{
    createTimeStampIsSet_ = false;
}

std::string ListKeystoreSearchResponseBody_result_keystore_list::getUpdateTimeStamp() const
{
    return updateTimeStamp_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::setUpdateTimeStamp(const std::string& value)
{
    updateTimeStamp_ = value;
    updateTimeStampIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_keystore_list::updateTimeStampIsSet() const
{
    return updateTimeStampIsSet_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::unsetupdateTimeStamp()
{
    updateTimeStampIsSet_ = false;
}

std::string ListKeystoreSearchResponseBody_result_keystore_list::getDomainId() const
{
    return domainId_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_keystore_list::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListKeystoreSearchResponseBody_result_keystore_list::getDomainName() const
{
    return domainName_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_keystore_list::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ListKeystoreSearchResponseBody_result_keystore_list::getKeystoreName() const
{
    return keystoreName_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::setKeystoreName(const std::string& value)
{
    keystoreName_ = value;
    keystoreNameIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_keystore_list::keystoreNameIsSet() const
{
    return keystoreNameIsSet_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::unsetkeystoreName()
{
    keystoreNameIsSet_ = false;
}

std::string ListKeystoreSearchResponseBody_result_keystore_list::getCreateUserId() const
{
    return createUserId_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::setCreateUserId(const std::string& value)
{
    createUserId_ = value;
    createUserIdIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_keystore_list::createUserIdIsSet() const
{
    return createUserIdIsSet_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::unsetcreateUserId()
{
    createUserIdIsSet_ = false;
}

std::string ListKeystoreSearchResponseBody_result_keystore_list::getCreateUserName() const
{
    return createUserName_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::setCreateUserName(const std::string& value)
{
    createUserName_ = value;
    createUserNameIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_keystore_list::createUserNameIsSet() const
{
    return createUserNameIsSet_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::unsetcreateUserName()
{
    createUserNameIsSet_ = false;
}

std::string ListKeystoreSearchResponseBody_result_keystore_list::getUpdateUserId() const
{
    return updateUserId_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::setUpdateUserId(const std::string& value)
{
    updateUserId_ = value;
    updateUserIdIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_keystore_list::updateUserIdIsSet() const
{
    return updateUserIdIsSet_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::unsetupdateUserId()
{
    updateUserIdIsSet_ = false;
}

std::string ListKeystoreSearchResponseBody_result_keystore_list::getUpdateUserName() const
{
    return updateUserName_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::setUpdateUserName(const std::string& value)
{
    updateUserName_ = value;
    updateUserNameIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_keystore_list::updateUserNameIsSet() const
{
    return updateUserNameIsSet_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::unsetupdateUserName()
{
    updateUserNameIsSet_ = false;
}

double ListKeystoreSearchResponseBody_result_keystore_list::getShare() const
{
    return share_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::setShare(double value)
{
    share_ = value;
    shareIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_keystore_list::shareIsSet() const
{
    return shareIsSet_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::unsetshare()
{
    shareIsSet_ = false;
}

std::string ListKeystoreSearchResponseBody_result_keystore_list::getCreateTime() const
{
    return createTime_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_keystore_list::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ListKeystoreSearchResponseBody_result_keystore_list::getUpdateTime() const
{
    return updateTime_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_keystore_list::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ListKeystoreSearchResponseBody_result_keystore_list::getDescription() const
{
    return description_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result_keystore_list::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListKeystoreSearchResponseBody_result_keystore_list::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


