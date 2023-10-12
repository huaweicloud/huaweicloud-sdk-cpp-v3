

#include "huaweicloud/drs/v3/model/ContentCompareResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ContentCompareResult::ContentCompareResult()
{
    compareTaskId_ = "";
    compareTaskIdIsSet_ = false;
    contentCompareOverviewIsSet_ = false;
    contentCompareOverviewCount_ = 0;
    contentCompareOverviewCountIsSet_ = false;
    contentCompareDetailsIsSet_ = false;
    contentCompareDiffsIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ContentCompareResult::~ContentCompareResult() = default;

void ContentCompareResult::validate()
{
}

web::json::value ContentCompareResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compareTaskIdIsSet_) {
        val[utility::conversions::to_string_t("compare_task_id")] = ModelBase::toJson(compareTaskId_);
    }
    if(contentCompareOverviewIsSet_) {
        val[utility::conversions::to_string_t("content_compare_overview")] = ModelBase::toJson(contentCompareOverview_);
    }
    if(contentCompareOverviewCountIsSet_) {
        val[utility::conversions::to_string_t("content_compare_overview_count")] = ModelBase::toJson(contentCompareOverviewCount_);
    }
    if(contentCompareDetailsIsSet_) {
        val[utility::conversions::to_string_t("content_compare_details")] = ModelBase::toJson(contentCompareDetails_);
    }
    if(contentCompareDiffsIsSet_) {
        val[utility::conversions::to_string_t("content_compare_diffs")] = ModelBase::toJson(contentCompareDiffs_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool ContentCompareResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compare_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_compare_overview"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_overview"));
        if(!fieldValue.is_null())
        {
            std::vector<ContentCompareResultOverview> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareOverview(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_compare_overview_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_overview_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareOverviewCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_compare_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_details"));
        if(!fieldValue.is_null())
        {
            std::vector<ContentCompareResultDetails> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_compare_diffs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_diffs"));
        if(!fieldValue.is_null())
        {
            std::vector<ContentCompareResultDiffs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareDiffs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string ContentCompareResult::getCompareTaskId() const
{
    return compareTaskId_;
}

void ContentCompareResult::setCompareTaskId(const std::string& value)
{
    compareTaskId_ = value;
    compareTaskIdIsSet_ = true;
}

bool ContentCompareResult::compareTaskIdIsSet() const
{
    return compareTaskIdIsSet_;
}

void ContentCompareResult::unsetcompareTaskId()
{
    compareTaskIdIsSet_ = false;
}

std::vector<ContentCompareResultOverview>& ContentCompareResult::getContentCompareOverview()
{
    return contentCompareOverview_;
}

void ContentCompareResult::setContentCompareOverview(const std::vector<ContentCompareResultOverview>& value)
{
    contentCompareOverview_ = value;
    contentCompareOverviewIsSet_ = true;
}

bool ContentCompareResult::contentCompareOverviewIsSet() const
{
    return contentCompareOverviewIsSet_;
}

void ContentCompareResult::unsetcontentCompareOverview()
{
    contentCompareOverviewIsSet_ = false;
}

int32_t ContentCompareResult::getContentCompareOverviewCount() const
{
    return contentCompareOverviewCount_;
}

void ContentCompareResult::setContentCompareOverviewCount(int32_t value)
{
    contentCompareOverviewCount_ = value;
    contentCompareOverviewCountIsSet_ = true;
}

bool ContentCompareResult::contentCompareOverviewCountIsSet() const
{
    return contentCompareOverviewCountIsSet_;
}

void ContentCompareResult::unsetcontentCompareOverviewCount()
{
    contentCompareOverviewCountIsSet_ = false;
}

std::vector<ContentCompareResultDetails>& ContentCompareResult::getContentCompareDetails()
{
    return contentCompareDetails_;
}

void ContentCompareResult::setContentCompareDetails(const std::vector<ContentCompareResultDetails>& value)
{
    contentCompareDetails_ = value;
    contentCompareDetailsIsSet_ = true;
}

bool ContentCompareResult::contentCompareDetailsIsSet() const
{
    return contentCompareDetailsIsSet_;
}

void ContentCompareResult::unsetcontentCompareDetails()
{
    contentCompareDetailsIsSet_ = false;
}

std::vector<ContentCompareResultDiffs>& ContentCompareResult::getContentCompareDiffs()
{
    return contentCompareDiffs_;
}

void ContentCompareResult::setContentCompareDiffs(const std::vector<ContentCompareResultDiffs>& value)
{
    contentCompareDiffs_ = value;
    contentCompareDiffsIsSet_ = true;
}

bool ContentCompareResult::contentCompareDiffsIsSet() const
{
    return contentCompareDiffsIsSet_;
}

void ContentCompareResult::unsetcontentCompareDiffs()
{
    contentCompareDiffsIsSet_ = false;
}

std::string ContentCompareResult::getErrorCode() const
{
    return errorCode_;
}

void ContentCompareResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ContentCompareResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ContentCompareResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ContentCompareResult::getErrorMsg() const
{
    return errorMsg_;
}

void ContentCompareResult::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ContentCompareResult::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ContentCompareResult::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


