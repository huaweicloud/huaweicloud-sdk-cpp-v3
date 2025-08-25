

#include "huaweicloud/cce/v3/model/CreateCloudPersistentVolumeClaimsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateCloudPersistentVolumeClaimsRequest::CreateCloudPersistentVolumeClaimsRequest()
{
    namespace_ = "";
    namespaceIsSet_ = false;
    xClusterID_ = "";
    xClusterIDIsSet_ = false;
    bodyIsSet_ = false;
}

CreateCloudPersistentVolumeClaimsRequest::~CreateCloudPersistentVolumeClaimsRequest() = default;

void CreateCloudPersistentVolumeClaimsRequest::validate()
{
}

web::json::value CreateCloudPersistentVolumeClaimsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(xClusterIDIsSet_) {
        val[utility::conversions::to_string_t("X-Cluster-ID")] = ModelBase::toJson(xClusterID_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateCloudPersistentVolumeClaimsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Cluster-ID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Cluster-ID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXClusterID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PersistentVolumeClaim refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateCloudPersistentVolumeClaimsRequest::getNamespace() const
{
    return namespace_;
}

void CreateCloudPersistentVolumeClaimsRequest::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool CreateCloudPersistentVolumeClaimsRequest::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void CreateCloudPersistentVolumeClaimsRequest::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string CreateCloudPersistentVolumeClaimsRequest::getXClusterID() const
{
    return xClusterID_;
}

void CreateCloudPersistentVolumeClaimsRequest::setXClusterID(const std::string& value)
{
    xClusterID_ = value;
    xClusterIDIsSet_ = true;
}

bool CreateCloudPersistentVolumeClaimsRequest::xClusterIDIsSet() const
{
    return xClusterIDIsSet_;
}

void CreateCloudPersistentVolumeClaimsRequest::unsetxClusterID()
{
    xClusterIDIsSet_ = false;
}

PersistentVolumeClaim CreateCloudPersistentVolumeClaimsRequest::getBody() const
{
    return body_;
}

void CreateCloudPersistentVolumeClaimsRequest::setBody(const PersistentVolumeClaim& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCloudPersistentVolumeClaimsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCloudPersistentVolumeClaimsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


