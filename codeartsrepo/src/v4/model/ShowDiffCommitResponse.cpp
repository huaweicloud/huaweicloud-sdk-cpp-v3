

#include "huaweicloud/codeartsrepo/v4/model/ShowDiffCommitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowDiffCommitResponse::ShowDiffCommitResponse()
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

ShowDiffCommitResponse::~ShowDiffCommitResponse() = default;

void ShowDiffCommitResponse::validate()
{
}

web::json::value ShowDiffCommitResponse::toJson() const
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
bool ShowDiffCommitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("diffs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diffs"));
        if(!fieldValue.is_null())
        {
            std::vector<DiffNoLineDto> refVal;
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


std::vector<DiffNoLineDto>& ShowDiffCommitResponse::getDiffs()
{
    return diffs_;
}

void ShowDiffCommitResponse::setDiffs(const std::vector<DiffNoLineDto>& value)
{
    diffs_ = value;
    diffsIsSet_ = true;
}

bool ShowDiffCommitResponse::diffsIsSet() const
{
    return diffsIsSet_;
}

void ShowDiffCommitResponse::unsetdiffs()
{
    diffsIsSet_ = false;
}

DiffRefsDto ShowDiffCommitResponse::getDiffRefs() const
{
    return diffRefs_;
}

void ShowDiffCommitResponse::setDiffRefs(const DiffRefsDto& value)
{
    diffRefs_ = value;
    diffRefsIsSet_ = true;
}

bool ShowDiffCommitResponse::diffRefsIsSet() const
{
    return diffRefsIsSet_;
}

void ShowDiffCommitResponse::unsetdiffRefs()
{
    diffRefsIsSet_ = false;
}

int32_t ShowDiffCommitResponse::getAddedLines() const
{
    return addedLines_;
}

void ShowDiffCommitResponse::setAddedLines(int32_t value)
{
    addedLines_ = value;
    addedLinesIsSet_ = true;
}

bool ShowDiffCommitResponse::addedLinesIsSet() const
{
    return addedLinesIsSet_;
}

void ShowDiffCommitResponse::unsetaddedLines()
{
    addedLinesIsSet_ = false;
}

int32_t ShowDiffCommitResponse::getRemovedLines() const
{
    return removedLines_;
}

void ShowDiffCommitResponse::setRemovedLines(int32_t value)
{
    removedLines_ = value;
    removedLinesIsSet_ = true;
}

bool ShowDiffCommitResponse::removedLinesIsSet() const
{
    return removedLinesIsSet_;
}

void ShowDiffCommitResponse::unsetremovedLines()
{
    removedLinesIsSet_ = false;
}

int32_t ShowDiffCommitResponse::getChangeFileCount() const
{
    return changeFileCount_;
}

void ShowDiffCommitResponse::setChangeFileCount(int32_t value)
{
    changeFileCount_ = value;
    changeFileCountIsSet_ = true;
}

bool ShowDiffCommitResponse::changeFileCountIsSet() const
{
    return changeFileCountIsSet_;
}

void ShowDiffCommitResponse::unsetchangeFileCount()
{
    changeFileCountIsSet_ = false;
}

int32_t ShowDiffCommitResponse::getChangeLineCount() const
{
    return changeLineCount_;
}

void ShowDiffCommitResponse::setChangeLineCount(int32_t value)
{
    changeLineCount_ = value;
    changeLineCountIsSet_ = true;
}

bool ShowDiffCommitResponse::changeLineCountIsSet() const
{
    return changeLineCountIsSet_;
}

void ShowDiffCommitResponse::unsetchangeLineCount()
{
    changeLineCountIsSet_ = false;
}

bool ShowDiffCommitResponse::isTooLarge() const
{
    return tooLarge_;
}

void ShowDiffCommitResponse::setTooLarge(bool value)
{
    tooLarge_ = value;
    tooLargeIsSet_ = true;
}

bool ShowDiffCommitResponse::tooLargeIsSet() const
{
    return tooLargeIsSet_;
}

void ShowDiffCommitResponse::unsettooLarge()
{
    tooLargeIsSet_ = false;
}

}
}
}
}
}


