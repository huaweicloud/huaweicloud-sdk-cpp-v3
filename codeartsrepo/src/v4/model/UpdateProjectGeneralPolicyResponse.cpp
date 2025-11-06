

#include "huaweicloud/codeartsrepo/v4/model/UpdateProjectGeneralPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateProjectGeneralPolicyResponse::UpdateProjectGeneralPolicyResponse()
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

UpdateProjectGeneralPolicyResponse::~UpdateProjectGeneralPolicyResponse() = default;

void UpdateProjectGeneralPolicyResponse::validate()
{
}

web::json::value UpdateProjectGeneralPolicyResponse::toJson() const
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
bool UpdateProjectGeneralPolicyResponse::fromJson(const web::json::value& val)
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


bool UpdateProjectGeneralPolicyResponse::isDisableFork() const
{
    return disableFork_;
}

void UpdateProjectGeneralPolicyResponse::setDisableFork(bool value)
{
    disableFork_ = value;
    disableForkIsSet_ = true;
}

bool UpdateProjectGeneralPolicyResponse::disableForkIsSet() const
{
    return disableForkIsSet_;
}

void UpdateProjectGeneralPolicyResponse::unsetdisableFork()
{
    disableForkIsSet_ = false;
}

std::string UpdateProjectGeneralPolicyResponse::getBranchNameRegex() const
{
    return branchNameRegex_;
}

void UpdateProjectGeneralPolicyResponse::setBranchNameRegex(const std::string& value)
{
    branchNameRegex_ = value;
    branchNameRegexIsSet_ = true;
}

bool UpdateProjectGeneralPolicyResponse::branchNameRegexIsSet() const
{
    return branchNameRegexIsSet_;
}

void UpdateProjectGeneralPolicyResponse::unsetbranchNameRegex()
{
    branchNameRegexIsSet_ = false;
}

std::string UpdateProjectGeneralPolicyResponse::getTagNameRegex() const
{
    return tagNameRegex_;
}

void UpdateProjectGeneralPolicyResponse::setTagNameRegex(const std::string& value)
{
    tagNameRegex_ = value;
    tagNameRegexIsSet_ = true;
}

bool UpdateProjectGeneralPolicyResponse::tagNameRegexIsSet() const
{
    return tagNameRegexIsSet_;
}

void UpdateProjectGeneralPolicyResponse::unsettagNameRegex()
{
    tagNameRegexIsSet_ = false;
}

bool UpdateProjectGeneralPolicyResponse::isGeneratePreMergeRef() const
{
    return generatePreMergeRef_;
}

void UpdateProjectGeneralPolicyResponse::setGeneratePreMergeRef(bool value)
{
    generatePreMergeRef_ = value;
    generatePreMergeRefIsSet_ = true;
}

bool UpdateProjectGeneralPolicyResponse::generatePreMergeRefIsSet() const
{
    return generatePreMergeRefIsSet_;
}

void UpdateProjectGeneralPolicyResponse::unsetgeneratePreMergeRef()
{
    generatePreMergeRefIsSet_ = false;
}

}
}
}
}
}


