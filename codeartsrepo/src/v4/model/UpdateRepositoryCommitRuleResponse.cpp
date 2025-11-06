

#include "huaweicloud/codeartsrepo/v4/model/UpdateRepositoryCommitRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateRepositoryCommitRuleResponse::UpdateRepositoryCommitRuleResponse()
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

UpdateRepositoryCommitRuleResponse::~UpdateRepositoryCommitRuleResponse() = default;

void UpdateRepositoryCommitRuleResponse::validate()
{
}

web::json::value UpdateRepositoryCommitRuleResponse::toJson() const
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
bool UpdateRepositoryCommitRuleResponse::fromJson(const web::json::value& val)
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


int32_t UpdateRepositoryCommitRuleResponse::getId() const
{
    return id_;
}

void UpdateRepositoryCommitRuleResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t UpdateRepositoryCommitRuleResponse::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateRepositoryCommitRuleResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string UpdateRepositoryCommitRuleResponse::getCommitMessageRegex() const
{
    return commitMessageRegex_;
}

void UpdateRepositoryCommitRuleResponse::setCommitMessageRegex(const std::string& value)
{
    commitMessageRegex_ = value;
    commitMessageRegexIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::commitMessageRegexIsSet() const
{
    return commitMessageRegexIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetcommitMessageRegex()
{
    commitMessageRegexIsSet_ = false;
}

std::string UpdateRepositoryCommitRuleResponse::getCommitMessageNegativeRegex() const
{
    return commitMessageNegativeRegex_;
}

void UpdateRepositoryCommitRuleResponse::setCommitMessageNegativeRegex(const std::string& value)
{
    commitMessageNegativeRegex_ = value;
    commitMessageNegativeRegexIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::commitMessageNegativeRegexIsSet() const
{
    return commitMessageNegativeRegexIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetcommitMessageNegativeRegex()
{
    commitMessageNegativeRegexIsSet_ = false;
}

std::string UpdateRepositoryCommitRuleResponse::getProhibitedFileNameRegex() const
{
    return prohibitedFileNameRegex_;
}

void UpdateRepositoryCommitRuleResponse::setProhibitedFileNameRegex(const std::string& value)
{
    prohibitedFileNameRegex_ = value;
    prohibitedFileNameRegexIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::prohibitedFileNameRegexIsSet() const
{
    return prohibitedFileNameRegexIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetprohibitedFileNameRegex()
{
    prohibitedFileNameRegexIsSet_ = false;
}

std::string UpdateRepositoryCommitRuleResponse::getAuthorEmailRegex() const
{
    return authorEmailRegex_;
}

void UpdateRepositoryCommitRuleResponse::setAuthorEmailRegex(const std::string& value)
{
    authorEmailRegex_ = value;
    authorEmailRegexIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::authorEmailRegexIsSet() const
{
    return authorEmailRegexIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetauthorEmailRegex()
{
    authorEmailRegexIsSet_ = false;
}

int32_t UpdateRepositoryCommitRuleResponse::getMaxFileSize() const
{
    return maxFileSize_;
}

void UpdateRepositoryCommitRuleResponse::setMaxFileSize(int32_t value)
{
    maxFileSize_ = value;
    maxFileSizeIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::maxFileSizeIsSet() const
{
    return maxFileSizeIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetmaxFileSize()
{
    maxFileSizeIsSet_ = false;
}

int32_t UpdateRepositoryCommitRuleResponse::getAllowedMaxFileSize() const
{
    return allowedMaxFileSize_;
}

void UpdateRepositoryCommitRuleResponse::setAllowedMaxFileSize(int32_t value)
{
    allowedMaxFileSize_ = value;
    allowedMaxFileSizeIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::allowedMaxFileSizeIsSet() const
{
    return allowedMaxFileSizeIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetallowedMaxFileSize()
{
    allowedMaxFileSizeIsSet_ = false;
}

std::string UpdateRepositoryCommitRuleResponse::getEffectiveDate() const
{
    return effectiveDate_;
}

void UpdateRepositoryCommitRuleResponse::setEffectiveDate(const std::string& value)
{
    effectiveDate_ = value;
    effectiveDateIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::effectiveDateIsSet() const
{
    return effectiveDateIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unseteffectiveDate()
{
    effectiveDateIsSet_ = false;
}

bool UpdateRepositoryCommitRuleResponse::isBinaryGateEnabled() const
{
    return binaryGateEnabled_;
}

void UpdateRepositoryCommitRuleResponse::setBinaryGateEnabled(bool value)
{
    binaryGateEnabled_ = value;
    binaryGateEnabledIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::binaryGateEnabledIsSet() const
{
    return binaryGateEnabledIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetbinaryGateEnabled()
{
    binaryGateEnabledIsSet_ = false;
}

std::vector<RepositoryUserBasicDto>& UpdateRepositoryCommitRuleResponse::getPrivilegedUsers()
{
    return privilegedUsers_;
}

void UpdateRepositoryCommitRuleResponse::setPrivilegedUsers(const std::vector<RepositoryUserBasicDto>& value)
{
    privilegedUsers_ = value;
    privilegedUsersIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::privilegedUsersIsSet() const
{
    return privilegedUsersIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetprivilegedUsers()
{
    privilegedUsersIsSet_ = false;
}

bool UpdateRepositoryCommitRuleResponse::isAllowedModifyBinary() const
{
    return allowedModifyBinary_;
}

void UpdateRepositoryCommitRuleResponse::setAllowedModifyBinary(bool value)
{
    allowedModifyBinary_ = value;
    allowedModifyBinaryIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::allowedModifyBinaryIsSet() const
{
    return allowedModifyBinaryIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetallowedModifyBinary()
{
    allowedModifyBinaryIsSet_ = false;
}

std::string UpdateRepositoryCommitRuleResponse::getAllowedBinaryFileNameRegex() const
{
    return allowedBinaryFileNameRegex_;
}

void UpdateRepositoryCommitRuleResponse::setAllowedBinaryFileNameRegex(const std::string& value)
{
    allowedBinaryFileNameRegex_ = value;
    allowedBinaryFileNameRegexIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::allowedBinaryFileNameRegexIsSet() const
{
    return allowedBinaryFileNameRegexIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetallowedBinaryFileNameRegex()
{
    allowedBinaryFileNameRegexIsSet_ = false;
}

Object UpdateRepositoryCommitRuleResponse::getAuthorRegex() const
{
    return authorRegex_;
}

void UpdateRepositoryCommitRuleResponse::setAuthorRegex(const Object& value)
{
    authorRegex_ = value;
    authorRegexIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::authorRegexIsSet() const
{
    return authorRegexIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetauthorRegex()
{
    authorRegexIsSet_ = false;
}

std::string UpdateRepositoryCommitRuleResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void UpdateRepositoryCommitRuleResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string UpdateRepositoryCommitRuleResponse::getName() const
{
    return name_;
}

void UpdateRepositoryCommitRuleResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateRepositoryCommitRuleResponse::getBranchName() const
{
    return branchName_;
}

void UpdateRepositoryCommitRuleResponse::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::string UpdateRepositoryCommitRuleResponse::getCreatedAt() const
{
    return createdAt_;
}

void UpdateRepositoryCommitRuleResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

bool UpdateRepositoryCommitRuleResponse::isSkipRuleCheck() const
{
    return skipRuleCheck_;
}

void UpdateRepositoryCommitRuleResponse::setSkipRuleCheck(bool value)
{
    skipRuleCheck_ = value;
    skipRuleCheckIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::skipRuleCheckIsSet() const
{
    return skipRuleCheckIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetskipRuleCheck()
{
    skipRuleCheckIsSet_ = false;
}

std::string UpdateRepositoryCommitRuleResponse::getSkipRuleEndDate() const
{
    return skipRuleEndDate_;
}

void UpdateRepositoryCommitRuleResponse::setSkipRuleEndDate(const std::string& value)
{
    skipRuleEndDate_ = value;
    skipRuleEndDateIsSet_ = true;
}

bool UpdateRepositoryCommitRuleResponse::skipRuleEndDateIsSet() const
{
    return skipRuleEndDateIsSet_;
}

void UpdateRepositoryCommitRuleResponse::unsetskipRuleEndDate()
{
    skipRuleEndDateIsSet_ = false;
}

}
}
}
}
}


