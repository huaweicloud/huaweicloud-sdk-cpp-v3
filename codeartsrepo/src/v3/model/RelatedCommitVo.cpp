

#include "huaweicloud/codeartsrepo/v3/model/RelatedCommitVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




RelatedCommitVo::RelatedCommitVo()
{
    id_ = "";
    idIsSet_ = false;
    iamId_ = "";
    iamIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    repositoryId_ = "";
    repositoryIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
    commitShortId_ = "";
    commitShortIdIsSet_ = false;
    commitMsg_ = "";
    commitMsgIsSet_ = false;
    commitUrl_ = "";
    commitUrlIsSet_ = false;
    commitType_ = "";
    commitTypeIsSet_ = false;
    relatedId_ = "";
    relatedIdIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
    relatedUrl_ = "";
    relatedUrlIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

RelatedCommitVo::~RelatedCommitVo() = default;

void RelatedCommitVo::validate()
{
}

web::json::value RelatedCommitVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(iamIdIsSet_) {
        val[utility::conversions::to_string_t("iamId")] = ModelBase::toJson(iamId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("userName")] = ModelBase::toJson(userName_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repositoryId")] = ModelBase::toJson(repositoryId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(userId_);
    }
    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branchName")] = ModelBase::toJson(branchName_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commitId")] = ModelBase::toJson(commitId_);
    }
    if(commitShortIdIsSet_) {
        val[utility::conversions::to_string_t("commitShortId")] = ModelBase::toJson(commitShortId_);
    }
    if(commitMsgIsSet_) {
        val[utility::conversions::to_string_t("commitMsg")] = ModelBase::toJson(commitMsg_);
    }
    if(commitUrlIsSet_) {
        val[utility::conversions::to_string_t("commitUrl")] = ModelBase::toJson(commitUrl_);
    }
    if(commitTypeIsSet_) {
        val[utility::conversions::to_string_t("commitType")] = ModelBase::toJson(commitType_);
    }
    if(relatedIdIsSet_) {
        val[utility::conversions::to_string_t("relatedId")] = ModelBase::toJson(relatedId_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("createAt")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("updateAt")] = ModelBase::toJson(updateAt_);
    }
    if(relatedUrlIsSet_) {
        val[utility::conversions::to_string_t("relatedUrl")] = ModelBase::toJson(relatedUrl_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool RelatedCommitVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("iamId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iamId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repositoryId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repositoryId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branchName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branchName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commitId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commitId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commitShortId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commitShortId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitShortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commitMsg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commitMsg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commitUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commitUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commitType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commitType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relatedId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relatedId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createAt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createAt"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateAt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateAt"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relatedUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relatedUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string RelatedCommitVo::getId() const
{
    return id_;
}

void RelatedCommitVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RelatedCommitVo::idIsSet() const
{
    return idIsSet_;
}

void RelatedCommitVo::unsetid()
{
    idIsSet_ = false;
}

std::string RelatedCommitVo::getIamId() const
{
    return iamId_;
}

void RelatedCommitVo::setIamId(const std::string& value)
{
    iamId_ = value;
    iamIdIsSet_ = true;
}

bool RelatedCommitVo::iamIdIsSet() const
{
    return iamIdIsSet_;
}

void RelatedCommitVo::unsetiamId()
{
    iamIdIsSet_ = false;
}

std::string RelatedCommitVo::getUserName() const
{
    return userName_;
}

void RelatedCommitVo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool RelatedCommitVo::userNameIsSet() const
{
    return userNameIsSet_;
}

void RelatedCommitVo::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string RelatedCommitVo::getRepositoryId() const
{
    return repositoryId_;
}

void RelatedCommitVo::setRepositoryId(const std::string& value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool RelatedCommitVo::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void RelatedCommitVo::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string RelatedCommitVo::getType() const
{
    return type_;
}

void RelatedCommitVo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RelatedCommitVo::typeIsSet() const
{
    return typeIsSet_;
}

void RelatedCommitVo::unsettype()
{
    typeIsSet_ = false;
}

std::string RelatedCommitVo::getUserId() const
{
    return userId_;
}

void RelatedCommitVo::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool RelatedCommitVo::userIdIsSet() const
{
    return userIdIsSet_;
}

void RelatedCommitVo::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string RelatedCommitVo::getBranchName() const
{
    return branchName_;
}

void RelatedCommitVo::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool RelatedCommitVo::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void RelatedCommitVo::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::string RelatedCommitVo::getCommitId() const
{
    return commitId_;
}

void RelatedCommitVo::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool RelatedCommitVo::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void RelatedCommitVo::unsetcommitId()
{
    commitIdIsSet_ = false;
}

std::string RelatedCommitVo::getCommitShortId() const
{
    return commitShortId_;
}

void RelatedCommitVo::setCommitShortId(const std::string& value)
{
    commitShortId_ = value;
    commitShortIdIsSet_ = true;
}

bool RelatedCommitVo::commitShortIdIsSet() const
{
    return commitShortIdIsSet_;
}

void RelatedCommitVo::unsetcommitShortId()
{
    commitShortIdIsSet_ = false;
}

std::string RelatedCommitVo::getCommitMsg() const
{
    return commitMsg_;
}

void RelatedCommitVo::setCommitMsg(const std::string& value)
{
    commitMsg_ = value;
    commitMsgIsSet_ = true;
}

bool RelatedCommitVo::commitMsgIsSet() const
{
    return commitMsgIsSet_;
}

void RelatedCommitVo::unsetcommitMsg()
{
    commitMsgIsSet_ = false;
}

std::string RelatedCommitVo::getCommitUrl() const
{
    return commitUrl_;
}

void RelatedCommitVo::setCommitUrl(const std::string& value)
{
    commitUrl_ = value;
    commitUrlIsSet_ = true;
}

bool RelatedCommitVo::commitUrlIsSet() const
{
    return commitUrlIsSet_;
}

void RelatedCommitVo::unsetcommitUrl()
{
    commitUrlIsSet_ = false;
}

std::string RelatedCommitVo::getCommitType() const
{
    return commitType_;
}

void RelatedCommitVo::setCommitType(const std::string& value)
{
    commitType_ = value;
    commitTypeIsSet_ = true;
}

bool RelatedCommitVo::commitTypeIsSet() const
{
    return commitTypeIsSet_;
}

void RelatedCommitVo::unsetcommitType()
{
    commitTypeIsSet_ = false;
}

std::string RelatedCommitVo::getRelatedId() const
{
    return relatedId_;
}

void RelatedCommitVo::setRelatedId(const std::string& value)
{
    relatedId_ = value;
    relatedIdIsSet_ = true;
}

bool RelatedCommitVo::relatedIdIsSet() const
{
    return relatedIdIsSet_;
}

void RelatedCommitVo::unsetrelatedId()
{
    relatedIdIsSet_ = false;
}

std::string RelatedCommitVo::getCreateAt() const
{
    return createAt_;
}

void RelatedCommitVo::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool RelatedCommitVo::createAtIsSet() const
{
    return createAtIsSet_;
}

void RelatedCommitVo::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string RelatedCommitVo::getUpdateAt() const
{
    return updateAt_;
}

void RelatedCommitVo::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool RelatedCommitVo::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void RelatedCommitVo::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string RelatedCommitVo::getRelatedUrl() const
{
    return relatedUrl_;
}

void RelatedCommitVo::setRelatedUrl(const std::string& value)
{
    relatedUrl_ = value;
    relatedUrlIsSet_ = true;
}

bool RelatedCommitVo::relatedUrlIsSet() const
{
    return relatedUrlIsSet_;
}

void RelatedCommitVo::unsetrelatedUrl()
{
    relatedUrlIsSet_ = false;
}

std::string RelatedCommitVo::getMessage() const
{
    return message_;
}

void RelatedCommitVo::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool RelatedCommitVo::messageIsSet() const
{
    return messageIsSet_;
}

void RelatedCommitVo::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


