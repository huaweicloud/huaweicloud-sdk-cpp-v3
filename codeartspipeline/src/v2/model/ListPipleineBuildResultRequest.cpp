

#include "huaweicloud/codeartspipeline/v2/model/ListPipleineBuildResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipleineBuildResultRequest::ListPipleineBuildResultRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListPipleineBuildResultRequest::~ListPipleineBuildResultRequest() = default;

void ListPipleineBuildResultRequest::validate()
{
}

web::json::value ListPipleineBuildResultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListPipleineBuildResultRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListPipleineBuildResultRequest::getProjectId() const
{
    return projectId_;
}

void ListPipleineBuildResultRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListPipleineBuildResultRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListPipleineBuildResultRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListPipleineBuildResultRequest::getStartDate() const
{
    return startDate_;
}

void ListPipleineBuildResultRequest::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ListPipleineBuildResultRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void ListPipleineBuildResultRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string ListPipleineBuildResultRequest::getEndDate() const
{
    return endDate_;
}

void ListPipleineBuildResultRequest::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ListPipleineBuildResultRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void ListPipleineBuildResultRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

int32_t ListPipleineBuildResultRequest::getOffset() const
{
    return offset_;
}

void ListPipleineBuildResultRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPipleineBuildResultRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPipleineBuildResultRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPipleineBuildResultRequest::getLimit() const
{
    return limit_;
}

void ListPipleineBuildResultRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPipleineBuildResultRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPipleineBuildResultRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


