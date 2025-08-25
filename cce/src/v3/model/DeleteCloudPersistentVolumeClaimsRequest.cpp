

#include "huaweicloud/cce/v3/model/DeleteCloudPersistentVolumeClaimsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteCloudPersistentVolumeClaimsRequest::DeleteCloudPersistentVolumeClaimsRequest()
{
    name_ = "";
    nameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    deleteVolume_ = "";
    deleteVolumeIsSet_ = false;
    storageType_ = "";
    storageTypeIsSet_ = false;
    xClusterID_ = "";
    xClusterIDIsSet_ = false;
}

DeleteCloudPersistentVolumeClaimsRequest::~DeleteCloudPersistentVolumeClaimsRequest() = default;

void DeleteCloudPersistentVolumeClaimsRequest::validate()
{
}

web::json::value DeleteCloudPersistentVolumeClaimsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(deleteVolumeIsSet_) {
        val[utility::conversions::to_string_t("deleteVolume")] = ModelBase::toJson(deleteVolume_);
    }
    if(storageTypeIsSet_) {
        val[utility::conversions::to_string_t("storageType")] = ModelBase::toJson(storageType_);
    }
    if(xClusterIDIsSet_) {
        val[utility::conversions::to_string_t("X-Cluster-ID")] = ModelBase::toJson(xClusterID_);
    }

    return val;
}
bool DeleteCloudPersistentVolumeClaimsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("deleteVolume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleteVolume"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storageType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storageType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageType(refVal);
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
    return ok;
}


std::string DeleteCloudPersistentVolumeClaimsRequest::getName() const
{
    return name_;
}

void DeleteCloudPersistentVolumeClaimsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeleteCloudPersistentVolumeClaimsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void DeleteCloudPersistentVolumeClaimsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string DeleteCloudPersistentVolumeClaimsRequest::getNamespace() const
{
    return namespace_;
}

void DeleteCloudPersistentVolumeClaimsRequest::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool DeleteCloudPersistentVolumeClaimsRequest::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void DeleteCloudPersistentVolumeClaimsRequest::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string DeleteCloudPersistentVolumeClaimsRequest::getDeleteVolume() const
{
    return deleteVolume_;
}

void DeleteCloudPersistentVolumeClaimsRequest::setDeleteVolume(const std::string& value)
{
    deleteVolume_ = value;
    deleteVolumeIsSet_ = true;
}

bool DeleteCloudPersistentVolumeClaimsRequest::deleteVolumeIsSet() const
{
    return deleteVolumeIsSet_;
}

void DeleteCloudPersistentVolumeClaimsRequest::unsetdeleteVolume()
{
    deleteVolumeIsSet_ = false;
}

std::string DeleteCloudPersistentVolumeClaimsRequest::getStorageType() const
{
    return storageType_;
}

void DeleteCloudPersistentVolumeClaimsRequest::setStorageType(const std::string& value)
{
    storageType_ = value;
    storageTypeIsSet_ = true;
}

bool DeleteCloudPersistentVolumeClaimsRequest::storageTypeIsSet() const
{
    return storageTypeIsSet_;
}

void DeleteCloudPersistentVolumeClaimsRequest::unsetstorageType()
{
    storageTypeIsSet_ = false;
}

std::string DeleteCloudPersistentVolumeClaimsRequest::getXClusterID() const
{
    return xClusterID_;
}

void DeleteCloudPersistentVolumeClaimsRequest::setXClusterID(const std::string& value)
{
    xClusterID_ = value;
    xClusterIDIsSet_ = true;
}

bool DeleteCloudPersistentVolumeClaimsRequest::xClusterIDIsSet() const
{
    return xClusterIDIsSet_;
}

void DeleteCloudPersistentVolumeClaimsRequest::unsetxClusterID()
{
    xClusterIDIsSet_ = false;
}

}
}
}
}
}


