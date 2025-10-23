

#include "huaweicloud/codehub/v4/model/CreateRepositoryCommitRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateRepositoryCommitRuleResponse::CreateRepositoryCommitRuleResponse()
{
    id_ = 0;
    idIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    commitMessageRegex_ = "";
    commitMessageRegexIsSet_ = false;
    commitMessageNegativeRegex_ = "";
    commitMessageNegativeRegexIsSet_ = false;
    prohibitedFileNameRegex_ = "";
    prohibitedFileNameRegexIsSet_ = false;
    authorEmailRegex_ = "";
    authorEmailRegexIsSet_ = false;
    maxFileSize_ = 0;
    maxFileSizeIsSet_ = false;
    allowedMaxFileSize_ = 0;
    allowedMaxFileSizeIsSet_ = false;
    effectiveDate_ = "";
    effectiveDateIsSet_ = false;
    binaryGateEnabled_ = false;
    binaryGateEnabledIsSet_ = false;
    privilegedUsersIsSet_ = false;
    allowedModifyBinary_ = false;
    allowedModifyBinaryIsSet_ = false;
    allowedBinaryFileNameRegex_ = "";
    allowedBinaryFileNameRegexIsSet_ = false;
    authorRegexIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    skipRuleCheck_ = false;
    skipRuleCheckIsSet_ = false;
    skipRuleEndDate_ = "";
    skipRuleEndDateIsSet_ = false;
}

CreateRepositoryCommitRuleResponse::~CreateRepositoryCommitRuleResponse() = default;

void CreateRepositoryCommitRuleResponse::validate()
{
}

web::json::value CreateRepositoryCommitRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(commitMessageRegexIsSet_) {
        val[utility::conversions::to_string_t("commit_message_regex")] = ModelBase::toJson(commitMessageRegex_);
    }
    if(commitMessageNegativeRegexIsSet_) {
        val[utility::conversions::to_string_t("commit_message_negative_regex")] = ModelBase::toJson(commitMessageNegativeRegex_);
    }
    if(prohibitedFileNameRegexIsSet_) {
        val[utility::conversions::to_string_t("prohibited_file_name_regex")] = ModelBase::toJson(prohibitedFileNameRegex_);
    }
    if(authorEmailRegexIsSet_) {
        val[utility::conversions::to_string_t("author_email_regex")] = ModelBase::toJson(authorEmailRegex_);
    }
    if(maxFileSizeIsSet_) {
        val[utility::conversions::to_string_t("max_file_size")] = ModelBase::toJson(maxFileSize_);
    }
    if(allowedMaxFileSizeIsSet_) {
        val[utility::conversions::to_string_t("allowed_max_file_size")] = ModelBase::toJson(allowedMaxFileSize_);
    }
    if(effectiveDateIsSet_) {
        val[utility::conversions::to_string_t("effective_date")] = ModelBase::toJson(effectiveDate_);
    }
    if(binaryGateEnabledIsSet_) {
        val[utility::conversions::to_string_t("binary_gate_enabled")] = ModelBase::toJson(binaryGateEnabled_);
    }
    if(privilegedUsersIsSet_) {
        val[utility::conversions::to_string_t("privileged_users")] = ModelBase::toJson(privilegedUsers_);
    }
    if(allowedModifyBinaryIsSet_) {
        val[utility::conversions::to_string_t("allowed_modify_binary")] = ModelBase::toJson(allowedModifyBinary_);
    }
    if(allowedBinaryFileNameRegexIsSet_) {
        val[utility::conversions::to_string_t("allowed_binary_file_name_regex")] = ModelBase::toJson(allowedBinaryFileNameRegex_);
    }
    if(authorRegexIsSet_) {
        val[utility::conversions::to_string_t("author_regex")] = ModelBase::toJson(authorRegex_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(skipRuleCheckIsSet_) {
        val[utility::conversions::to_string_t("skip_rule_check")] = ModelBase::toJson(skipRuleCheck_);
    }
    if(skipRuleEndDateIsSet_) {
        val[utility::conversions::to_string_t("skip_rule_end_date")] = ModelBase::toJson(skipRuleEndDate_);
    }

    return val;
}
bool CreateRepositoryCommitRuleResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("commit_message_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_message_regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitMessageRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_message_negative_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_message_negative_regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitMessageNegativeRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prohibited_file_name_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prohibited_file_name_regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProhibitedFileNameRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_email_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_email_regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorEmailRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_file_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowed_max_file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowed_max_file_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowedMaxFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("effective_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effective_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffectiveDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("binary_gate_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binary_gate_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBinaryGateEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("privileged_users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privileged_users"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryUserBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivilegedUsers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowed_modify_binary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowed_modify_binary"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowedModifyBinary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowed_binary_file_name_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowed_binary_file_name_regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowedBinaryFileNameRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_regex"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skip_rule_check"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skip_rule_check"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkipRuleCheck(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skip_rule_end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skip_rule_end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkipRuleEndDate(refVal);
        }
    }
    return ok;
}


int32_t CreateRepositoryCommitRuleResponse::getId() const
{
    return id_;
}

void CreateRepositoryCommitRuleResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t CreateRepositoryCommitRuleResponse::getRepositoryId() const
{
    return repositoryId_;
}

void CreateRepositoryCommitRuleResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string CreateRepositoryCommitRuleResponse::getCommitMessageRegex() const
{
    return commitMessageRegex_;
}

void CreateRepositoryCommitRuleResponse::setCommitMessageRegex(const std::string& value)
{
    commitMessageRegex_ = value;
    commitMessageRegexIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::commitMessageRegexIsSet() const
{
    return commitMessageRegexIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetcommitMessageRegex()
{
    commitMessageRegexIsSet_ = false;
}

std::string CreateRepositoryCommitRuleResponse::getCommitMessageNegativeRegex() const
{
    return commitMessageNegativeRegex_;
}

void CreateRepositoryCommitRuleResponse::setCommitMessageNegativeRegex(const std::string& value)
{
    commitMessageNegativeRegex_ = value;
    commitMessageNegativeRegexIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::commitMessageNegativeRegexIsSet() const
{
    return commitMessageNegativeRegexIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetcommitMessageNegativeRegex()
{
    commitMessageNegativeRegexIsSet_ = false;
}

std::string CreateRepositoryCommitRuleResponse::getProhibitedFileNameRegex() const
{
    return prohibitedFileNameRegex_;
}

void CreateRepositoryCommitRuleResponse::setProhibitedFileNameRegex(const std::string& value)
{
    prohibitedFileNameRegex_ = value;
    prohibitedFileNameRegexIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::prohibitedFileNameRegexIsSet() const
{
    return prohibitedFileNameRegexIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetprohibitedFileNameRegex()
{
    prohibitedFileNameRegexIsSet_ = false;
}

std::string CreateRepositoryCommitRuleResponse::getAuthorEmailRegex() const
{
    return authorEmailRegex_;
}

void CreateRepositoryCommitRuleResponse::setAuthorEmailRegex(const std::string& value)
{
    authorEmailRegex_ = value;
    authorEmailRegexIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::authorEmailRegexIsSet() const
{
    return authorEmailRegexIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetauthorEmailRegex()
{
    authorEmailRegexIsSet_ = false;
}

int32_t CreateRepositoryCommitRuleResponse::getMaxFileSize() const
{
    return maxFileSize_;
}

void CreateRepositoryCommitRuleResponse::setMaxFileSize(int32_t value)
{
    maxFileSize_ = value;
    maxFileSizeIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::maxFileSizeIsSet() const
{
    return maxFileSizeIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetmaxFileSize()
{
    maxFileSizeIsSet_ = false;
}

int32_t CreateRepositoryCommitRuleResponse::getAllowedMaxFileSize() const
{
    return allowedMaxFileSize_;
}

void CreateRepositoryCommitRuleResponse::setAllowedMaxFileSize(int32_t value)
{
    allowedMaxFileSize_ = value;
    allowedMaxFileSizeIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::allowedMaxFileSizeIsSet() const
{
    return allowedMaxFileSizeIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetallowedMaxFileSize()
{
    allowedMaxFileSizeIsSet_ = false;
}

std::string CreateRepositoryCommitRuleResponse::getEffectiveDate() const
{
    return effectiveDate_;
}

void CreateRepositoryCommitRuleResponse::setEffectiveDate(const std::string& value)
{
    effectiveDate_ = value;
    effectiveDateIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::effectiveDateIsSet() const
{
    return effectiveDateIsSet_;
}

void CreateRepositoryCommitRuleResponse::unseteffectiveDate()
{
    effectiveDateIsSet_ = false;
}

bool CreateRepositoryCommitRuleResponse::isBinaryGateEnabled() const
{
    return binaryGateEnabled_;
}

void CreateRepositoryCommitRuleResponse::setBinaryGateEnabled(bool value)
{
    binaryGateEnabled_ = value;
    binaryGateEnabledIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::binaryGateEnabledIsSet() const
{
    return binaryGateEnabledIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetbinaryGateEnabled()
{
    binaryGateEnabledIsSet_ = false;
}

std::vector<RepositoryUserBasicDto>& CreateRepositoryCommitRuleResponse::getPrivilegedUsers()
{
    return privilegedUsers_;
}

void CreateRepositoryCommitRuleResponse::setPrivilegedUsers(const std::vector<RepositoryUserBasicDto>& value)
{
    privilegedUsers_ = value;
    privilegedUsersIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::privilegedUsersIsSet() const
{
    return privilegedUsersIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetprivilegedUsers()
{
    privilegedUsersIsSet_ = false;
}

bool CreateRepositoryCommitRuleResponse::isAllowedModifyBinary() const
{
    return allowedModifyBinary_;
}

void CreateRepositoryCommitRuleResponse::setAllowedModifyBinary(bool value)
{
    allowedModifyBinary_ = value;
    allowedModifyBinaryIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::allowedModifyBinaryIsSet() const
{
    return allowedModifyBinaryIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetallowedModifyBinary()
{
    allowedModifyBinaryIsSet_ = false;
}

std::string CreateRepositoryCommitRuleResponse::getAllowedBinaryFileNameRegex() const
{
    return allowedBinaryFileNameRegex_;
}

void CreateRepositoryCommitRuleResponse::setAllowedBinaryFileNameRegex(const std::string& value)
{
    allowedBinaryFileNameRegex_ = value;
    allowedBinaryFileNameRegexIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::allowedBinaryFileNameRegexIsSet() const
{
    return allowedBinaryFileNameRegexIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetallowedBinaryFileNameRegex()
{
    allowedBinaryFileNameRegexIsSet_ = false;
}

Object CreateRepositoryCommitRuleResponse::getAuthorRegex() const
{
    return authorRegex_;
}

void CreateRepositoryCommitRuleResponse::setAuthorRegex(const Object& value)
{
    authorRegex_ = value;
    authorRegexIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::authorRegexIsSet() const
{
    return authorRegexIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetauthorRegex()
{
    authorRegexIsSet_ = false;
}

std::string CreateRepositoryCommitRuleResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void CreateRepositoryCommitRuleResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string CreateRepositoryCommitRuleResponse::getName() const
{
    return name_;
}

void CreateRepositoryCommitRuleResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateRepositoryCommitRuleResponse::getBranchName() const
{
    return branchName_;
}

void CreateRepositoryCommitRuleResponse::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::string CreateRepositoryCommitRuleResponse::getCreatedAt() const
{
    return createdAt_;
}

void CreateRepositoryCommitRuleResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

bool CreateRepositoryCommitRuleResponse::isSkipRuleCheck() const
{
    return skipRuleCheck_;
}

void CreateRepositoryCommitRuleResponse::setSkipRuleCheck(bool value)
{
    skipRuleCheck_ = value;
    skipRuleCheckIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::skipRuleCheckIsSet() const
{
    return skipRuleCheckIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetskipRuleCheck()
{
    skipRuleCheckIsSet_ = false;
}

std::string CreateRepositoryCommitRuleResponse::getSkipRuleEndDate() const
{
    return skipRuleEndDate_;
}

void CreateRepositoryCommitRuleResponse::setSkipRuleEndDate(const std::string& value)
{
    skipRuleEndDate_ = value;
    skipRuleEndDateIsSet_ = true;
}

bool CreateRepositoryCommitRuleResponse::skipRuleEndDateIsSet() const
{
    return skipRuleEndDateIsSet_;
}

void CreateRepositoryCommitRuleResponse::unsetskipRuleEndDate()
{
    skipRuleEndDateIsSet_ = false;
}

}
}
}
}
}


