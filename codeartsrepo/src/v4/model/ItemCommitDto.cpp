

#include "huaweicloud/codeartsrepo/v4/model/ItemCommitDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ItemCommitDto::ItemCommitDto()
{
    id_ = 0;
    idIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    result_ = 0;
    resultIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    itemId_ = "";
    itemIdIsSet_ = false;
    repositoryId_ = "";
    repositoryIdIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
    commitShortId_ = "";
    commitShortIdIsSet_ = false;
    commitMsg_ = "";
    commitMsgIsSet_ = false;
    commitUrl_ = "";
    commitUrlIsSet_ = false;
    iamId_ = "";
    iamIdIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
    itemUrl_ = "";
    itemUrlIsSet_ = false;
}

ItemCommitDto::~ItemCommitDto() = default;

void ItemCommitDto::validate()
{
}

web::json::value ItemCommitDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(itemIdIsSet_) {
        val[utility::conversions::to_string_t("item_id")] = ModelBase::toJson(itemId_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }
    if(commitShortIdIsSet_) {
        val[utility::conversions::to_string_t("commit_short_id")] = ModelBase::toJson(commitShortId_);
    }
    if(commitMsgIsSet_) {
        val[utility::conversions::to_string_t("commit_msg")] = ModelBase::toJson(commitMsg_);
    }
    if(commitUrlIsSet_) {
        val[utility::conversions::to_string_t("commit_url")] = ModelBase::toJson(commitUrl_);
    }
    if(iamIdIsSet_) {
        val[utility::conversions::to_string_t("iam_id")] = ModelBase::toJson(iamId_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(itemUrlIsSet_) {
        val[utility::conversions::to_string_t("item_url")] = ModelBase::toJson(itemUrl_);
    }

    return val;
}
bool ItemCommitDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("item_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_short_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_short_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitShortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iam_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iam_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("item_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemUrl(refVal);
        }
    }
    return ok;
}


int32_t ItemCommitDto::getId() const
{
    return id_;
}

void ItemCommitDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ItemCommitDto::idIsSet() const
{
    return idIsSet_;
}

void ItemCommitDto::unsetid()
{
    idIsSet_ = false;
}

std::string ItemCommitDto::getTitle() const
{
    return title_;
}

void ItemCommitDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ItemCommitDto::titleIsSet() const
{
    return titleIsSet_;
}

void ItemCommitDto::unsettitle()
{
    titleIsSet_ = false;
}

int32_t ItemCommitDto::getResult() const
{
    return result_;
}

void ItemCommitDto::setResult(int32_t value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ItemCommitDto::resultIsSet() const
{
    return resultIsSet_;
}

void ItemCommitDto::unsetresult()
{
    resultIsSet_ = false;
}

std::string ItemCommitDto::getType() const
{
    return type_;
}

void ItemCommitDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ItemCommitDto::typeIsSet() const
{
    return typeIsSet_;
}

void ItemCommitDto::unsettype()
{
    typeIsSet_ = false;
}

std::string ItemCommitDto::getMessage() const
{
    return message_;
}

void ItemCommitDto::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ItemCommitDto::messageIsSet() const
{
    return messageIsSet_;
}

void ItemCommitDto::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ItemCommitDto::getItemId() const
{
    return itemId_;
}

void ItemCommitDto::setItemId(const std::string& value)
{
    itemId_ = value;
    itemIdIsSet_ = true;
}

bool ItemCommitDto::itemIdIsSet() const
{
    return itemIdIsSet_;
}

void ItemCommitDto::unsetitemId()
{
    itemIdIsSet_ = false;
}

std::string ItemCommitDto::getRepositoryId() const
{
    return repositoryId_;
}

void ItemCommitDto::setRepositoryId(const std::string& value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ItemCommitDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ItemCommitDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ItemCommitDto::getBranchName() const
{
    return branchName_;
}

void ItemCommitDto::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool ItemCommitDto::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void ItemCommitDto::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::string ItemCommitDto::getUserName() const
{
    return userName_;
}

void ItemCommitDto::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ItemCommitDto::userNameIsSet() const
{
    return userNameIsSet_;
}

void ItemCommitDto::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ItemCommitDto::getCommitId() const
{
    return commitId_;
}

void ItemCommitDto::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool ItemCommitDto::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void ItemCommitDto::unsetcommitId()
{
    commitIdIsSet_ = false;
}

std::string ItemCommitDto::getCommitShortId() const
{
    return commitShortId_;
}

void ItemCommitDto::setCommitShortId(const std::string& value)
{
    commitShortId_ = value;
    commitShortIdIsSet_ = true;
}

bool ItemCommitDto::commitShortIdIsSet() const
{
    return commitShortIdIsSet_;
}

void ItemCommitDto::unsetcommitShortId()
{
    commitShortIdIsSet_ = false;
}

std::string ItemCommitDto::getCommitMsg() const
{
    return commitMsg_;
}

void ItemCommitDto::setCommitMsg(const std::string& value)
{
    commitMsg_ = value;
    commitMsgIsSet_ = true;
}

bool ItemCommitDto::commitMsgIsSet() const
{
    return commitMsgIsSet_;
}

void ItemCommitDto::unsetcommitMsg()
{
    commitMsgIsSet_ = false;
}

std::string ItemCommitDto::getCommitUrl() const
{
    return commitUrl_;
}

void ItemCommitDto::setCommitUrl(const std::string& value)
{
    commitUrl_ = value;
    commitUrlIsSet_ = true;
}

bool ItemCommitDto::commitUrlIsSet() const
{
    return commitUrlIsSet_;
}

void ItemCommitDto::unsetcommitUrl()
{
    commitUrlIsSet_ = false;
}

std::string ItemCommitDto::getIamId() const
{
    return iamId_;
}

void ItemCommitDto::setIamId(const std::string& value)
{
    iamId_ = value;
    iamIdIsSet_ = true;
}

bool ItemCommitDto::iamIdIsSet() const
{
    return iamIdIsSet_;
}

void ItemCommitDto::unsetiamId()
{
    iamIdIsSet_ = false;
}

std::string ItemCommitDto::getCreateAt() const
{
    return createAt_;
}

void ItemCommitDto::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ItemCommitDto::createAtIsSet() const
{
    return createAtIsSet_;
}

void ItemCommitDto::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string ItemCommitDto::getUpdateAt() const
{
    return updateAt_;
}

void ItemCommitDto::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ItemCommitDto::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ItemCommitDto::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string ItemCommitDto::getItemUrl() const
{
    return itemUrl_;
}

void ItemCommitDto::setItemUrl(const std::string& value)
{
    itemUrl_ = value;
    itemUrlIsSet_ = true;
}

bool ItemCommitDto::itemUrlIsSet() const
{
    return itemUrlIsSet_;
}

void ItemCommitDto::unsetitemUrl()
{
    itemUrlIsSet_ = false;
}

}
}
}
}
}


