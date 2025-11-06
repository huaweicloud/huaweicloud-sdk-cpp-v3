

#include "huaweicloud/codeartsrepo/v4/model/GeneralPolicyBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




GeneralPolicyBodyDto::GeneralPolicyBodyDto()
{
    disableFork_ = false;
    disableForkIsSet_ = false;
    generatePreMergeRef_ = false;
    generatePreMergeRefIsSet_ = false;
    branchNameRegex_ = "";
    branchNameRegexIsSet_ = false;
    tagNameRegex_ = "";
    tagNameRegexIsSet_ = false;
    forbiddenDeveloperCreateBranch_ = false;
    forbiddenDeveloperCreateBranchIsSet_ = false;
    createBranchWhitelistUserIds_ = "";
    createBranchWhitelistUserIdsIsSet_ = false;
}

GeneralPolicyBodyDto::~GeneralPolicyBodyDto() = default;

void GeneralPolicyBodyDto::validate()
{
}

web::json::value GeneralPolicyBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disableForkIsSet_) {
        val[utility::conversions::to_string_t("disable_fork")] = ModelBase::toJson(disableFork_);
    }
    if(generatePreMergeRefIsSet_) {
        val[utility::conversions::to_string_t("generate_pre_merge_ref")] = ModelBase::toJson(generatePreMergeRef_);
    }
    if(branchNameRegexIsSet_) {
        val[utility::conversions::to_string_t("branch_name_regex")] = ModelBase::toJson(branchNameRegex_);
    }
    if(tagNameRegexIsSet_) {
        val[utility::conversions::to_string_t("tag_name_regex")] = ModelBase::toJson(tagNameRegex_);
    }
    if(forbiddenDeveloperCreateBranchIsSet_) {
        val[utility::conversions::to_string_t("forbidden_developer_create_branch")] = ModelBase::toJson(forbiddenDeveloperCreateBranch_);
    }
    if(createBranchWhitelistUserIdsIsSet_) {
        val[utility::conversions::to_string_t("create_branch_whitelist_user_ids")] = ModelBase::toJson(createBranchWhitelistUserIds_);
    }

    return val;
}
bool GeneralPolicyBodyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disable_fork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable_fork"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisableFork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("generate_pre_merge_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("generate_pre_merge_ref"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeneratePreMergeRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_name_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name_regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchNameRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_name_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_name_regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagNameRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forbidden_developer_create_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forbidden_developer_create_branch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForbiddenDeveloperCreateBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_branch_whitelist_user_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_branch_whitelist_user_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateBranchWhitelistUserIds(refVal);
        }
    }
    return ok;
}


bool GeneralPolicyBodyDto::isDisableFork() const
{
    return disableFork_;
}

void GeneralPolicyBodyDto::setDisableFork(bool value)
{
    disableFork_ = value;
    disableForkIsSet_ = true;
}

bool GeneralPolicyBodyDto::disableForkIsSet() const
{
    return disableForkIsSet_;
}

void GeneralPolicyBodyDto::unsetdisableFork()
{
    disableForkIsSet_ = false;
}

bool GeneralPolicyBodyDto::isGeneratePreMergeRef() const
{
    return generatePreMergeRef_;
}

void GeneralPolicyBodyDto::setGeneratePreMergeRef(bool value)
{
    generatePreMergeRef_ = value;
    generatePreMergeRefIsSet_ = true;
}

bool GeneralPolicyBodyDto::generatePreMergeRefIsSet() const
{
    return generatePreMergeRefIsSet_;
}

void GeneralPolicyBodyDto::unsetgeneratePreMergeRef()
{
    generatePreMergeRefIsSet_ = false;
}

std::string GeneralPolicyBodyDto::getBranchNameRegex() const
{
    return branchNameRegex_;
}

void GeneralPolicyBodyDto::setBranchNameRegex(const std::string& value)
{
    branchNameRegex_ = value;
    branchNameRegexIsSet_ = true;
}

bool GeneralPolicyBodyDto::branchNameRegexIsSet() const
{
    return branchNameRegexIsSet_;
}

void GeneralPolicyBodyDto::unsetbranchNameRegex()
{
    branchNameRegexIsSet_ = false;
}

std::string GeneralPolicyBodyDto::getTagNameRegex() const
{
    return tagNameRegex_;
}

void GeneralPolicyBodyDto::setTagNameRegex(const std::string& value)
{
    tagNameRegex_ = value;
    tagNameRegexIsSet_ = true;
}

bool GeneralPolicyBodyDto::tagNameRegexIsSet() const
{
    return tagNameRegexIsSet_;
}

void GeneralPolicyBodyDto::unsettagNameRegex()
{
    tagNameRegexIsSet_ = false;
}

bool GeneralPolicyBodyDto::isForbiddenDeveloperCreateBranch() const
{
    return forbiddenDeveloperCreateBranch_;
}

void GeneralPolicyBodyDto::setForbiddenDeveloperCreateBranch(bool value)
{
    forbiddenDeveloperCreateBranch_ = value;
    forbiddenDeveloperCreateBranchIsSet_ = true;
}

bool GeneralPolicyBodyDto::forbiddenDeveloperCreateBranchIsSet() const
{
    return forbiddenDeveloperCreateBranchIsSet_;
}

void GeneralPolicyBodyDto::unsetforbiddenDeveloperCreateBranch()
{
    forbiddenDeveloperCreateBranchIsSet_ = false;
}

std::string GeneralPolicyBodyDto::getCreateBranchWhitelistUserIds() const
{
    return createBranchWhitelistUserIds_;
}

void GeneralPolicyBodyDto::setCreateBranchWhitelistUserIds(const std::string& value)
{
    createBranchWhitelistUserIds_ = value;
    createBranchWhitelistUserIdsIsSet_ = true;
}

bool GeneralPolicyBodyDto::createBranchWhitelistUserIdsIsSet() const
{
    return createBranchWhitelistUserIdsIsSet_;
}

void GeneralPolicyBodyDto::unsetcreateBranchWhitelistUserIds()
{
    createBranchWhitelistUserIdsIsSet_ = false;
}

}
}
}
}
}


