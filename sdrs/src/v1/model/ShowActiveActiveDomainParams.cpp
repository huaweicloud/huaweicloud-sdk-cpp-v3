

#include "huaweicloud/sdrs/v1/model/ShowActiveActiveDomainParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowActiveActiveDomainParams::ShowActiveActiveDomainParams()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    soldOut_ = false;
    soldOutIsSet_ = false;
    localReplicationClusterIsSet_ = false;
    remoteReplicationClusterIsSet_ = false;
}

ShowActiveActiveDomainParams::~ShowActiveActiveDomainParams() = default;

void ShowActiveActiveDomainParams::validate()
{
}

web::json::value ShowActiveActiveDomainParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(soldOutIsSet_) {
        val[utility::conversions::to_string_t("sold_out")] = ModelBase::toJson(soldOut_);
    }
    if(localReplicationClusterIsSet_) {
        val[utility::conversions::to_string_t("local_replication_cluster")] = ModelBase::toJson(localReplicationCluster_);
    }
    if(remoteReplicationClusterIsSet_) {
        val[utility::conversions::to_string_t("remote_replication_cluster")] = ModelBase::toJson(remoteReplicationCluster_);
    }

    return val;
}

bool ShowActiveActiveDomainParams::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sold_out"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sold_out"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSoldOut(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("local_replication_cluster"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("local_replication_cluster"));
        if(!fieldValue.is_null())
        {
            ReplicationClusterParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalReplicationCluster(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_replication_cluster"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_replication_cluster"));
        if(!fieldValue.is_null())
        {
            ReplicationClusterParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteReplicationCluster(refVal);
        }
    }
    return ok;
}


std::string ShowActiveActiveDomainParams::getId() const
{
    return id_;
}

void ShowActiveActiveDomainParams::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowActiveActiveDomainParams::idIsSet() const
{
    return idIsSet_;
}

void ShowActiveActiveDomainParams::unsetid()
{
    idIsSet_ = false;
}

std::string ShowActiveActiveDomainParams::getName() const
{
    return name_;
}

void ShowActiveActiveDomainParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowActiveActiveDomainParams::nameIsSet() const
{
    return nameIsSet_;
}

void ShowActiveActiveDomainParams::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowActiveActiveDomainParams::getDescription() const
{
    return description_;
}

void ShowActiveActiveDomainParams::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowActiveActiveDomainParams::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowActiveActiveDomainParams::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool ShowActiveActiveDomainParams::isSoldOut() const
{
    return soldOut_;
}

void ShowActiveActiveDomainParams::setSoldOut(bool value)
{
    soldOut_ = value;
    soldOutIsSet_ = true;
}

bool ShowActiveActiveDomainParams::soldOutIsSet() const
{
    return soldOutIsSet_;
}

void ShowActiveActiveDomainParams::unsetsoldOut()
{
    soldOutIsSet_ = false;
}

ReplicationClusterParams ShowActiveActiveDomainParams::getLocalReplicationCluster() const
{
    return localReplicationCluster_;
}

void ShowActiveActiveDomainParams::setLocalReplicationCluster(const ReplicationClusterParams& value)
{
    localReplicationCluster_ = value;
    localReplicationClusterIsSet_ = true;
}

bool ShowActiveActiveDomainParams::localReplicationClusterIsSet() const
{
    return localReplicationClusterIsSet_;
}

void ShowActiveActiveDomainParams::unsetlocalReplicationCluster()
{
    localReplicationClusterIsSet_ = false;
}

ReplicationClusterParams ShowActiveActiveDomainParams::getRemoteReplicationCluster() const
{
    return remoteReplicationCluster_;
}

void ShowActiveActiveDomainParams::setRemoteReplicationCluster(const ReplicationClusterParams& value)
{
    remoteReplicationCluster_ = value;
    remoteReplicationClusterIsSet_ = true;
}

bool ShowActiveActiveDomainParams::remoteReplicationClusterIsSet() const
{
    return remoteReplicationClusterIsSet_;
}

void ShowActiveActiveDomainParams::unsetremoteReplicationCluster()
{
    remoteReplicationClusterIsSet_ = false;
}

}
}
}
}
}


