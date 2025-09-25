

#include "huaweicloud/codehub/v4/model/ShowFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowFileResponse::ShowFileResponse()
{
    name_ = "";
    nameIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    encoding_ = "";
    encodingIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    blobId_ = "";
    blobIdIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    commitIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    isLimited_ = false;
    isLimitedIsSet_ = false;
    contentSha256_ = "";
    contentSha256IsSet_ = false;
    lastCommitId_ = "";
    lastCommitIdIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ShowFileResponse::~ShowFileResponse() = default;

void ShowFileResponse::validate()
{
}

web::json::value ShowFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(encodingIsSet_) {
        val[utility::conversions::to_string_t("encoding")] = ModelBase::toJson(encoding_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }
    if(blobIdIsSet_) {
        val[utility::conversions::to_string_t("blob_id")] = ModelBase::toJson(blobId_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(commitIsSet_) {
        val[utility::conversions::to_string_t("commit")] = ModelBase::toJson(commit_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(isLimitedIsSet_) {
        val[utility::conversions::to_string_t("is_limited")] = ModelBase::toJson(isLimited_);
    }
    if(contentSha256IsSet_) {
        val[utility::conversions::to_string_t("content_sha256")] = ModelBase::toJson(contentSha256_);
    }
    if(lastCommitIdIsSet_) {
        val[utility::conversions::to_string_t("last_commit_id")] = ModelBase::toJson(lastCommitId_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ShowFileResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encoding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encoding"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncoding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blob_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blob_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit"));
        if(!fieldValue.is_null())
        {
            RepositoryCommitDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_limited"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_limited"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLimited(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_sha256"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_sha256"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentSha256(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastCommitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


std::string ShowFileResponse::getName() const
{
    return name_;
}

void ShowFileResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowFileResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowFileResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowFileResponse::getPath() const
{
    return path_;
}

void ShowFileResponse::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ShowFileResponse::pathIsSet() const
{
    return pathIsSet_;
}

void ShowFileResponse::unsetpath()
{
    pathIsSet_ = false;
}

int64_t ShowFileResponse::getSize() const
{
    return size_;
}

void ShowFileResponse::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ShowFileResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ShowFileResponse::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ShowFileResponse::getEncoding() const
{
    return encoding_;
}

void ShowFileResponse::setEncoding(const std::string& value)
{
    encoding_ = value;
    encodingIsSet_ = true;
}

bool ShowFileResponse::encodingIsSet() const
{
    return encodingIsSet_;
}

void ShowFileResponse::unsetencoding()
{
    encodingIsSet_ = false;
}

std::string ShowFileResponse::getRef() const
{
    return ref_;
}

void ShowFileResponse::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool ShowFileResponse::refIsSet() const
{
    return refIsSet_;
}

void ShowFileResponse::unsetref()
{
    refIsSet_ = false;
}

std::string ShowFileResponse::getBlobId() const
{
    return blobId_;
}

void ShowFileResponse::setBlobId(const std::string& value)
{
    blobId_ = value;
    blobIdIsSet_ = true;
}

bool ShowFileResponse::blobIdIsSet() const
{
    return blobIdIsSet_;
}

void ShowFileResponse::unsetblobId()
{
    blobIdIsSet_ = false;
}

std::string ShowFileResponse::getFileType() const
{
    return fileType_;
}

void ShowFileResponse::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool ShowFileResponse::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void ShowFileResponse::unsetfileType()
{
    fileTypeIsSet_ = false;
}

RepositoryCommitDto ShowFileResponse::getCommit() const
{
    return commit_;
}

void ShowFileResponse::setCommit(const RepositoryCommitDto& value)
{
    commit_ = value;
    commitIsSet_ = true;
}

bool ShowFileResponse::commitIsSet() const
{
    return commitIsSet_;
}

void ShowFileResponse::unsetcommit()
{
    commitIsSet_ = false;
}

std::string ShowFileResponse::getContent() const
{
    return content_;
}

void ShowFileResponse::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ShowFileResponse::contentIsSet() const
{
    return contentIsSet_;
}

void ShowFileResponse::unsetcontent()
{
    contentIsSet_ = false;
}

bool ShowFileResponse::isIsLimited() const
{
    return isLimited_;
}

void ShowFileResponse::setIsLimited(bool value)
{
    isLimited_ = value;
    isLimitedIsSet_ = true;
}

bool ShowFileResponse::isLimitedIsSet() const
{
    return isLimitedIsSet_;
}

void ShowFileResponse::unsetisLimited()
{
    isLimitedIsSet_ = false;
}

std::string ShowFileResponse::getContentSha256() const
{
    return contentSha256_;
}

void ShowFileResponse::setContentSha256(const std::string& value)
{
    contentSha256_ = value;
    contentSha256IsSet_ = true;
}

bool ShowFileResponse::contentSha256IsSet() const
{
    return contentSha256IsSet_;
}

void ShowFileResponse::unsetcontentSha256()
{
    contentSha256IsSet_ = false;
}

std::string ShowFileResponse::getLastCommitId() const
{
    return lastCommitId_;
}

void ShowFileResponse::setLastCommitId(const std::string& value)
{
    lastCommitId_ = value;
    lastCommitIdIsSet_ = true;
}

bool ShowFileResponse::lastCommitIdIsSet() const
{
    return lastCommitIdIsSet_;
}

void ShowFileResponse::unsetlastCommitId()
{
    lastCommitIdIsSet_ = false;
}

std::string ShowFileResponse::getNickName() const
{
    return nickName_;
}

void ShowFileResponse::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ShowFileResponse::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ShowFileResponse::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string ShowFileResponse::getTenantName() const
{
    return tenantName_;
}

void ShowFileResponse::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool ShowFileResponse::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void ShowFileResponse::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string ShowFileResponse::getUserName() const
{
    return userName_;
}

void ShowFileResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ShowFileResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void ShowFileResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ShowFileResponse::getXTotal() const
{
    return xTotal_;
}

void ShowFileResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ShowFileResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ShowFileResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


