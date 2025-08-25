

#include "huaweicloud/cce/v3/model/DeleteReleaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteReleaseRequest::DeleteReleaseRequest()
{
    name_ = "";
    nameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

DeleteReleaseRequest::~DeleteReleaseRequest() = default;

void DeleteReleaseRequest::validate()
{
}

web::json::value DeleteReleaseRequest::toJson() const
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
bool DeleteReleaseRequest::fromJson(const web::json::value& val)
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


std::string DeleteReleaseRequest::getName() const
{
    return name_;
}

void DeleteReleaseRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeleteReleaseRequest::nameIsSet() const
{
    return nameIsSet_;
}

void DeleteReleaseRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string DeleteReleaseRequest::getNamespace() const
{
    return namespace_;
}

void DeleteReleaseRequest::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool DeleteReleaseRequest::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void DeleteReleaseRequest::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string DeleteReleaseRequest::getClusterId() const
{
    return clusterId_;
}

void DeleteReleaseRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DeleteReleaseRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DeleteReleaseRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


