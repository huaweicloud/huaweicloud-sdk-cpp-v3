

#include "huaweicloud/functiongraph/v2/model/ListAsyncInvocationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListAsyncInvocationsRequest::ListAsyncInvocationsRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    queryBeginTime_ = utility::datetime();
    queryBeginTimeIsSet_ = false;
    queryEndTime_ = utility::datetime();
    queryEndTimeIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListAsyncInvocationsRequest::~ListAsyncInvocationsRequest() = default;

void ListAsyncInvocationsRequest::validate()
{
}

web::json::value ListAsyncInvocationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(queryBeginTimeIsSet_) {
        val[utility::conversions::to_string_t("query_begin_time")] = ModelBase::toJson(queryBeginTime_);
    }
    if(queryEndTimeIsSet_) {
        val[utility::conversions::to_string_t("query_end_time")] = ModelBase::toJson(queryEndTime_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListAsyncInvocationsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("function_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionUrn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_begin_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ListAsyncInvocationsRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ListAsyncInvocationsRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ListAsyncInvocationsRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ListAsyncInvocationsRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ListAsyncInvocationsRequest::getRequestId() const
{
    return requestId_;
}

void ListAsyncInvocationsRequest::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListAsyncInvocationsRequest::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListAsyncInvocationsRequest::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListAsyncInvocationsRequest::getMarker() const
{
    return marker_;
}

void ListAsyncInvocationsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAsyncInvocationsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAsyncInvocationsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListAsyncInvocationsRequest::getLimit() const
{
    return limit_;
}

void ListAsyncInvocationsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAsyncInvocationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAsyncInvocationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAsyncInvocationsRequest::getStatus() const
{
    return status_;
}

void ListAsyncInvocationsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAsyncInvocationsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAsyncInvocationsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime ListAsyncInvocationsRequest::getQueryBeginTime() const
{
    return queryBeginTime_;
}

void ListAsyncInvocationsRequest::setQueryBeginTime(const utility::datetime& value)
{
    queryBeginTime_ = value;
    queryBeginTimeIsSet_ = true;
}

bool ListAsyncInvocationsRequest::queryBeginTimeIsSet() const
{
    return queryBeginTimeIsSet_;
}

void ListAsyncInvocationsRequest::unsetqueryBeginTime()
{
    queryBeginTimeIsSet_ = false;
}

utility::datetime ListAsyncInvocationsRequest::getQueryEndTime() const
{
    return queryEndTime_;
}

void ListAsyncInvocationsRequest::setQueryEndTime(const utility::datetime& value)
{
    queryEndTime_ = value;
    queryEndTimeIsSet_ = true;
}

bool ListAsyncInvocationsRequest::queryEndTimeIsSet() const
{
    return queryEndTimeIsSet_;
}

void ListAsyncInvocationsRequest::unsetqueryEndTime()
{
    queryEndTimeIsSet_ = false;
}

std::string ListAsyncInvocationsRequest::getContentType() const
{
    return contentType_;
}

void ListAsyncInvocationsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListAsyncInvocationsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListAsyncInvocationsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


