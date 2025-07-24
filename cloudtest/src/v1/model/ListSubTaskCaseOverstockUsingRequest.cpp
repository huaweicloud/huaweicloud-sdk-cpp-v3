

#include "huaweicloud/cloudtest/v1/model/ListSubTaskCaseOverstockUsingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListSubTaskCaseOverstockUsingRequest::ListSubTaskCaseOverstockUsingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    executorType_ = "";
    executorTypeIsSet_ = false;
    label_ = "";
    labelIsSet_ = false;
    locationId_ = "";
    locationIdIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ListSubTaskCaseOverstockUsingRequest::~ListSubTaskCaseOverstockUsingRequest() = default;

void ListSubTaskCaseOverstockUsingRequest::validate()
{
}

web::json::value ListSubTaskCaseOverstockUsingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }
    if(executorTypeIsSet_) {
        val[utility::conversions::to_string_t("executorType")] = ModelBase::toJson(executorType_);
    }
    if(labelIsSet_) {
        val[utility::conversions::to_string_t("label")] = ModelBase::toJson(label_);
    }
    if(locationIdIsSet_) {
        val[utility::conversions::to_string_t("locationId")] = ModelBase::toJson(locationId_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("pageNum")] = ModelBase::toJson(pageNum_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("pageSize")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ListSubTaskCaseOverstockUsingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executorType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executorType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locationId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locationId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pageNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pageNum"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pageSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pageSize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    return ok;
}


std::string ListSubTaskCaseOverstockUsingRequest::getServiceId() const
{
    return serviceId_;
}

void ListSubTaskCaseOverstockUsingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListSubTaskCaseOverstockUsingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

int64_t ListSubTaskCaseOverstockUsingRequest::getStartTime() const
{
    return startTime_;
}

void ListSubTaskCaseOverstockUsingRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListSubTaskCaseOverstockUsingRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListSubTaskCaseOverstockUsingRequest::getEndTime() const
{
    return endTime_;
}

void ListSubTaskCaseOverstockUsingRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListSubTaskCaseOverstockUsingRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListSubTaskCaseOverstockUsingRequest::getExecutorType() const
{
    return executorType_;
}

void ListSubTaskCaseOverstockUsingRequest::setExecutorType(const std::string& value)
{
    executorType_ = value;
    executorTypeIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingRequest::executorTypeIsSet() const
{
    return executorTypeIsSet_;
}

void ListSubTaskCaseOverstockUsingRequest::unsetexecutorType()
{
    executorTypeIsSet_ = false;
}

std::string ListSubTaskCaseOverstockUsingRequest::getLabel() const
{
    return label_;
}

void ListSubTaskCaseOverstockUsingRequest::setLabel(const std::string& value)
{
    label_ = value;
    labelIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingRequest::labelIsSet() const
{
    return labelIsSet_;
}

void ListSubTaskCaseOverstockUsingRequest::unsetlabel()
{
    labelIsSet_ = false;
}

std::string ListSubTaskCaseOverstockUsingRequest::getLocationId() const
{
    return locationId_;
}

void ListSubTaskCaseOverstockUsingRequest::setLocationId(const std::string& value)
{
    locationId_ = value;
    locationIdIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingRequest::locationIdIsSet() const
{
    return locationIdIsSet_;
}

void ListSubTaskCaseOverstockUsingRequest::unsetlocationId()
{
    locationIdIsSet_ = false;
}

int32_t ListSubTaskCaseOverstockUsingRequest::getPageNum() const
{
    return pageNum_;
}

void ListSubTaskCaseOverstockUsingRequest::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingRequest::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ListSubTaskCaseOverstockUsingRequest::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int32_t ListSubTaskCaseOverstockUsingRequest::getPageSize() const
{
    return pageSize_;
}

void ListSubTaskCaseOverstockUsingRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListSubTaskCaseOverstockUsingRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


