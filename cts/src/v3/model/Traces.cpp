

#include "huaweicloud/cts/v3/model/Traces.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




Traces::Traces()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    traceName_ = "";
    traceNameIsSet_ = false;
    traceRating_ = "";
    traceRatingIsSet_ = false;
    traceType_ = "";
    traceTypeIsSet_ = false;
    request_ = "";
    requestIsSet_ = false;
    response_ = "";
    responseIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    recordTime_ = 0L;
    recordTimeIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    time_ = 0L;
    timeIsSet_ = false;
    userIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    sourceIp_ = "";
    sourceIpIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    locationInfo_ = "";
    locationInfoIsSet_ = false;
    endpoint_ = "";
    endpointIsSet_ = false;
    resourceUrl_ = "";
    resourceUrlIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    resourceAccountId_ = "";
    resourceAccountIdIsSet_ = false;
    readOnly_ = false;
    readOnlyIsSet_ = false;
    operationId_ = "";
    operationIdIsSet_ = false;
}

Traces::~Traces() = default;

void Traces::validate()
{
}

web::json::value Traces::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(traceNameIsSet_) {
        val[utility::conversions::to_string_t("trace_name")] = ModelBase::toJson(traceName_);
    }
    if(traceRatingIsSet_) {
        val[utility::conversions::to_string_t("trace_rating")] = ModelBase::toJson(traceRating_);
    }
    if(traceTypeIsSet_) {
        val[utility::conversions::to_string_t("trace_type")] = ModelBase::toJson(traceType_);
    }
    if(requestIsSet_) {
        val[utility::conversions::to_string_t("request")] = ModelBase::toJson(request_);
    }
    if(responseIsSet_) {
        val[utility::conversions::to_string_t("response")] = ModelBase::toJson(response_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("api_version")] = ModelBase::toJson(apiVersion_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(recordTimeIsSet_) {
        val[utility::conversions::to_string_t("record_time")] = ModelBase::toJson(recordTime_);
    }
    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(sourceIpIsSet_) {
        val[utility::conversions::to_string_t("source_ip")] = ModelBase::toJson(sourceIp_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(locationInfoIsSet_) {
        val[utility::conversions::to_string_t("location_info")] = ModelBase::toJson(locationInfo_);
    }
    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(resourceUrlIsSet_) {
        val[utility::conversions::to_string_t("resource_url")] = ModelBase::toJson(resourceUrl_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(resourceAccountIdIsSet_) {
        val[utility::conversions::to_string_t("resource_account_id")] = ModelBase::toJson(resourceAccountId_);
    }
    if(readOnlyIsSet_) {
        val[utility::conversions::to_string_t("read_only")] = ModelBase::toJson(readOnly_);
    }
    if(operationIdIsSet_) {
        val[utility::conversions::to_string_t("operation_id")] = ModelBase::toJson(operationId_);
    }

    return val;
}
bool Traces::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trace_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trace_rating"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_rating"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceRating(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trace_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequest(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponse(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("api_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            UserInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("location_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocationInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_only"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationId(refVal);
        }
    }
    return ok;
}


std::string Traces::getResourceId() const
{
    return resourceId_;
}

void Traces::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool Traces::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void Traces::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string Traces::getTraceName() const
{
    return traceName_;
}

void Traces::setTraceName(const std::string& value)
{
    traceName_ = value;
    traceNameIsSet_ = true;
}

bool Traces::traceNameIsSet() const
{
    return traceNameIsSet_;
}

void Traces::unsettraceName()
{
    traceNameIsSet_ = false;
}

std::string Traces::getTraceRating() const
{
    return traceRating_;
}

void Traces::setTraceRating(const std::string& value)
{
    traceRating_ = value;
    traceRatingIsSet_ = true;
}

bool Traces::traceRatingIsSet() const
{
    return traceRatingIsSet_;
}

void Traces::unsettraceRating()
{
    traceRatingIsSet_ = false;
}

std::string Traces::getTraceType() const
{
    return traceType_;
}

void Traces::setTraceType(const std::string& value)
{
    traceType_ = value;
    traceTypeIsSet_ = true;
}

bool Traces::traceTypeIsSet() const
{
    return traceTypeIsSet_;
}

void Traces::unsettraceType()
{
    traceTypeIsSet_ = false;
}

std::string Traces::getRequest() const
{
    return request_;
}

void Traces::setRequest(const std::string& value)
{
    request_ = value;
    requestIsSet_ = true;
}

bool Traces::requestIsSet() const
{
    return requestIsSet_;
}

void Traces::unsetrequest()
{
    requestIsSet_ = false;
}

std::string Traces::getResponse() const
{
    return response_;
}

void Traces::setResponse(const std::string& value)
{
    response_ = value;
    responseIsSet_ = true;
}

bool Traces::responseIsSet() const
{
    return responseIsSet_;
}

void Traces::unsetresponse()
{
    responseIsSet_ = false;
}

std::string Traces::getCode() const
{
    return code_;
}

void Traces::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool Traces::codeIsSet() const
{
    return codeIsSet_;
}

void Traces::unsetcode()
{
    codeIsSet_ = false;
}

std::string Traces::getApiVersion() const
{
    return apiVersion_;
}

void Traces::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool Traces::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void Traces::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string Traces::getMessage() const
{
    return message_;
}

void Traces::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool Traces::messageIsSet() const
{
    return messageIsSet_;
}

void Traces::unsetmessage()
{
    messageIsSet_ = false;
}

int64_t Traces::getRecordTime() const
{
    return recordTime_;
}

void Traces::setRecordTime(int64_t value)
{
    recordTime_ = value;
    recordTimeIsSet_ = true;
}

bool Traces::recordTimeIsSet() const
{
    return recordTimeIsSet_;
}

void Traces::unsetrecordTime()
{
    recordTimeIsSet_ = false;
}

std::string Traces::getTraceId() const
{
    return traceId_;
}

void Traces::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool Traces::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void Traces::unsettraceId()
{
    traceIdIsSet_ = false;
}

int64_t Traces::getTime() const
{
    return time_;
}

void Traces::setTime(int64_t value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool Traces::timeIsSet() const
{
    return timeIsSet_;
}

void Traces::unsettime()
{
    timeIsSet_ = false;
}

UserInfo Traces::getUser() const
{
    return user_;
}

void Traces::setUser(const UserInfo& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool Traces::userIsSet() const
{
    return userIsSet_;
}

void Traces::unsetuser()
{
    userIsSet_ = false;
}

std::string Traces::getServiceType() const
{
    return serviceType_;
}

void Traces::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool Traces::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void Traces::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string Traces::getResourceType() const
{
    return resourceType_;
}

void Traces::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool Traces::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void Traces::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string Traces::getSourceIp() const
{
    return sourceIp_;
}

void Traces::setSourceIp(const std::string& value)
{
    sourceIp_ = value;
    sourceIpIsSet_ = true;
}

bool Traces::sourceIpIsSet() const
{
    return sourceIpIsSet_;
}

void Traces::unsetsourceIp()
{
    sourceIpIsSet_ = false;
}

std::string Traces::getResourceName() const
{
    return resourceName_;
}

void Traces::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool Traces::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void Traces::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string Traces::getRequestId() const
{
    return requestId_;
}

void Traces::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool Traces::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void Traces::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string Traces::getLocationInfo() const
{
    return locationInfo_;
}

void Traces::setLocationInfo(const std::string& value)
{
    locationInfo_ = value;
    locationInfoIsSet_ = true;
}

bool Traces::locationInfoIsSet() const
{
    return locationInfoIsSet_;
}

void Traces::unsetlocationInfo()
{
    locationInfoIsSet_ = false;
}

std::string Traces::getEndpoint() const
{
    return endpoint_;
}

void Traces::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool Traces::endpointIsSet() const
{
    return endpointIsSet_;
}

void Traces::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string Traces::getResourceUrl() const
{
    return resourceUrl_;
}

void Traces::setResourceUrl(const std::string& value)
{
    resourceUrl_ = value;
    resourceUrlIsSet_ = true;
}

bool Traces::resourceUrlIsSet() const
{
    return resourceUrlIsSet_;
}

void Traces::unsetresourceUrl()
{
    resourceUrlIsSet_ = false;
}

std::string Traces::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void Traces::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool Traces::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void Traces::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string Traces::getResourceAccountId() const
{
    return resourceAccountId_;
}

void Traces::setResourceAccountId(const std::string& value)
{
    resourceAccountId_ = value;
    resourceAccountIdIsSet_ = true;
}

bool Traces::resourceAccountIdIsSet() const
{
    return resourceAccountIdIsSet_;
}

void Traces::unsetresourceAccountId()
{
    resourceAccountIdIsSet_ = false;
}

bool Traces::isReadOnly() const
{
    return readOnly_;
}

void Traces::setReadOnly(bool value)
{
    readOnly_ = value;
    readOnlyIsSet_ = true;
}

bool Traces::readOnlyIsSet() const
{
    return readOnlyIsSet_;
}

void Traces::unsetreadOnly()
{
    readOnlyIsSet_ = false;
}

std::string Traces::getOperationId() const
{
    return operationId_;
}

void Traces::setOperationId(const std::string& value)
{
    operationId_ = value;
    operationIdIsSet_ = true;
}

bool Traces::operationIdIsSet() const
{
    return operationIdIsSet_;
}

void Traces::unsetoperationId()
{
    operationIdIsSet_ = false;
}

}
}
}
}
}


