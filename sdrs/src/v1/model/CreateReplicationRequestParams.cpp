

#include "huaweicloud/sdrs/v1/model/CreateReplicationRequestParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateReplicationRequestParams::CreateReplicationRequestParams()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

CreateReplicationRequestParams::~CreateReplicationRequestParams() = default;

void CreateReplicationRequestParams::validate()
{
}

web::json::value CreateReplicationRequestParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool CreateReplicationRequestParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
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


std::string CreateReplicationRequestParams::getServerGroupId() const
{
    return serverGroupId_;
}

void CreateReplicationRequestParams::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool CreateReplicationRequestParams::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void CreateReplicationRequestParams::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::string CreateReplicationRequestParams::getVolumeId() const
{
    return volumeId_;
}

void CreateReplicationRequestParams::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool CreateReplicationRequestParams::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void CreateReplicationRequestParams::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string CreateReplicationRequestParams::getName() const
{
    return name_;
}

void CreateReplicationRequestParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateReplicationRequestParams::nameIsSet() const
{
    return nameIsSet_;
}

void CreateReplicationRequestParams::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateReplicationRequestParams::getDescription() const
{
    return description_;
}

void CreateReplicationRequestParams::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateReplicationRequestParams::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateReplicationRequestParams::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateReplicationRequestParams::getClusterId() const
{
    return clusterId_;
}

void CreateReplicationRequestParams::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateReplicationRequestParams::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateReplicationRequestParams::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


