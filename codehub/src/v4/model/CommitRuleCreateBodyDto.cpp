

#include "huaweicloud/codehub/v4/model/CommitRuleCreateBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CommitRuleCreateBodyDto::CommitRuleCreateBodyDto()
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

CommitRuleCreateBodyDto::~CommitRuleCreateBodyDto() = default;

void CommitRuleCreateBodyDto::validate()
{
}

web::json::value CommitRuleCreateBodyDto::toJson() const
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
bool CommitRuleCreateBodyDto::fromJson(const web::json::value& val)
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


std::string CommitRuleCreateBodyDto::getName() const
{
    return name_;
}

void CommitRuleCreateBodyDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CommitRuleCreateBodyDto::nameIsSet() const
{
    return nameIsSet_;
}

void CommitRuleCreateBodyDto::unsetname()
{
    nameIsSet_ = false;
}

std::string CommitRuleCreateBodyDto::getBranchName() const
{
    return branchName_;
}

void CommitRuleCreateBodyDto::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool CommitRuleCreateBodyDto::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void CommitRuleCreateBodyDto::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::string CommitRuleCreateBodyDto::getCommitMessageRegex() const
{
    return commitMessageRegex_;
}

void CommitRuleCreateBodyDto::setCommitMessageRegex(const std::string& value)
{
    commitMessageRegex_ = value;
    commitMessageRegexIsSet_ = true;
}

bool CommitRuleCreateBodyDto::commitMessageRegexIsSet() const
{
    return commitMessageRegexIsSet_;
}

void CommitRuleCreateBodyDto::unsetcommitMessageRegex()
{
    commitMessageRegexIsSet_ = false;
}

std::string CommitRuleCreateBodyDto::getCommitMessageNegativeRegex() const
{
    return commitMessageNegativeRegex_;
}

void CommitRuleCreateBodyDto::setCommitMessageNegativeRegex(const std::string& value)
{
    commitMessageNegativeRegex_ = value;
    commitMessageNegativeRegexIsSet_ = true;
}

bool CommitRuleCreateBodyDto::commitMessageNegativeRegexIsSet() const
{
    return commitMessageNegativeRegexIsSet_;
}

void CommitRuleCreateBodyDto::unsetcommitMessageNegativeRegex()
{
    commitMessageNegativeRegexIsSet_ = false;
}

std::string CommitRuleCreateBodyDto::getAuthorRegex() const
{
    return authorRegex_;
}

void CommitRuleCreateBodyDto::setAuthorRegex(const std::string& value)
{
    authorRegex_ = value;
    authorRegexIsSet_ = true;
}

bool CommitRuleCreateBodyDto::authorRegexIsSet() const
{
    return authorRegexIsSet_;
}

void CommitRuleCreateBodyDto::unsetauthorRegex()
{
    authorRegexIsSet_ = false;
}

std::string CommitRuleCreateBodyDto::getAuthorEmailRegex() const
{
    return authorEmailRegex_;
}

void CommitRuleCreateBodyDto::setAuthorEmailRegex(const std::string& value)
{
    authorEmailRegex_ = value;
    authorEmailRegexIsSet_ = true;
}

bool CommitRuleCreateBodyDto::authorEmailRegexIsSet() const
{
    return authorEmailRegexIsSet_;
}

void CommitRuleCreateBodyDto::unsetauthorEmailRegex()
{
    authorEmailRegexIsSet_ = false;
}

std::string CommitRuleCreateBodyDto::getProhibitedFileNameRegex() const
{
    return prohibitedFileNameRegex_;
}

void CommitRuleCreateBodyDto::setProhibitedFileNameRegex(const std::string& value)
{
    prohibitedFileNameRegex_ = value;
    prohibitedFileNameRegexIsSet_ = true;
}

bool CommitRuleCreateBodyDto::prohibitedFileNameRegexIsSet() const
{
    return prohibitedFileNameRegexIsSet_;
}

void CommitRuleCreateBodyDto::unsetprohibitedFileNameRegex()
{
    prohibitedFileNameRegexIsSet_ = false;
}

int32_t CommitRuleCreateBodyDto::getMaxFileSize() const
{
    return maxFileSize_;
}

void CommitRuleCreateBodyDto::setMaxFileSize(int32_t value)
{
    maxFileSize_ = value;
    maxFileSizeIsSet_ = true;
}

bool CommitRuleCreateBodyDto::maxFileSizeIsSet() const
{
    return maxFileSizeIsSet_;
}

void CommitRuleCreateBodyDto::unsetmaxFileSize()
{
    maxFileSizeIsSet_ = false;
}

bool CommitRuleCreateBodyDto::isBinaryGateEnabled() const
{
    return binaryGateEnabled_;
}

void CommitRuleCreateBodyDto::setBinaryGateEnabled(bool value)
{
    binaryGateEnabled_ = value;
    binaryGateEnabledIsSet_ = true;
}

bool CommitRuleCreateBodyDto::binaryGateEnabledIsSet() const
{
    return binaryGateEnabledIsSet_;
}

void CommitRuleCreateBodyDto::unsetbinaryGateEnabled()
{
    binaryGateEnabledIsSet_ = false;
}

bool CommitRuleCreateBodyDto::isAllowedModifyBinary() const
{
    return allowedModifyBinary_;
}

void CommitRuleCreateBodyDto::setAllowedModifyBinary(bool value)
{
    allowedModifyBinary_ = value;
    allowedModifyBinaryIsSet_ = true;
}

bool CommitRuleCreateBodyDto::allowedModifyBinaryIsSet() const
{
    return allowedModifyBinaryIsSet_;
}

void CommitRuleCreateBodyDto::unsetallowedModifyBinary()
{
    allowedModifyBinaryIsSet_ = false;
}

std::string CommitRuleCreateBodyDto::getAllowedBinaryFileNameRegex() const
{
    return allowedBinaryFileNameRegex_;
}

void CommitRuleCreateBodyDto::setAllowedBinaryFileNameRegex(const std::string& value)
{
    allowedBinaryFileNameRegex_ = value;
    allowedBinaryFileNameRegexIsSet_ = true;
}

bool CommitRuleCreateBodyDto::allowedBinaryFileNameRegexIsSet() const
{
    return allowedBinaryFileNameRegexIsSet_;
}

void CommitRuleCreateBodyDto::unsetallowedBinaryFileNameRegex()
{
    allowedBinaryFileNameRegexIsSet_ = false;
}

std::vector<int32_t>& CommitRuleCreateBodyDto::getPrivilegedUserIds()
{
    return privilegedUserIds_;
}

void CommitRuleCreateBodyDto::setPrivilegedUserIds(std::vector<int32_t> value)
{
    privilegedUserIds_ = value;
    privilegedUserIdsIsSet_ = true;
}

bool CommitRuleCreateBodyDto::privilegedUserIdsIsSet() const
{
    return privilegedUserIdsIsSet_;
}

void CommitRuleCreateBodyDto::unsetprivilegedUserIds()
{
    privilegedUserIdsIsSet_ = false;
}

std::string CommitRuleCreateBodyDto::getEffectiveDate() const
{
    return effectiveDate_;
}

void CommitRuleCreateBodyDto::setEffectiveDate(const std::string& value)
{
    effectiveDate_ = value;
    effectiveDateIsSet_ = true;
}

bool CommitRuleCreateBodyDto::effectiveDateIsSet() const
{
    return effectiveDateIsSet_;
}

void CommitRuleCreateBodyDto::unseteffectiveDate()
{
    effectiveDateIsSet_ = false;
}

bool CommitRuleCreateBodyDto::isSkipRuleCheck() const
{
    return skipRuleCheck_;
}

void CommitRuleCreateBodyDto::setSkipRuleCheck(bool value)
{
    skipRuleCheck_ = value;
    skipRuleCheckIsSet_ = true;
}

bool CommitRuleCreateBodyDto::skipRuleCheckIsSet() const
{
    return skipRuleCheckIsSet_;
}

void CommitRuleCreateBodyDto::unsetskipRuleCheck()
{
    skipRuleCheckIsSet_ = false;
}

std::string CommitRuleCreateBodyDto::getSkipRuleEndDate() const
{
    return skipRuleEndDate_;
}

void CommitRuleCreateBodyDto::setSkipRuleEndDate(const std::string& value)
{
    skipRuleEndDate_ = value;
    skipRuleEndDateIsSet_ = true;
}

bool CommitRuleCreateBodyDto::skipRuleEndDateIsSet() const
{
    return skipRuleEndDateIsSet_;
}

void CommitRuleCreateBodyDto::unsetskipRuleEndDate()
{
    skipRuleEndDateIsSet_ = false;
}

}
}
}
}
}


