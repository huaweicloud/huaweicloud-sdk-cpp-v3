

#include "huaweicloud/cce/v3/model/UpdateReleaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateReleaseRequest::UpdateReleaseRequest()
{
    name_ = "";
    nameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateReleaseRequest::~UpdateReleaseRequest() = default;

void UpdateReleaseRequest::validate()
{
}

web::json::value UpdateReleaseRequest::toJson() const
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
bool UpdateReleaseRequest::fromJson(const web::json::value& val)
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


std::string UpdateReleaseRequest::getName() const
{
    return name_;
}

void UpdateReleaseRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateReleaseRequest::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateReleaseRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateReleaseRequest::getNamespace() const
{
    return namespace_;
}

void UpdateReleaseRequest::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool UpdateReleaseRequest::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void UpdateReleaseRequest::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string UpdateReleaseRequest::getClusterId() const
{
    return clusterId_;
}

void UpdateReleaseRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateReleaseRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateReleaseRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

UpdateReleaseReqBody UpdateReleaseRequest::getBody() const
{
    return body_;
}

void UpdateReleaseRequest::setBody(const UpdateReleaseReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateReleaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateReleaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


