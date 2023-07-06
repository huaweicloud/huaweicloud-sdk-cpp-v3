

#include "huaweicloud/sdrs/v1/model/SubJobEntities.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




SubJobEntities::SubJobEntities()
{
    replicationPairId_ = "";
    replicationPairIdIsSet_ = false;
    volumeIds_ = "";
    volumeIdsIsSet_ = false;
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
    nativeServerId_ = "";
    nativeServerIdIsSet_ = false;
    nicId_ = "";
    nicIdIsSet_ = false;
}

SubJobEntities::~SubJobEntities() = default;

void SubJobEntities::validate()
{
}

web::json::value SubJobEntities::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationPairIdIsSet_) {
        val[utility::conversions::to_string_t("replication_pair_id")] = ModelBase::toJson(replicationPairId_);
    }
    if(volumeIdsIsSet_) {
        val[utility::conversions::to_string_t("volume_ids")] = ModelBase::toJson(volumeIds_);
    }
    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(protectedInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("protected_instance_id")] = ModelBase::toJson(protectedInstanceId_);
    }
    if(nativeServerIdIsSet_) {
        val[utility::conversions::to_string_t("native_server_id")] = ModelBase::toJson(nativeServerId_);
    }
    if(nicIdIsSet_) {
        val[utility::conversions::to_string_t("nic_id")] = ModelBase::toJson(nicId_);
    }

    return val;
}

bool SubJobEntities::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replication_pair_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_pair_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationPairId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protected_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("native_server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("native_server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNativeServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nic_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nic_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNicId(refVal);
        }
    }
    return ok;
}

std::string SubJobEntities::getReplicationPairId() const
{
    return replicationPairId_;
}

void SubJobEntities::setReplicationPairId(const std::string& value)
{
    replicationPairId_ = value;
    replicationPairIdIsSet_ = true;
}

bool SubJobEntities::replicationPairIdIsSet() const
{
    return replicationPairIdIsSet_;
}

void SubJobEntities::unsetreplicationPairId()
{
    replicationPairIdIsSet_ = false;
}

std::string SubJobEntities::getVolumeIds() const
{
    return volumeIds_;
}

void SubJobEntities::setVolumeIds(const std::string& value)
{
    volumeIds_ = value;
    volumeIdsIsSet_ = true;
}

bool SubJobEntities::volumeIdsIsSet() const
{
    return volumeIdsIsSet_;
}

void SubJobEntities::unsetvolumeIds()
{
    volumeIdsIsSet_ = false;
}

std::string SubJobEntities::getServerGroupId() const
{
    return serverGroupId_;
}

void SubJobEntities::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool SubJobEntities::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void SubJobEntities::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::string SubJobEntities::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void SubJobEntities::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool SubJobEntities::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void SubJobEntities::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
}

std::string SubJobEntities::getNativeServerId() const
{
    return nativeServerId_;
}

void SubJobEntities::setNativeServerId(const std::string& value)
{
    nativeServerId_ = value;
    nativeServerIdIsSet_ = true;
}

bool SubJobEntities::nativeServerIdIsSet() const
{
    return nativeServerIdIsSet_;
}

void SubJobEntities::unsetnativeServerId()
{
    nativeServerIdIsSet_ = false;
}

std::string SubJobEntities::getNicId() const
{
    return nicId_;
}

void SubJobEntities::setNicId(const std::string& value)
{
    nicId_ = value;
    nicIdIsSet_ = true;
}

bool SubJobEntities::nicIdIsSet() const
{
    return nicIdIsSet_;
}

void SubJobEntities::unsetnicId()
{
    nicIdIsSet_ = false;
}

}
}
}
}
}


