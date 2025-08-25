

#include "huaweicloud/cce/v3/model/ShowReleaseHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowReleaseHistoryRequest::ShowReleaseHistoryRequest()
{
    name_ = "";
    nameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ShowReleaseHistoryRequest::~ShowReleaseHistoryRequest() = default;

void ShowReleaseHistoryRequest::validate()
{
}

web::json::value ShowReleaseHistoryRequest::toJson() const
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

    return val;
}
bool ShowReleaseHistoryRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowReleaseHistoryRequest::getName() const
{
    return name_;
}

void ShowReleaseHistoryRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowReleaseHistoryRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ShowReleaseHistoryRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowReleaseHistoryRequest::getNamespace() const
{
    return namespace_;
}

void ShowReleaseHistoryRequest::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ShowReleaseHistoryRequest::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ShowReleaseHistoryRequest::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ShowReleaseHistoryRequest::getClusterId() const
{
    return clusterId_;
}

void ShowReleaseHistoryRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowReleaseHistoryRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowReleaseHistoryRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


