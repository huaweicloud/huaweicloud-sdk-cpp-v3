

#include "huaweicloud/codeartsrepo/v4/model/LiteMergeRequestDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




LiteMergeRequestDto::LiteMergeRequestDto()
{
    id_ = 0;
    idIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    authorIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
}

LiteMergeRequestDto::~LiteMergeRequestDto() = default;

void LiteMergeRequestDto::validate()
{
}

web::json::value LiteMergeRequestDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(sourceBranchIsSet_) {
        val[utility::conversions::to_string_t("source_branch")] = ModelBase::toJson(sourceBranch_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }

    return val;
}
bool LiteMergeRequestDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
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
    return ok;
}


int32_t LiteMergeRequestDto::getId() const
{
    return id_;
}

void LiteMergeRequestDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool LiteMergeRequestDto::idIsSet() const
{
    return idIsSet_;
}

void LiteMergeRequestDto::unsetid()
{
    idIsSet_ = false;
}

int32_t LiteMergeRequestDto::getRepositoryId() const
{
    return repositoryId_;
}

void LiteMergeRequestDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool LiteMergeRequestDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void LiteMergeRequestDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string LiteMergeRequestDto::getTitle() const
{
    return title_;
}

void LiteMergeRequestDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool LiteMergeRequestDto::titleIsSet() const
{
    return titleIsSet_;
}

void LiteMergeRequestDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string LiteMergeRequestDto::getDescription() const
{
    return description_;
}

void LiteMergeRequestDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool LiteMergeRequestDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void LiteMergeRequestDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string LiteMergeRequestDto::getState() const
{
    return state_;
}

void LiteMergeRequestDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool LiteMergeRequestDto::stateIsSet() const
{
    return stateIsSet_;
}

void LiteMergeRequestDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string LiteMergeRequestDto::getSourceBranch() const
{
    return sourceBranch_;
}

void LiteMergeRequestDto::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool LiteMergeRequestDto::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void LiteMergeRequestDto::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string LiteMergeRequestDto::getTargetBranch() const
{
    return targetBranch_;
}

void LiteMergeRequestDto::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool LiteMergeRequestDto::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void LiteMergeRequestDto::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

UserBasicDto LiteMergeRequestDto::getAuthor() const
{
    return author_;
}

void LiteMergeRequestDto::setAuthor(const UserBasicDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool LiteMergeRequestDto::authorIsSet() const
{
    return authorIsSet_;
}

void LiteMergeRequestDto::unsetauthor()
{
    authorIsSet_ = false;
}

std::string LiteMergeRequestDto::getWebUrl() const
{
    return webUrl_;
}

void LiteMergeRequestDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool LiteMergeRequestDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void LiteMergeRequestDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string LiteMergeRequestDto::getCreateAt() const
{
    return createAt_;
}

void LiteMergeRequestDto::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool LiteMergeRequestDto::createAtIsSet() const
{
    return createAtIsSet_;
}

void LiteMergeRequestDto::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string LiteMergeRequestDto::getUpdateAt() const
{
    return updateAt_;
}

void LiteMergeRequestDto::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool LiteMergeRequestDto::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void LiteMergeRequestDto::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


