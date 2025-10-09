

#include "huaweicloud/cce/v3/model/ShowReleaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowReleaseRequest::ShowReleaseRequest()
{
    name_ = "";
    nameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    showResources_ = "";
    showResourcesIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ShowReleaseRequest::~ShowReleaseRequest() = default;

void ShowReleaseRequest::validate()
{
}

web::json::value ShowReleaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(showResourcesIsSet_) {
        val[utility::conversions::to_string_t("show_resources")] = ModelBase::toJson(showResources_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ShowReleaseRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("show_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show_resources"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowResources(refVal);
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
    return ok;
}


std::string ShowReleaseRequest::getName() const
{
    return name_;
}

void ShowReleaseRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowReleaseRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ShowReleaseRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowReleaseRequest::getNamespace() const
{
    return namespace_;
}

void ShowReleaseRequest::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ShowReleaseRequest::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ShowReleaseRequest::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ShowReleaseRequest::getShowResources() const
{
    return showResources_;
}

void ShowReleaseRequest::setShowResources(const std::string& value)
{
    showResources_ = value;
    showResourcesIsSet_ = true;
}

bool ShowReleaseRequest::showResourcesIsSet() const
{
    return showResourcesIsSet_;
}

void ShowReleaseRequest::unsetshowResources()
{
    showResourcesIsSet_ = false;
}

std::string ShowReleaseRequest::getClusterId() const
{
    return clusterId_;
}

void ShowReleaseRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowReleaseRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowReleaseRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


