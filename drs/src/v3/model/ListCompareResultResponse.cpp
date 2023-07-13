

#include "huaweicloud/drs/v3/model/ListCompareResultResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListCompareResultResponse::ListCompareResultResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    objectLevelCompareResultsIsSet_ = false;
    lineCompareResultsIsSet_ = false;
    contentCompareResultsIsSet_ = false;
    compareTaskListResultsIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ListCompareResultResponse::~ListCompareResultResponse() = default;

void ListCompareResultResponse::validate()
{
}

web::json::value ListCompareResultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(objectLevelCompareResultsIsSet_) {
        val[utility::conversions::to_string_t("object_level_compare_results")] = ModelBase::toJson(objectLevelCompareResults_);
    }
    if(lineCompareResultsIsSet_) {
        val[utility::conversions::to_string_t("line_compare_results")] = ModelBase::toJson(lineCompareResults_);
    }
    if(contentCompareResultsIsSet_) {
        val[utility::conversions::to_string_t("content_compare_results")] = ModelBase::toJson(contentCompareResults_);
    }
    if(compareTaskListResultsIsSet_) {
        val[utility::conversions::to_string_t("compare_task_list_results")] = ModelBase::toJson(compareTaskListResults_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}

bool ListCompareResultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_level_compare_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_level_compare_results"));
        if(!fieldValue.is_null())
        {
            ObjectCompareResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectLevelCompareResults(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_compare_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_compare_results"));
        if(!fieldValue.is_null())
        {
            LineCompareResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineCompareResults(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_compare_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_results"));
        if(!fieldValue.is_null())
        {
            ContentCompareResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareResults(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_task_list_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_task_list_results"));
        if(!fieldValue.is_null())
        {
            CompareTaskListResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareTaskListResults(refVal);
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

std::string ListCompareResultResponse::getJobId() const
{
    return jobId_;
}

void ListCompareResultResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListCompareResultResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListCompareResultResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

ObjectCompareResult ListCompareResultResponse::getObjectLevelCompareResults() const
{
    return objectLevelCompareResults_;
}

void ListCompareResultResponse::setObjectLevelCompareResults(const ObjectCompareResult& value)
{
    objectLevelCompareResults_ = value;
    objectLevelCompareResultsIsSet_ = true;
}

bool ListCompareResultResponse::objectLevelCompareResultsIsSet() const
{
    return objectLevelCompareResultsIsSet_;
}

void ListCompareResultResponse::unsetobjectLevelCompareResults()
{
    objectLevelCompareResultsIsSet_ = false;
}

LineCompareResult ListCompareResultResponse::getLineCompareResults() const
{
    return lineCompareResults_;
}

void ListCompareResultResponse::setLineCompareResults(const LineCompareResult& value)
{
    lineCompareResults_ = value;
    lineCompareResultsIsSet_ = true;
}

bool ListCompareResultResponse::lineCompareResultsIsSet() const
{
    return lineCompareResultsIsSet_;
}

void ListCompareResultResponse::unsetlineCompareResults()
{
    lineCompareResultsIsSet_ = false;
}

ContentCompareResult ListCompareResultResponse::getContentCompareResults() const
{
    return contentCompareResults_;
}

void ListCompareResultResponse::setContentCompareResults(const ContentCompareResult& value)
{
    contentCompareResults_ = value;
    contentCompareResultsIsSet_ = true;
}

bool ListCompareResultResponse::contentCompareResultsIsSet() const
{
    return contentCompareResultsIsSet_;
}

void ListCompareResultResponse::unsetcontentCompareResults()
{
    contentCompareResultsIsSet_ = false;
}

CompareTaskListResult ListCompareResultResponse::getCompareTaskListResults() const
{
    return compareTaskListResults_;
}

void ListCompareResultResponse::setCompareTaskListResults(const CompareTaskListResult& value)
{
    compareTaskListResults_ = value;
    compareTaskListResultsIsSet_ = true;
}

bool ListCompareResultResponse::compareTaskListResultsIsSet() const
{
    return compareTaskListResultsIsSet_;
}

void ListCompareResultResponse::unsetcompareTaskListResults()
{
    compareTaskListResultsIsSet_ = false;
}

std::string ListCompareResultResponse::getErrorCode() const
{
    return errorCode_;
}

void ListCompareResultResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ListCompareResultResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ListCompareResultResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ListCompareResultResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ListCompareResultResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ListCompareResultResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ListCompareResultResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


