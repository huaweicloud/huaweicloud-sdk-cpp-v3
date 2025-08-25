

#include "huaweicloud/cce/v3/model/UpdateAutopilotReleaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateAutopilotReleaseRequest::UpdateAutopilotReleaseRequest()
{
    name_ = "";
    nameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAutopilotReleaseRequest::~UpdateAutopilotReleaseRequest() = default;

void UpdateAutopilotReleaseRequest::validate()
{
}

web::json::value UpdateAutopilotReleaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAutopilotReleaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateReleaseReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAutopilotReleaseRequest::getName() const
{
    return name_;
}

void UpdateAutopilotReleaseRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateAutopilotReleaseRequest::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateAutopilotReleaseRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateAutopilotReleaseRequest::getNamespace() const
{
    return namespace_;
}

void UpdateAutopilotReleaseRequest::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool UpdateAutopilotReleaseRequest::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void UpdateAutopilotReleaseRequest::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string UpdateAutopilotReleaseRequest::getClusterId() const
{
    return clusterId_;
}

void UpdateAutopilotReleaseRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateAutopilotReleaseRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateAutopilotReleaseRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

UpdateReleaseReqBody UpdateAutopilotReleaseRequest::getBody() const
{
    return body_;
}

void UpdateAutopilotReleaseRequest::setBody(const UpdateReleaseReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAutopilotReleaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAutopilotReleaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


