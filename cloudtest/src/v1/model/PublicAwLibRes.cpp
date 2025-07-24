

#include "huaweicloud/cloudtest/v1/model/PublicAwLibRes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




PublicAwLibRes::PublicAwLibRes()
{
    createTime_ = "";
    createTimeIsSet_ = false;
    createTimeStamp_ = 0L;
    createTimeStampIsSet_ = false;
    createTimeString_ = "";
    createTimeStringIsSet_ = false;
    createUser_ = "";
    createUserIsSet_ = false;
    documentLink_ = "";
    documentLinkIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    netAreaIsSet_ = false;
    obsTempUrl_ = "";
    obsTempUrlIsSet_ = false;
    productLine_ = "";
    productLineIsSet_ = false;
    repoBranch_ = "";
    repoBranchIsSet_ = false;
    repoLibPath_ = "";
    repoLibPathIsSet_ = false;
    repoPassword_ = "";
    repoPasswordIsSet_ = false;
    repoPrivateKey_ = "";
    repoPrivateKeyIsSet_ = false;
    repoUrl_ = "";
    repoUrlIsSet_ = false;
    repoUsername_ = "";
    repoUsernameIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    updateTimeStamp_ = 0L;
    updateTimeStampIsSet_ = false;
    updateTimeString_ = "";
    updateTimeStringIsSet_ = false;
    updateUser_ = "";
    updateUserIsSet_ = false;
}

PublicAwLibRes::~PublicAwLibRes() = default;

void PublicAwLibRes::validate()
{
}

web::json::value PublicAwLibRes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(createTimeStampIsSet_) {
        val[utility::conversions::to_string_t("create_time_stamp")] = ModelBase::toJson(createTimeStamp_);
    }
    if(createTimeStringIsSet_) {
        val[utility::conversions::to_string_t("create_time_string")] = ModelBase::toJson(createTimeString_);
    }
    if(createUserIsSet_) {
        val[utility::conversions::to_string_t("create_user")] = ModelBase::toJson(createUser_);
    }
    if(documentLinkIsSet_) {
        val[utility::conversions::to_string_t("document_link")] = ModelBase::toJson(documentLink_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(netAreaIsSet_) {
        val[utility::conversions::to_string_t("net_area")] = ModelBase::toJson(netArea_);
    }
    if(obsTempUrlIsSet_) {
        val[utility::conversions::to_string_t("obs_temp_url")] = ModelBase::toJson(obsTempUrl_);
    }
    if(productLineIsSet_) {
        val[utility::conversions::to_string_t("product_line")] = ModelBase::toJson(productLine_);
    }
    if(repoBranchIsSet_) {
        val[utility::conversions::to_string_t("repo_branch")] = ModelBase::toJson(repoBranch_);
    }
    if(repoLibPathIsSet_) {
        val[utility::conversions::to_string_t("repo_lib_path")] = ModelBase::toJson(repoLibPath_);
    }
    if(repoPasswordIsSet_) {
        val[utility::conversions::to_string_t("repo_password")] = ModelBase::toJson(repoPassword_);
    }
    if(repoPrivateKeyIsSet_) {
        val[utility::conversions::to_string_t("repo_private_key")] = ModelBase::toJson(repoPrivateKey_);
    }
    if(repoUrlIsSet_) {
        val[utility::conversions::to_string_t("repo_url")] = ModelBase::toJson(repoUrl_);
    }
    if(repoUsernameIsSet_) {
        val[utility::conversions::to_string_t("repo_username")] = ModelBase::toJson(repoUsername_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateTimeStampIsSet_) {
        val[utility::conversions::to_string_t("update_time_stamp")] = ModelBase::toJson(updateTimeStamp_);
    }
    if(updateTimeStringIsSet_) {
        val[utility::conversions::to_string_t("update_time_string")] = ModelBase::toJson(updateTimeString_);
    }
    if(updateUserIsSet_) {
        val[utility::conversions::to_string_t("update_user")] = ModelBase::toJson(updateUser_);
    }

    return val;
}
bool PublicAwLibRes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeString(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("document_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("document_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocumentLink(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("net_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_area"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetArea(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_temp_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_temp_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsTempUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_line"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_lib_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_lib_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoLibPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_private_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_private_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoPrivateKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoUsername(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeString(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUser(refVal);
        }
    }
    return ok;
}


std::string PublicAwLibRes::getCreateTime() const
{
    return createTime_;
}

void PublicAwLibRes::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool PublicAwLibRes::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void PublicAwLibRes::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t PublicAwLibRes::getCreateTimeStamp() const
{
    return createTimeStamp_;
}

void PublicAwLibRes::setCreateTimeStamp(int64_t value)
{
    createTimeStamp_ = value;
    createTimeStampIsSet_ = true;
}

bool PublicAwLibRes::createTimeStampIsSet() const
{
    return createTimeStampIsSet_;
}

void PublicAwLibRes::unsetcreateTimeStamp()
{
    createTimeStampIsSet_ = false;
}

std::string PublicAwLibRes::getCreateTimeString() const
{
    return createTimeString_;
}

void PublicAwLibRes::setCreateTimeString(const std::string& value)
{
    createTimeString_ = value;
    createTimeStringIsSet_ = true;
}

bool PublicAwLibRes::createTimeStringIsSet() const
{
    return createTimeStringIsSet_;
}

void PublicAwLibRes::unsetcreateTimeString()
{
    createTimeStringIsSet_ = false;
}

std::string PublicAwLibRes::getCreateUser() const
{
    return createUser_;
}

void PublicAwLibRes::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool PublicAwLibRes::createUserIsSet() const
{
    return createUserIsSet_;
}

void PublicAwLibRes::unsetcreateUser()
{
    createUserIsSet_ = false;
}

std::string PublicAwLibRes::getDocumentLink() const
{
    return documentLink_;
}

void PublicAwLibRes::setDocumentLink(const std::string& value)
{
    documentLink_ = value;
    documentLinkIsSet_ = true;
}

bool PublicAwLibRes::documentLinkIsSet() const
{
    return documentLinkIsSet_;
}

void PublicAwLibRes::unsetdocumentLink()
{
    documentLinkIsSet_ = false;
}

std::string PublicAwLibRes::getId() const
{
    return id_;
}

void PublicAwLibRes::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PublicAwLibRes::idIsSet() const
{
    return idIsSet_;
}

void PublicAwLibRes::unsetid()
{
    idIsSet_ = false;
}

std::string PublicAwLibRes::getName() const
{
    return name_;
}

void PublicAwLibRes::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PublicAwLibRes::nameIsSet() const
{
    return nameIsSet_;
}

void PublicAwLibRes::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& PublicAwLibRes::getNetArea()
{
    return netArea_;
}

void PublicAwLibRes::setNetArea(const std::vector<std::string>& value)
{
    netArea_ = value;
    netAreaIsSet_ = true;
}

bool PublicAwLibRes::netAreaIsSet() const
{
    return netAreaIsSet_;
}

void PublicAwLibRes::unsetnetArea()
{
    netAreaIsSet_ = false;
}

std::string PublicAwLibRes::getObsTempUrl() const
{
    return obsTempUrl_;
}

void PublicAwLibRes::setObsTempUrl(const std::string& value)
{
    obsTempUrl_ = value;
    obsTempUrlIsSet_ = true;
}

bool PublicAwLibRes::obsTempUrlIsSet() const
{
    return obsTempUrlIsSet_;
}

void PublicAwLibRes::unsetobsTempUrl()
{
    obsTempUrlIsSet_ = false;
}

std::string PublicAwLibRes::getProductLine() const
{
    return productLine_;
}

void PublicAwLibRes::setProductLine(const std::string& value)
{
    productLine_ = value;
    productLineIsSet_ = true;
}

bool PublicAwLibRes::productLineIsSet() const
{
    return productLineIsSet_;
}

void PublicAwLibRes::unsetproductLine()
{
    productLineIsSet_ = false;
}

std::string PublicAwLibRes::getRepoBranch() const
{
    return repoBranch_;
}

void PublicAwLibRes::setRepoBranch(const std::string& value)
{
    repoBranch_ = value;
    repoBranchIsSet_ = true;
}

bool PublicAwLibRes::repoBranchIsSet() const
{
    return repoBranchIsSet_;
}

void PublicAwLibRes::unsetrepoBranch()
{
    repoBranchIsSet_ = false;
}

std::string PublicAwLibRes::getRepoLibPath() const
{
    return repoLibPath_;
}

void PublicAwLibRes::setRepoLibPath(const std::string& value)
{
    repoLibPath_ = value;
    repoLibPathIsSet_ = true;
}

bool PublicAwLibRes::repoLibPathIsSet() const
{
    return repoLibPathIsSet_;
}

void PublicAwLibRes::unsetrepoLibPath()
{
    repoLibPathIsSet_ = false;
}

std::string PublicAwLibRes::getRepoPassword() const
{
    return repoPassword_;
}

void PublicAwLibRes::setRepoPassword(const std::string& value)
{
    repoPassword_ = value;
    repoPasswordIsSet_ = true;
}

bool PublicAwLibRes::repoPasswordIsSet() const
{
    return repoPasswordIsSet_;
}

void PublicAwLibRes::unsetrepoPassword()
{
    repoPasswordIsSet_ = false;
}

std::string PublicAwLibRes::getRepoPrivateKey() const
{
    return repoPrivateKey_;
}

void PublicAwLibRes::setRepoPrivateKey(const std::string& value)
{
    repoPrivateKey_ = value;
    repoPrivateKeyIsSet_ = true;
}

bool PublicAwLibRes::repoPrivateKeyIsSet() const
{
    return repoPrivateKeyIsSet_;
}

void PublicAwLibRes::unsetrepoPrivateKey()
{
    repoPrivateKeyIsSet_ = false;
}

std::string PublicAwLibRes::getRepoUrl() const
{
    return repoUrl_;
}

void PublicAwLibRes::setRepoUrl(const std::string& value)
{
    repoUrl_ = value;
    repoUrlIsSet_ = true;
}

bool PublicAwLibRes::repoUrlIsSet() const
{
    return repoUrlIsSet_;
}

void PublicAwLibRes::unsetrepoUrl()
{
    repoUrlIsSet_ = false;
}

std::string PublicAwLibRes::getRepoUsername() const
{
    return repoUsername_;
}

void PublicAwLibRes::setRepoUsername(const std::string& value)
{
    repoUsername_ = value;
    repoUsernameIsSet_ = true;
}

bool PublicAwLibRes::repoUsernameIsSet() const
{
    return repoUsernameIsSet_;
}

void PublicAwLibRes::unsetrepoUsername()
{
    repoUsernameIsSet_ = false;
}

std::string PublicAwLibRes::getUpdateTime() const
{
    return updateTime_;
}

void PublicAwLibRes::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool PublicAwLibRes::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void PublicAwLibRes::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t PublicAwLibRes::getUpdateTimeStamp() const
{
    return updateTimeStamp_;
}

void PublicAwLibRes::setUpdateTimeStamp(int64_t value)
{
    updateTimeStamp_ = value;
    updateTimeStampIsSet_ = true;
}

bool PublicAwLibRes::updateTimeStampIsSet() const
{
    return updateTimeStampIsSet_;
}

void PublicAwLibRes::unsetupdateTimeStamp()
{
    updateTimeStampIsSet_ = false;
}

std::string PublicAwLibRes::getUpdateTimeString() const
{
    return updateTimeString_;
}

void PublicAwLibRes::setUpdateTimeString(const std::string& value)
{
    updateTimeString_ = value;
    updateTimeStringIsSet_ = true;
}

bool PublicAwLibRes::updateTimeStringIsSet() const
{
    return updateTimeStringIsSet_;
}

void PublicAwLibRes::unsetupdateTimeString()
{
    updateTimeStringIsSet_ = false;
}

std::string PublicAwLibRes::getUpdateUser() const
{
    return updateUser_;
}

void PublicAwLibRes::setUpdateUser(const std::string& value)
{
    updateUser_ = value;
    updateUserIsSet_ = true;
}

bool PublicAwLibRes::updateUserIsSet() const
{
    return updateUserIsSet_;
}

void PublicAwLibRes::unsetupdateUser()
{
    updateUserIsSet_ = false;
}

}
}
}
}
}


