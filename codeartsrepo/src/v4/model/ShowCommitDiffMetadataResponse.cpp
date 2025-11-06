

#include "huaweicloud/codeartsrepo/v4/model/ShowCommitDiffMetadataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowCommitDiffMetadataResponse::ShowCommitDiffMetadataResponse()
{
    diffsIsSet_ = false;
    diffRefsIsSet_ = false;
    addedLines_ = 0;
    addedLinesIsSet_ = false;
    removedLines_ = 0;
    removedLinesIsSet_ = false;
    changeFileCount_ = 0;
    changeFileCountIsSet_ = false;
    changeLineCount_ = 0;
    changeLineCountIsSet_ = false;
    tooLarge_ = false;
    tooLargeIsSet_ = false;
}

ShowCommitDiffMetadataResponse::~ShowCommitDiffMetadataResponse() = default;

void ShowCommitDiffMetadataResponse::validate()
{
}

web::json::value ShowCommitDiffMetadataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(diffsIsSet_) {
        val[utility::conversions::to_string_t("diffs")] = ModelBase::toJson(diffs_);
    }
    if(diffRefsIsSet_) {
        val[utility::conversions::to_string_t("diff_refs")] = ModelBase::toJson(diffRefs_);
    }
    if(addedLinesIsSet_) {
        val[utility::conversions::to_string_t("added_lines")] = ModelBase::toJson(addedLines_);
    }
    if(removedLinesIsSet_) {
        val[utility::conversions::to_string_t("removed_lines")] = ModelBase::toJson(removedLines_);
    }
    if(changeFileCountIsSet_) {
        val[utility::conversions::to_string_t("change_file_count")] = ModelBase::toJson(changeFileCount_);
    }
    if(changeLineCountIsSet_) {
        val[utility::conversions::to_string_t("change_line_count")] = ModelBase::toJson(changeLineCount_);
    }
    if(tooLargeIsSet_) {
        val[utility::conversions::to_string_t("too_large")] = ModelBase::toJson(tooLarge_);
    }

    return val;
}
bool ShowCommitDiffMetadataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("diffs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diffs"));
        if(!fieldValue.is_null())
        {
            std::vector<DiffDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiffs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diff_refs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diff_refs"));
        if(!fieldValue.is_null())
        {
            DiffRefsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiffRefs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("added_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("added_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddedLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("removed_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("removed_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemovedLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("change_file_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("change_file_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangeFileCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("change_line_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("change_line_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangeLineCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("too_large"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("too_large"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTooLarge(refVal);
        }
    }
    return ok;
}


std::vector<DiffDto>& ShowCommitDiffMetadataResponse::getDiffs()
{
    return diffs_;
}

void ShowCommitDiffMetadataResponse::setDiffs(const std::vector<DiffDto>& value)
{
    diffs_ = value;
    diffsIsSet_ = true;
}

bool ShowCommitDiffMetadataResponse::diffsIsSet() const
{
    return diffsIsSet_;
}

void ShowCommitDiffMetadataResponse::unsetdiffs()
{
    diffsIsSet_ = false;
}

DiffRefsDto ShowCommitDiffMetadataResponse::getDiffRefs() const
{
    return diffRefs_;
}

void ShowCommitDiffMetadataResponse::setDiffRefs(const DiffRefsDto& value)
{
    diffRefs_ = value;
    diffRefsIsSet_ = true;
}

bool ShowCommitDiffMetadataResponse::diffRefsIsSet() const
{
    return diffRefsIsSet_;
}

void ShowCommitDiffMetadataResponse::unsetdiffRefs()
{
    diffRefsIsSet_ = false;
}

int32_t ShowCommitDiffMetadataResponse::getAddedLines() const
{
    return addedLines_;
}

void ShowCommitDiffMetadataResponse::setAddedLines(int32_t value)
{
    addedLines_ = value;
    addedLinesIsSet_ = true;
}

bool ShowCommitDiffMetadataResponse::addedLinesIsSet() const
{
    return addedLinesIsSet_;
}

void ShowCommitDiffMetadataResponse::unsetaddedLines()
{
    addedLinesIsSet_ = false;
}

int32_t ShowCommitDiffMetadataResponse::getRemovedLines() const
{
    return removedLines_;
}

void ShowCommitDiffMetadataResponse::setRemovedLines(int32_t value)
{
    removedLines_ = value;
    removedLinesIsSet_ = true;
}

bool ShowCommitDiffMetadataResponse::removedLinesIsSet() const
{
    return removedLinesIsSet_;
}

void ShowCommitDiffMetadataResponse::unsetremovedLines()
{
    removedLinesIsSet_ = false;
}

int32_t ShowCommitDiffMetadataResponse::getChangeFileCount() const
{
    return changeFileCount_;
}

void ShowCommitDiffMetadataResponse::setChangeFileCount(int32_t value)
{
    changeFileCount_ = value;
    changeFileCountIsSet_ = true;
}

bool ShowCommitDiffMetadataResponse::changeFileCountIsSet() const
{
    return changeFileCountIsSet_;
}

void ShowCommitDiffMetadataResponse::unsetchangeFileCount()
{
    changeFileCountIsSet_ = false;
}

int32_t ShowCommitDiffMetadataResponse::getChangeLineCount() const
{
    return changeLineCount_;
}

void ShowCommitDiffMetadataResponse::setChangeLineCount(int32_t value)
{
    changeLineCount_ = value;
    changeLineCountIsSet_ = true;
}

bool ShowCommitDiffMetadataResponse::changeLineCountIsSet() const
{
    return changeLineCountIsSet_;
}

void ShowCommitDiffMetadataResponse::unsetchangeLineCount()
{
    changeLineCountIsSet_ = false;
}

bool ShowCommitDiffMetadataResponse::isTooLarge() const
{
    return tooLarge_;
}

void ShowCommitDiffMetadataResponse::setTooLarge(bool value)
{
    tooLarge_ = value;
    tooLargeIsSet_ = true;
}

bool ShowCommitDiffMetadataResponse::tooLargeIsSet() const
{
    return tooLargeIsSet_;
}

void ShowCommitDiffMetadataResponse::unsettooLarge()
{
    tooLargeIsSet_ = false;
}

}
}
}
}
}


