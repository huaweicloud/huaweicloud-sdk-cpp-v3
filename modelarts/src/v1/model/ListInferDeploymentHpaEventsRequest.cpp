

#include "huaweicloud/modelarts/v1/model/ListInferDeploymentHpaEventsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferDeploymentHpaEventsRequest::ListInferDeploymentHpaEventsRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    deploymentId_ = "";
    deploymentIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListInferDeploymentHpaEventsRequest::~ListInferDeploymentHpaEventsRequest() = default;

void ListInferDeploymentHpaEventsRequest::validate()
{
}

web::json::value ListInferDeploymentHpaEventsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(deploymentIdIsSet_) {
        val[utility::conversions::to_string_t("deployment_id")] = ModelBase::toJson(deploymentId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListInferDeploymentHpaEventsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("deployment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deployment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploymentId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
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


std::string ListInferDeploymentHpaEventsRequest::getServiceId() const
{
    return serviceId_;
}

void ListInferDeploymentHpaEventsRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListInferDeploymentHpaEventsRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListInferDeploymentHpaEventsRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ListInferDeploymentHpaEventsRequest::getDeploymentId() const
{
    return deploymentId_;
}

void ListInferDeploymentHpaEventsRequest::setDeploymentId(const std::string& value)
{
    deploymentId_ = value;
    deploymentIdIsSet_ = true;
}

bool ListInferDeploymentHpaEventsRequest::deploymentIdIsSet() const
{
    return deploymentIdIsSet_;
}

void ListInferDeploymentHpaEventsRequest::unsetdeploymentId()
{
    deploymentIdIsSet_ = false;
}

int32_t ListInferDeploymentHpaEventsRequest::getLimit() const
{
    return limit_;
}

void ListInferDeploymentHpaEventsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInferDeploymentHpaEventsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInferDeploymentHpaEventsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInferDeploymentHpaEventsRequest::getOffset() const
{
    return offset_;
}

void ListInferDeploymentHpaEventsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInferDeploymentHpaEventsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInferDeploymentHpaEventsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListInferDeploymentHpaEventsRequest::getSortKey() const
{
    return sortKey_;
}

void ListInferDeploymentHpaEventsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListInferDeploymentHpaEventsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListInferDeploymentHpaEventsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListInferDeploymentHpaEventsRequest::getSortDir() const
{
    return sortDir_;
}

void ListInferDeploymentHpaEventsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListInferDeploymentHpaEventsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListInferDeploymentHpaEventsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListInferDeploymentHpaEventsRequest::getContentType() const
{
    return contentType_;
}

void ListInferDeploymentHpaEventsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListInferDeploymentHpaEventsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListInferDeploymentHpaEventsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


