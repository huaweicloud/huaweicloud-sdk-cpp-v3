

#include "huaweicloud/live/v1/model/ListPullTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListPullTasksResponse::ListPullTasksResponse()
{
    taskInfosIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListPullTasksResponse::~ListPullTasksResponse() = default;

void ListPullTasksResponse::validate()
{
}

web::json::value ListPullTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskInfosIsSet_) {
        val[utility::conversions::to_string_t("task_infos")] = ModelBase::toJson(taskInfos_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListPullTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<LivePullTaskInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<LivePullTaskInfo>& ListPullTasksResponse::getTaskInfos()
{
    return taskInfos_;
}

void ListPullTasksResponse::setTaskInfos(const std::vector<LivePullTaskInfo>& value)
{
    taskInfos_ = value;
    taskInfosIsSet_ = true;
}

bool ListPullTasksResponse::taskInfosIsSet() const
{
    return taskInfosIsSet_;
}

void ListPullTasksResponse::unsettaskInfos()
{
    taskInfosIsSet_ = false;
}

std::string ListPullTasksResponse::getRequestId() const
{
    return requestId_;
}

void ListPullTasksResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListPullTasksResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListPullTasksResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

int32_t ListPullTasksResponse::getTotal() const
{
    return total_;
}

void ListPullTasksResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListPullTasksResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListPullTasksResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


