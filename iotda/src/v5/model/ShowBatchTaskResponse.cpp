

#include "huaweicloud/iotda/v5/model/ShowBatchTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowBatchTaskResponse::ShowBatchTaskResponse()
{
    batchtaskIsSet_ = false;
    taskDetailsIsSet_ = false;
    pageIsSet_ = false;
}

ShowBatchTaskResponse::~ShowBatchTaskResponse() = default;

void ShowBatchTaskResponse::validate()
{
}

web::json::value ShowBatchTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(batchtaskIsSet_) {
        val[utility::conversions::to_string_t("batchtask")] = ModelBase::toJson(batchtask_);
    }
    if(taskDetailsIsSet_) {
        val[utility::conversions::to_string_t("task_details")] = ModelBase::toJson(taskDetails_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ShowBatchTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("batchtask"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("batchtask"));
        if(!fieldValue.is_null())
        {
            Task refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBatchtask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_details"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


Task ShowBatchTaskResponse::getBatchtask() const
{
    return batchtask_;
}

void ShowBatchTaskResponse::setBatchtask(const Task& value)
{
    batchtask_ = value;
    batchtaskIsSet_ = true;
}

bool ShowBatchTaskResponse::batchtaskIsSet() const
{
    return batchtaskIsSet_;
}

void ShowBatchTaskResponse::unsetbatchtask()
{
    batchtaskIsSet_ = false;
}

std::vector<TaskDetail>& ShowBatchTaskResponse::getTaskDetails()
{
    return taskDetails_;
}

void ShowBatchTaskResponse::setTaskDetails(const std::vector<TaskDetail>& value)
{
    taskDetails_ = value;
    taskDetailsIsSet_ = true;
}

bool ShowBatchTaskResponse::taskDetailsIsSet() const
{
    return taskDetailsIsSet_;
}

void ShowBatchTaskResponse::unsettaskDetails()
{
    taskDetailsIsSet_ = false;
}

Page ShowBatchTaskResponse::getPage() const
{
    return page_;
}

void ShowBatchTaskResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ShowBatchTaskResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ShowBatchTaskResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


