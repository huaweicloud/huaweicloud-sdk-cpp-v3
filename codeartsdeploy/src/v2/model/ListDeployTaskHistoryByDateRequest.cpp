

#include "huaweicloud/codeartsdeploy/v2/model/ListDeployTaskHistoryByDateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListDeployTaskHistoryByDateRequest::ListDeployTaskHistoryByDateRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
}

ListDeployTaskHistoryByDateRequest::~ListDeployTaskHistoryByDateRequest() = default;

void ListDeployTaskHistoryByDateRequest::validate()
{
}

web::json::value ListDeployTaskHistoryByDateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }

    return val;
}

bool ListDeployTaskHistoryByDateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    return ok;
}

std::string ListDeployTaskHistoryByDateRequest::getProjectId() const
{
    return projectId_;
}

void ListDeployTaskHistoryByDateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListDeployTaskHistoryByDateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListDeployTaskHistoryByDateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListDeployTaskHistoryByDateRequest::getId() const
{
    return id_;
}

void ListDeployTaskHistoryByDateRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListDeployTaskHistoryByDateRequest::idIsSet() const
{
    return idIsSet_;
}

void ListDeployTaskHistoryByDateRequest::unsetid()
{
    idIsSet_ = false;
}

int32_t ListDeployTaskHistoryByDateRequest::getPage() const
{
    return page_;
}

void ListDeployTaskHistoryByDateRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListDeployTaskHistoryByDateRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListDeployTaskHistoryByDateRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListDeployTaskHistoryByDateRequest::getSize() const
{
    return size_;
}

void ListDeployTaskHistoryByDateRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListDeployTaskHistoryByDateRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListDeployTaskHistoryByDateRequest::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ListDeployTaskHistoryByDateRequest::getStartDate() const
{
    return startDate_;
}

void ListDeployTaskHistoryByDateRequest::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ListDeployTaskHistoryByDateRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void ListDeployTaskHistoryByDateRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string ListDeployTaskHistoryByDateRequest::getEndDate() const
{
    return endDate_;
}

void ListDeployTaskHistoryByDateRequest::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ListDeployTaskHistoryByDateRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void ListDeployTaskHistoryByDateRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

}
}
}
}
}


