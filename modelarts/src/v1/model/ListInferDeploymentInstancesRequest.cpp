

#include "huaweicloud/modelarts/v1/model/ListInferDeploymentInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferDeploymentInstancesRequest::ListInferDeploymentInstancesRequest()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    statusIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    podName_ = "";
    podNameIsSet_ = false;
}

ListInferDeploymentInstancesRequest::~ListInferDeploymentInstancesRequest() = default;

void ListInferDeploymentInstancesRequest::validate()
{
}

web::json::value ListInferDeploymentInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(podNameIsSet_) {
        val[utility::conversions::to_string_t("pod_name")] = ModelBase::toJson(podName_);
    }

    return val;
}
bool ListInferDeploymentInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pod_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pod_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPodName(refVal);
        }
    }
    return ok;
}


std::string ListInferDeploymentInstancesRequest::getId() const
{
    return id_;
}

void ListInferDeploymentInstancesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInferDeploymentInstancesRequest::idIsSet() const
{
    return idIsSet_;
}

void ListInferDeploymentInstancesRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListInferDeploymentInstancesRequest::getName() const
{
    return name_;
}

void ListInferDeploymentInstancesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInferDeploymentInstancesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListInferDeploymentInstancesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& ListInferDeploymentInstancesRequest::getStatus()
{
    return status_;
}

void ListInferDeploymentInstancesRequest::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListInferDeploymentInstancesRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListInferDeploymentInstancesRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListInferDeploymentInstancesRequest::getLimit() const
{
    return limit_;
}

void ListInferDeploymentInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInferDeploymentInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInferDeploymentInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInferDeploymentInstancesRequest::getOffset() const
{
    return offset_;
}

void ListInferDeploymentInstancesRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInferDeploymentInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInferDeploymentInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListInferDeploymentInstancesRequest::getPodName() const
{
    return podName_;
}

void ListInferDeploymentInstancesRequest::setPodName(const std::string& value)
{
    podName_ = value;
    podNameIsSet_ = true;
}

bool ListInferDeploymentInstancesRequest::podNameIsSet() const
{
    return podNameIsSet_;
}

void ListInferDeploymentInstancesRequest::unsetpodName()
{
    podNameIsSet_ = false;
}

}
}
}
}
}


