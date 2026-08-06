

#include "huaweicloud/modelarts/v1/model/ListInferDeploymentVersionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferDeploymentVersionsRequest::ListInferDeploymentVersionsRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    deploymentId_ = "";
    deploymentIdIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListInferDeploymentVersionsRequest::~ListInferDeploymentVersionsRequest() = default;

void ListInferDeploymentVersionsRequest::validate()
{
}

web::json::value ListInferDeploymentVersionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(deploymentIdIsSet_) {
        val[utility::conversions::to_string_t("deployment_id")] = ModelBase::toJson(deploymentId_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListInferDeploymentVersionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
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
    return ok;
}


std::string ListInferDeploymentVersionsRequest::getServiceId() const
{
    return serviceId_;
}

void ListInferDeploymentVersionsRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListInferDeploymentVersionsRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListInferDeploymentVersionsRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ListInferDeploymentVersionsRequest::getDeploymentId() const
{
    return deploymentId_;
}

void ListInferDeploymentVersionsRequest::setDeploymentId(const std::string& value)
{
    deploymentId_ = value;
    deploymentIdIsSet_ = true;
}

bool ListInferDeploymentVersionsRequest::deploymentIdIsSet() const
{
    return deploymentIdIsSet_;
}

void ListInferDeploymentVersionsRequest::unsetdeploymentId()
{
    deploymentIdIsSet_ = false;
}

std::string ListInferDeploymentVersionsRequest::getSortKey() const
{
    return sortKey_;
}

void ListInferDeploymentVersionsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListInferDeploymentVersionsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListInferDeploymentVersionsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

int32_t ListInferDeploymentVersionsRequest::getLimit() const
{
    return limit_;
}

void ListInferDeploymentVersionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInferDeploymentVersionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInferDeploymentVersionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInferDeploymentVersionsRequest::getOffset() const
{
    return offset_;
}

void ListInferDeploymentVersionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInferDeploymentVersionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInferDeploymentVersionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


