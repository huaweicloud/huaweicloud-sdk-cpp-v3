

#include "huaweicloud/drs/v3/model/QueryCompareResultReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryCompareResultReq::QueryCompareResultReq()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    objectLevelCompareId_ = "";
    objectLevelCompareIdIsSet_ = false;
    lineCompareId_ = "";
    lineCompareIdIsSet_ = false;
    contentCompareId_ = "";
    contentCompareIdIsSet_ = false;
    currentPage_ = 0;
    currentPageIsSet_ = false;
    perPage_ = 0;
    perPageIsSet_ = false;
}

QueryCompareResultReq::~QueryCompareResultReq() = default;

void QueryCompareResultReq::validate()
{
}

web::json::value QueryCompareResultReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(objectLevelCompareIdIsSet_) {
        val[utility::conversions::to_string_t("object_level_compare_id")] = ModelBase::toJson(objectLevelCompareId_);
    }
    if(lineCompareIdIsSet_) {
        val[utility::conversions::to_string_t("line_compare_id")] = ModelBase::toJson(lineCompareId_);
    }
    if(contentCompareIdIsSet_) {
        val[utility::conversions::to_string_t("content_compare_id")] = ModelBase::toJson(contentCompareId_);
    }
    if(currentPageIsSet_) {
        val[utility::conversions::to_string_t("current_page")] = ModelBase::toJson(currentPage_);
    }
    if(perPageIsSet_) {
        val[utility::conversions::to_string_t("per_page")] = ModelBase::toJson(perPage_);
    }

    return val;
}
bool QueryCompareResultReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("object_level_compare_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_level_compare_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectLevelCompareId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_compare_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_compare_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineCompareId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_compare_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("per_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("per_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPerPage(refVal);
        }
    }
    return ok;
}


std::string QueryCompareResultReq::getJobId() const
{
    return jobId_;
}

void QueryCompareResultReq::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool QueryCompareResultReq::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void QueryCompareResultReq::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string QueryCompareResultReq::getObjectLevelCompareId() const
{
    return objectLevelCompareId_;
}

void QueryCompareResultReq::setObjectLevelCompareId(const std::string& value)
{
    objectLevelCompareId_ = value;
    objectLevelCompareIdIsSet_ = true;
}

bool QueryCompareResultReq::objectLevelCompareIdIsSet() const
{
    return objectLevelCompareIdIsSet_;
}

void QueryCompareResultReq::unsetobjectLevelCompareId()
{
    objectLevelCompareIdIsSet_ = false;
}

std::string QueryCompareResultReq::getLineCompareId() const
{
    return lineCompareId_;
}

void QueryCompareResultReq::setLineCompareId(const std::string& value)
{
    lineCompareId_ = value;
    lineCompareIdIsSet_ = true;
}

bool QueryCompareResultReq::lineCompareIdIsSet() const
{
    return lineCompareIdIsSet_;
}

void QueryCompareResultReq::unsetlineCompareId()
{
    lineCompareIdIsSet_ = false;
}

std::string QueryCompareResultReq::getContentCompareId() const
{
    return contentCompareId_;
}

void QueryCompareResultReq::setContentCompareId(const std::string& value)
{
    contentCompareId_ = value;
    contentCompareIdIsSet_ = true;
}

bool QueryCompareResultReq::contentCompareIdIsSet() const
{
    return contentCompareIdIsSet_;
}

void QueryCompareResultReq::unsetcontentCompareId()
{
    contentCompareIdIsSet_ = false;
}

int32_t QueryCompareResultReq::getCurrentPage() const
{
    return currentPage_;
}

void QueryCompareResultReq::setCurrentPage(int32_t value)
{
    currentPage_ = value;
    currentPageIsSet_ = true;
}

bool QueryCompareResultReq::currentPageIsSet() const
{
    return currentPageIsSet_;
}

void QueryCompareResultReq::unsetcurrentPage()
{
    currentPageIsSet_ = false;
}

int32_t QueryCompareResultReq::getPerPage() const
{
    return perPage_;
}

void QueryCompareResultReq::setPerPage(int32_t value)
{
    perPage_ = value;
    perPageIsSet_ = true;
}

bool QueryCompareResultReq::perPageIsSet() const
{
    return perPageIsSet_;
}

void QueryCompareResultReq::unsetperPage()
{
    perPageIsSet_ = false;
}

}
}
}
}
}


