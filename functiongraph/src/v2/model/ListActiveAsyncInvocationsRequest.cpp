

#include "huaweicloud/functiongraph/v2/model/ListActiveAsyncInvocationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListActiveAsyncInvocationsRequest::ListActiveAsyncInvocationsRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    requests_ = "";
    requestsIsSet_ = false;
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

ListActiveAsyncInvocationsRequest::~ListActiveAsyncInvocationsRequest() = default;

void ListActiveAsyncInvocationsRequest::validate()
{
}

web::json::value ListActiveAsyncInvocationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(requestsIsSet_) {
        val[utility::conversions::to_string_t("requests")] = ModelBase::toJson(requests_);
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
bool ListActiveAsyncInvocationsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("requests"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("requests"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequests(refVal);
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


std::string ListActiveAsyncInvocationsRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ListActiveAsyncInvocationsRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ListActiveAsyncInvocationsRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ListActiveAsyncInvocationsRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ListActiveAsyncInvocationsRequest::getRequests() const
{
    return requests_;
}

void ListActiveAsyncInvocationsRequest::setRequests(const std::string& value)
{
    requests_ = value;
    requestsIsSet_ = true;
}

bool ListActiveAsyncInvocationsRequest::requestsIsSet() const
{
    return requestsIsSet_;
}

void ListActiveAsyncInvocationsRequest::unsetrequests()
{
    requestsIsSet_ = false;
}

std::string ListActiveAsyncInvocationsRequest::getMarker() const
{
    return marker_;
}

void ListActiveAsyncInvocationsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListActiveAsyncInvocationsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListActiveAsyncInvocationsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListActiveAsyncInvocationsRequest::getLimit() const
{
    return limit_;
}

void ListActiveAsyncInvocationsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListActiveAsyncInvocationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListActiveAsyncInvocationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListActiveAsyncInvocationsRequest::getStatus() const
{
    return status_;
}

void ListActiveAsyncInvocationsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListActiveAsyncInvocationsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListActiveAsyncInvocationsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime ListActiveAsyncInvocationsRequest::getQueryBeginTime() const
{
    return queryBeginTime_;
}

void ListActiveAsyncInvocationsRequest::setQueryBeginTime(const utility::datetime& value)
{
    queryBeginTime_ = value;
    queryBeginTimeIsSet_ = true;
}

bool ListActiveAsyncInvocationsRequest::queryBeginTimeIsSet() const
{
    return queryBeginTimeIsSet_;
}

void ListActiveAsyncInvocationsRequest::unsetqueryBeginTime()
{
    queryBeginTimeIsSet_ = false;
}

utility::datetime ListActiveAsyncInvocationsRequest::getQueryEndTime() const
{
    return queryEndTime_;
}

void ListActiveAsyncInvocationsRequest::setQueryEndTime(const utility::datetime& value)
{
    queryEndTime_ = value;
    queryEndTimeIsSet_ = true;
}

bool ListActiveAsyncInvocationsRequest::queryEndTimeIsSet() const
{
    return queryEndTimeIsSet_;
}

void ListActiveAsyncInvocationsRequest::unsetqueryEndTime()
{
    queryEndTimeIsSet_ = false;
}

std::string ListActiveAsyncInvocationsRequest::getContentType() const
{
    return contentType_;
}

void ListActiveAsyncInvocationsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListActiveAsyncInvocationsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListActiveAsyncInvocationsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


