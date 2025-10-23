

#include "huaweicloud/codehub/v4/model/UpdateGeneralPolicyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateGeneralPolicyDto::UpdateGeneralPolicyDto()
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

UpdateGeneralPolicyDto::~UpdateGeneralPolicyDto() = default;

void UpdateGeneralPolicyDto::validate()
{
}

web::json::value UpdateGeneralPolicyDto::toJson() const
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
bool UpdateGeneralPolicyDto::fromJson(const web::json::value& val)
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


bool UpdateGeneralPolicyDto::isDisableFork() const
{
    return disableFork_;
}

void UpdateGeneralPolicyDto::setDisableFork(bool value)
{
    disableFork_ = value;
    disableForkIsSet_ = true;
}

bool UpdateGeneralPolicyDto::disableForkIsSet() const
{
    return disableForkIsSet_;
}

void UpdateGeneralPolicyDto::unsetdisableFork()
{
    disableForkIsSet_ = false;
}

std::string UpdateGeneralPolicyDto::getBranchNameRegex() const
{
    return branchNameRegex_;
}

void UpdateGeneralPolicyDto::setBranchNameRegex(const std::string& value)
{
    branchNameRegex_ = value;
    branchNameRegexIsSet_ = true;
}

bool UpdateGeneralPolicyDto::branchNameRegexIsSet() const
{
    return branchNameRegexIsSet_;
}

void UpdateGeneralPolicyDto::unsetbranchNameRegex()
{
    branchNameRegexIsSet_ = false;
}

std::string UpdateGeneralPolicyDto::getTagNameRegex() const
{
    return tagNameRegex_;
}

void UpdateGeneralPolicyDto::setTagNameRegex(const std::string& value)
{
    tagNameRegex_ = value;
    tagNameRegexIsSet_ = true;
}

bool UpdateGeneralPolicyDto::tagNameRegexIsSet() const
{
    return tagNameRegexIsSet_;
}

void UpdateGeneralPolicyDto::unsettagNameRegex()
{
    tagNameRegexIsSet_ = false;
}

bool UpdateGeneralPolicyDto::isGeneratePreMergeRef() const
{
    return generatePreMergeRef_;
}

void UpdateGeneralPolicyDto::setGeneratePreMergeRef(bool value)
{
    generatePreMergeRef_ = value;
    generatePreMergeRefIsSet_ = true;
}

bool UpdateGeneralPolicyDto::generatePreMergeRefIsSet() const
{
    return generatePreMergeRefIsSet_;
}

void UpdateGeneralPolicyDto::unsetgeneratePreMergeRef()
{
    generatePreMergeRefIsSet_ = false;
}

}
}
}
}
}


