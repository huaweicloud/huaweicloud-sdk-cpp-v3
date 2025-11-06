

#include "huaweicloud/codeartsrepo/v4/model/UpdateGroupGeneralPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateGroupGeneralPolicyResponse::UpdateGroupGeneralPolicyResponse()
{
    disableFork_ = false;
    disableForkIsSet_ = false;
    branchNameRegex_ = "";
    branchNameRegexIsSet_ = false;
    tagNameRegex_ = "";
    tagNameRegexIsSet_ = false;
    generatePreMergeRef_ = false;
    generatePreMergeRefIsSet_ = false;
}

UpdateGroupGeneralPolicyResponse::~UpdateGroupGeneralPolicyResponse() = default;

void UpdateGroupGeneralPolicyResponse::validate()
{
}

web::json::value UpdateGroupGeneralPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disableForkIsSet_) {
        val[utility::conversions::to_string_t("disable_fork")] = ModelBase::toJson(disableFork_);
    }
    if(branchNameRegexIsSet_) {
        val[utility::conversions::to_string_t("branch_name_regex")] = ModelBase::toJson(branchNameRegex_);
    }
    if(tagNameRegexIsSet_) {
        val[utility::conversions::to_string_t("tag_name_regex")] = ModelBase::toJson(tagNameRegex_);
    }
    if(generatePreMergeRefIsSet_) {
        val[utility::conversions::to_string_t("generate_pre_merge_ref")] = ModelBase::toJson(generatePreMergeRef_);
    }

    return val;
}
bool UpdateGroupGeneralPolicyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("generate_pre_merge_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("generate_pre_merge_ref"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeneratePreMergeRef(refVal);
        }
    }
    return ok;
}


bool UpdateGroupGeneralPolicyResponse::isDisableFork() const
{
    return disableFork_;
}

void UpdateGroupGeneralPolicyResponse::setDisableFork(bool value)
{
    disableFork_ = value;
    disableForkIsSet_ = true;
}

bool UpdateGroupGeneralPolicyResponse::disableForkIsSet() const
{
    return disableForkIsSet_;
}

void UpdateGroupGeneralPolicyResponse::unsetdisableFork()
{
    disableForkIsSet_ = false;
}

std::string UpdateGroupGeneralPolicyResponse::getBranchNameRegex() const
{
    return branchNameRegex_;
}

void UpdateGroupGeneralPolicyResponse::setBranchNameRegex(const std::string& value)
{
    branchNameRegex_ = value;
    branchNameRegexIsSet_ = true;
}

bool UpdateGroupGeneralPolicyResponse::branchNameRegexIsSet() const
{
    return branchNameRegexIsSet_;
}

void UpdateGroupGeneralPolicyResponse::unsetbranchNameRegex()
{
    branchNameRegexIsSet_ = false;
}

std::string UpdateGroupGeneralPolicyResponse::getTagNameRegex() const
{
    return tagNameRegex_;
}

void UpdateGroupGeneralPolicyResponse::setTagNameRegex(const std::string& value)
{
    tagNameRegex_ = value;
    tagNameRegexIsSet_ = true;
}

bool UpdateGroupGeneralPolicyResponse::tagNameRegexIsSet() const
{
    return tagNameRegexIsSet_;
}

void UpdateGroupGeneralPolicyResponse::unsettagNameRegex()
{
    tagNameRegexIsSet_ = false;
}

bool UpdateGroupGeneralPolicyResponse::isGeneratePreMergeRef() const
{
    return generatePreMergeRef_;
}

void UpdateGroupGeneralPolicyResponse::setGeneratePreMergeRef(bool value)
{
    generatePreMergeRef_ = value;
    generatePreMergeRefIsSet_ = true;
}

bool UpdateGroupGeneralPolicyResponse::generatePreMergeRefIsSet() const
{
    return generatePreMergeRefIsSet_;
}

void UpdateGroupGeneralPolicyResponse::unsetgeneratePreMergeRef()
{
    generatePreMergeRefIsSet_ = false;
}

}
}
}
}
}


