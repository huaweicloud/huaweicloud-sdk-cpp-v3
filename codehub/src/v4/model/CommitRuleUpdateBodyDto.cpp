

#include "huaweicloud/codehub/v4/model/CommitRuleUpdateBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CommitRuleUpdateBodyDto::CommitRuleUpdateBodyDto()
{
    name_ = "";
    nameIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
    commitMessageRegex_ = "";
    commitMessageRegexIsSet_ = false;
    commitMessageNegativeRegex_ = "";
    commitMessageNegativeRegexIsSet_ = false;
    authorRegex_ = "";
    authorRegexIsSet_ = false;
    authorEmailRegex_ = "";
    authorEmailRegexIsSet_ = false;
    prohibitedFileNameRegex_ = "";
    prohibitedFileNameRegexIsSet_ = false;
    maxFileSize_ = 0;
    maxFileSizeIsSet_ = false;
    binaryGateEnabled_ = false;
    binaryGateEnabledIsSet_ = false;
    allowedModifyBinary_ = false;
    allowedModifyBinaryIsSet_ = false;
    allowedBinaryFileNameRegex_ = "";
    allowedBinaryFileNameRegexIsSet_ = false;
    privilegedUserIdsIsSet_ = false;
    effectiveDate_ = "";
    effectiveDateIsSet_ = false;
    skipRuleCheck_ = false;
    skipRuleCheckIsSet_ = false;
    skipRuleEndDate_ = "";
    skipRuleEndDateIsSet_ = false;
}

CommitRuleUpdateBodyDto::~CommitRuleUpdateBodyDto() = default;

void CommitRuleUpdateBodyDto::validate()
{
}

web::json::value CommitRuleUpdateBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }
    if(commitMessageRegexIsSet_) {
        val[utility::conversions::to_string_t("commit_message_regex")] = ModelBase::toJson(commitMessageRegex_);
    }
    if(commitMessageNegativeRegexIsSet_) {
        val[utility::conversions::to_string_t("commit_message_negative_regex")] = ModelBase::toJson(commitMessageNegativeRegex_);
    }
    if(authorRegexIsSet_) {
        val[utility::conversions::to_string_t("author_regex")] = ModelBase::toJson(authorRegex_);
    }
    if(authorEmailRegexIsSet_) {
        val[utility::conversions::to_string_t("author_email_regex")] = ModelBase::toJson(authorEmailRegex_);
    }
    if(prohibitedFileNameRegexIsSet_) {
        val[utility::conversions::to_string_t("prohibited_file_name_regex")] = ModelBase::toJson(prohibitedFileNameRegex_);
    }
    if(maxFileSizeIsSet_) {
        val[utility::conversions::to_string_t("max_file_size")] = ModelBase::toJson(maxFileSize_);
    }
    if(binaryGateEnabledIsSet_) {
        val[utility::conversions::to_string_t("binary_gate_enabled")] = ModelBase::toJson(binaryGateEnabled_);
    }
    if(allowedModifyBinaryIsSet_) {
        val[utility::conversions::to_string_t("allowed_modify_binary")] = ModelBase::toJson(allowedModifyBinary_);
    }
    if(allowedBinaryFileNameRegexIsSet_) {
        val[utility::conversions::to_string_t("allowed_binary_file_name_regex")] = ModelBase::toJson(allowedBinaryFileNameRegex_);
    }
    if(privilegedUserIdsIsSet_) {
        val[utility::conversions::to_string_t("privileged_user_ids")] = ModelBase::toJson(privilegedUserIds_);
    }
    if(effectiveDateIsSet_) {
        val[utility::conversions::to_string_t("effective_date")] = ModelBase::toJson(effectiveDate_);
    }
    if(skipRuleCheckIsSet_) {
        val[utility::conversions::to_string_t("skip_rule_check")] = ModelBase::toJson(skipRuleCheck_);
    }
    if(skipRuleEndDateIsSet_) {
        val[utility::conversions::to_string_t("skip_rule_end_date")] = ModelBase::toJson(skipRuleEndDate_);
    }

    return val;
}
bool CommitRuleUpdateBodyDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("author_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorRegex(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("prohibited_file_name_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prohibited_file_name_regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProhibitedFileNameRegex(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("binary_gate_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binary_gate_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBinaryGateEnabled(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("privileged_user_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privileged_user_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivilegedUserIds(refVal);
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


std::string CommitRuleUpdateBodyDto::getName() const
{
    return name_;
}

void CommitRuleUpdateBodyDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CommitRuleUpdateBodyDto::nameIsSet() const
{
    return nameIsSet_;
}

void CommitRuleUpdateBodyDto::unsetname()
{
    nameIsSet_ = false;
}

std::string CommitRuleUpdateBodyDto::getBranchName() const
{
    return branchName_;
}

void CommitRuleUpdateBodyDto::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool CommitRuleUpdateBodyDto::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void CommitRuleUpdateBodyDto::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::string CommitRuleUpdateBodyDto::getCommitMessageRegex() const
{
    return commitMessageRegex_;
}

void CommitRuleUpdateBodyDto::setCommitMessageRegex(const std::string& value)
{
    commitMessageRegex_ = value;
    commitMessageRegexIsSet_ = true;
}

bool CommitRuleUpdateBodyDto::commitMessageRegexIsSet() const
{
    return commitMessageRegexIsSet_;
}

void CommitRuleUpdateBodyDto::unsetcommitMessageRegex()
{
    commitMessageRegexIsSet_ = false;
}

std::string CommitRuleUpdateBodyDto::getCommitMessageNegativeRegex() const
{
    return commitMessageNegativeRegex_;
}

void CommitRuleUpdateBodyDto::setCommitMessageNegativeRegex(const std::string& value)
{
    commitMessageNegativeRegex_ = value;
    commitMessageNegativeRegexIsSet_ = true;
}

bool CommitRuleUpdateBodyDto::commitMessageNegativeRegexIsSet() const
{
    return commitMessageNegativeRegexIsSet_;
}

void CommitRuleUpdateBodyDto::unsetcommitMessageNegativeRegex()
{
    commitMessageNegativeRegexIsSet_ = false;
}

std::string CommitRuleUpdateBodyDto::getAuthorRegex() const
{
    return authorRegex_;
}

void CommitRuleUpdateBodyDto::setAuthorRegex(const std::string& value)
{
    authorRegex_ = value;
    authorRegexIsSet_ = true;
}

bool CommitRuleUpdateBodyDto::authorRegexIsSet() const
{
    return authorRegexIsSet_;
}

void CommitRuleUpdateBodyDto::unsetauthorRegex()
{
    authorRegexIsSet_ = false;
}

std::string CommitRuleUpdateBodyDto::getAuthorEmailRegex() const
{
    return authorEmailRegex_;
}

void CommitRuleUpdateBodyDto::setAuthorEmailRegex(const std::string& value)
{
    authorEmailRegex_ = value;
    authorEmailRegexIsSet_ = true;
}

bool CommitRuleUpdateBodyDto::authorEmailRegexIsSet() const
{
    return authorEmailRegexIsSet_;
}

void CommitRuleUpdateBodyDto::unsetauthorEmailRegex()
{
    authorEmailRegexIsSet_ = false;
}

std::string CommitRuleUpdateBodyDto::getProhibitedFileNameRegex() const
{
    return prohibitedFileNameRegex_;
}

void CommitRuleUpdateBodyDto::setProhibitedFileNameRegex(const std::string& value)
{
    prohibitedFileNameRegex_ = value;
    prohibitedFileNameRegexIsSet_ = true;
}

bool CommitRuleUpdateBodyDto::prohibitedFileNameRegexIsSet() const
{
    return prohibitedFileNameRegexIsSet_;
}

void CommitRuleUpdateBodyDto::unsetprohibitedFileNameRegex()
{
    prohibitedFileNameRegexIsSet_ = false;
}

int32_t CommitRuleUpdateBodyDto::getMaxFileSize() const
{
    return maxFileSize_;
}

void CommitRuleUpdateBodyDto::setMaxFileSize(int32_t value)
{
    maxFileSize_ = value;
    maxFileSizeIsSet_ = true;
}

bool CommitRuleUpdateBodyDto::maxFileSizeIsSet() const
{
    return maxFileSizeIsSet_;
}

void CommitRuleUpdateBodyDto::unsetmaxFileSize()
{
    maxFileSizeIsSet_ = false;
}

bool CommitRuleUpdateBodyDto::isBinaryGateEnabled() const
{
    return binaryGateEnabled_;
}

void CommitRuleUpdateBodyDto::setBinaryGateEnabled(bool value)
{
    binaryGateEnabled_ = value;
    binaryGateEnabledIsSet_ = true;
}

bool CommitRuleUpdateBodyDto::binaryGateEnabledIsSet() const
{
    return binaryGateEnabledIsSet_;
}

void CommitRuleUpdateBodyDto::unsetbinaryGateEnabled()
{
    binaryGateEnabledIsSet_ = false;
}

bool CommitRuleUpdateBodyDto::isAllowedModifyBinary() const
{
    return allowedModifyBinary_;
}

void CommitRuleUpdateBodyDto::setAllowedModifyBinary(bool value)
{
    allowedModifyBinary_ = value;
    allowedModifyBinaryIsSet_ = true;
}

bool CommitRuleUpdateBodyDto::allowedModifyBinaryIsSet() const
{
    return allowedModifyBinaryIsSet_;
}

void CommitRuleUpdateBodyDto::unsetallowedModifyBinary()
{
    allowedModifyBinaryIsSet_ = false;
}

std::string CommitRuleUpdateBodyDto::getAllowedBinaryFileNameRegex() const
{
    return allowedBinaryFileNameRegex_;
}

void CommitRuleUpdateBodyDto::setAllowedBinaryFileNameRegex(const std::string& value)
{
    allowedBinaryFileNameRegex_ = value;
    allowedBinaryFileNameRegexIsSet_ = true;
}

bool CommitRuleUpdateBodyDto::allowedBinaryFileNameRegexIsSet() const
{
    return allowedBinaryFileNameRegexIsSet_;
}

void CommitRuleUpdateBodyDto::unsetallowedBinaryFileNameRegex()
{
    allowedBinaryFileNameRegexIsSet_ = false;
}

std::vector<int32_t>& CommitRuleUpdateBodyDto::getPrivilegedUserIds()
{
    return privilegedUserIds_;
}

void CommitRuleUpdateBodyDto::setPrivilegedUserIds(std::vector<int32_t> value)
{
    privilegedUserIds_ = value;
    privilegedUserIdsIsSet_ = true;
}

bool CommitRuleUpdateBodyDto::privilegedUserIdsIsSet() const
{
    return privilegedUserIdsIsSet_;
}

void CommitRuleUpdateBodyDto::unsetprivilegedUserIds()
{
    privilegedUserIdsIsSet_ = false;
}

std::string CommitRuleUpdateBodyDto::getEffectiveDate() const
{
    return effectiveDate_;
}

void CommitRuleUpdateBodyDto::setEffectiveDate(const std::string& value)
{
    effectiveDate_ = value;
    effectiveDateIsSet_ = true;
}

bool CommitRuleUpdateBodyDto::effectiveDateIsSet() const
{
    return effectiveDateIsSet_;
}

void CommitRuleUpdateBodyDto::unseteffectiveDate()
{
    effectiveDateIsSet_ = false;
}

bool CommitRuleUpdateBodyDto::isSkipRuleCheck() const
{
    return skipRuleCheck_;
}

void CommitRuleUpdateBodyDto::setSkipRuleCheck(bool value)
{
    skipRuleCheck_ = value;
    skipRuleCheckIsSet_ = true;
}

bool CommitRuleUpdateBodyDto::skipRuleCheckIsSet() const
{
    return skipRuleCheckIsSet_;
}

void CommitRuleUpdateBodyDto::unsetskipRuleCheck()
{
    skipRuleCheckIsSet_ = false;
}

std::string CommitRuleUpdateBodyDto::getSkipRuleEndDate() const
{
    return skipRuleEndDate_;
}

void CommitRuleUpdateBodyDto::setSkipRuleEndDate(const std::string& value)
{
    skipRuleEndDate_ = value;
    skipRuleEndDateIsSet_ = true;
}

bool CommitRuleUpdateBodyDto::skipRuleEndDateIsSet() const
{
    return skipRuleEndDateIsSet_;
}

void CommitRuleUpdateBodyDto::unsetskipRuleEndDate()
{
    skipRuleEndDateIsSet_ = false;
}

}
}
}
}
}


