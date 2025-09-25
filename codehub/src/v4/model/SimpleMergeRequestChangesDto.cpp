

#include "huaweicloud/codehub/v4/model/SimpleMergeRequestChangesDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




SimpleMergeRequestChangesDto::SimpleMergeRequestChangesDto()
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

SimpleMergeRequestChangesDto::~SimpleMergeRequestChangesDto() = default;

void SimpleMergeRequestChangesDto::validate()
{
}

web::json::value SimpleMergeRequestChangesDto::toJson() const
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
bool SimpleMergeRequestChangesDto::fromJson(const web::json::value& val)
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


int32_t SimpleMergeRequestChangesDto::getId() const
{
    return id_;
}

void SimpleMergeRequestChangesDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SimpleMergeRequestChangesDto::idIsSet() const
{
    return idIsSet_;
}

void SimpleMergeRequestChangesDto::unsetid()
{
    idIsSet_ = false;
}

int32_t SimpleMergeRequestChangesDto::getRepositoryId() const
{
    return repositoryId_;
}

void SimpleMergeRequestChangesDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool SimpleMergeRequestChangesDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void SimpleMergeRequestChangesDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string SimpleMergeRequestChangesDto::getTitle() const
{
    return title_;
}

void SimpleMergeRequestChangesDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool SimpleMergeRequestChangesDto::titleIsSet() const
{
    return titleIsSet_;
}

void SimpleMergeRequestChangesDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string SimpleMergeRequestChangesDto::getDescription() const
{
    return description_;
}

void SimpleMergeRequestChangesDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SimpleMergeRequestChangesDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SimpleMergeRequestChangesDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string SimpleMergeRequestChangesDto::getState() const
{
    return state_;
}

void SimpleMergeRequestChangesDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool SimpleMergeRequestChangesDto::stateIsSet() const
{
    return stateIsSet_;
}

void SimpleMergeRequestChangesDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string SimpleMergeRequestChangesDto::getSourceBranch() const
{
    return sourceBranch_;
}

void SimpleMergeRequestChangesDto::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool SimpleMergeRequestChangesDto::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void SimpleMergeRequestChangesDto::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string SimpleMergeRequestChangesDto::getTargetBranch() const
{
    return targetBranch_;
}

void SimpleMergeRequestChangesDto::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool SimpleMergeRequestChangesDto::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void SimpleMergeRequestChangesDto::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

UserBasicDto SimpleMergeRequestChangesDto::getAuthor() const
{
    return author_;
}

void SimpleMergeRequestChangesDto::setAuthor(const UserBasicDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool SimpleMergeRequestChangesDto::authorIsSet() const
{
    return authorIsSet_;
}

void SimpleMergeRequestChangesDto::unsetauthor()
{
    authorIsSet_ = false;
}

std::string SimpleMergeRequestChangesDto::getWebUrl() const
{
    return webUrl_;
}

void SimpleMergeRequestChangesDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool SimpleMergeRequestChangesDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void SimpleMergeRequestChangesDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string SimpleMergeRequestChangesDto::getCreateAt() const
{
    return createAt_;
}

void SimpleMergeRequestChangesDto::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool SimpleMergeRequestChangesDto::createAtIsSet() const
{
    return createAtIsSet_;
}

void SimpleMergeRequestChangesDto::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string SimpleMergeRequestChangesDto::getUpdateAt() const
{
    return updateAt_;
}

void SimpleMergeRequestChangesDto::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool SimpleMergeRequestChangesDto::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void SimpleMergeRequestChangesDto::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


