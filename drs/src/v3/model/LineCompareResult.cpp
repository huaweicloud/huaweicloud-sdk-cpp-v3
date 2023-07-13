

#include "huaweicloud/drs/v3/model/LineCompareResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




LineCompareResult::LineCompareResult()
{
    compareTaskId_ = "";
    compareTaskIdIsSet_ = false;
    lineCompareOverviewIsSet_ = false;
    lineCompareOverviewCount_ = 0;
    lineCompareOverviewCountIsSet_ = false;
    lineCompareDetailsIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

LineCompareResult::~LineCompareResult() = default;

void LineCompareResult::validate()
{
}

web::json::value LineCompareResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compareTaskIdIsSet_) {
        val[utility::conversions::to_string_t("compare_task_id")] = ModelBase::toJson(compareTaskId_);
    }
    if(lineCompareOverviewIsSet_) {
        val[utility::conversions::to_string_t("line_compare_overview")] = ModelBase::toJson(lineCompareOverview_);
    }
    if(lineCompareOverviewCountIsSet_) {
        val[utility::conversions::to_string_t("line_compare_overview_count")] = ModelBase::toJson(lineCompareOverviewCount_);
    }
    if(lineCompareDetailsIsSet_) {
        val[utility::conversions::to_string_t("line_compare_details")] = ModelBase::toJson(lineCompareDetails_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}

bool LineCompareResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("line_compare_overview"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_compare_overview"));
        if(!fieldValue.is_null())
        {
            std::vector<LineCompareResultOverview> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineCompareOverview(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_compare_overview_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_compare_overview_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineCompareOverviewCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_compare_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_compare_details"));
        if(!fieldValue.is_null())
        {
            std::vector<LineCompareResultDetails> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineCompareDetails(refVal);
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

std::string LineCompareResult::getCompareTaskId() const
{
    return compareTaskId_;
}

void LineCompareResult::setCompareTaskId(const std::string& value)
{
    compareTaskId_ = value;
    compareTaskIdIsSet_ = true;
}

bool LineCompareResult::compareTaskIdIsSet() const
{
    return compareTaskIdIsSet_;
}

void LineCompareResult::unsetcompareTaskId()
{
    compareTaskIdIsSet_ = false;
}

std::vector<LineCompareResultOverview>& LineCompareResult::getLineCompareOverview()
{
    return lineCompareOverview_;
}

void LineCompareResult::setLineCompareOverview(const std::vector<LineCompareResultOverview>& value)
{
    lineCompareOverview_ = value;
    lineCompareOverviewIsSet_ = true;
}

bool LineCompareResult::lineCompareOverviewIsSet() const
{
    return lineCompareOverviewIsSet_;
}

void LineCompareResult::unsetlineCompareOverview()
{
    lineCompareOverviewIsSet_ = false;
}

int32_t LineCompareResult::getLineCompareOverviewCount() const
{
    return lineCompareOverviewCount_;
}

void LineCompareResult::setLineCompareOverviewCount(int32_t value)
{
    lineCompareOverviewCount_ = value;
    lineCompareOverviewCountIsSet_ = true;
}

bool LineCompareResult::lineCompareOverviewCountIsSet() const
{
    return lineCompareOverviewCountIsSet_;
}

void LineCompareResult::unsetlineCompareOverviewCount()
{
    lineCompareOverviewCountIsSet_ = false;
}

std::vector<LineCompareResultDetails>& LineCompareResult::getLineCompareDetails()
{
    return lineCompareDetails_;
}

void LineCompareResult::setLineCompareDetails(const std::vector<LineCompareResultDetails>& value)
{
    lineCompareDetails_ = value;
    lineCompareDetailsIsSet_ = true;
}

bool LineCompareResult::lineCompareDetailsIsSet() const
{
    return lineCompareDetailsIsSet_;
}

void LineCompareResult::unsetlineCompareDetails()
{
    lineCompareDetailsIsSet_ = false;
}

std::string LineCompareResult::getErrorCode() const
{
    return errorCode_;
}

void LineCompareResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool LineCompareResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void LineCompareResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string LineCompareResult::getErrorMsg() const
{
    return errorMsg_;
}

void LineCompareResult::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool LineCompareResult::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void LineCompareResult::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


