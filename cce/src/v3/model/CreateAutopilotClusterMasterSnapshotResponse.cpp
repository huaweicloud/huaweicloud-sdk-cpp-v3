

#include "huaweicloud/cce/v3/model/CreateAutopilotClusterMasterSnapshotResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAutopilotClusterMasterSnapshotResponse::CreateAutopilotClusterMasterSnapshotResponse()
{
    uid_ = "";
    uidIsSet_ = false;
    metadataIsSet_ = false;
}

CreateAutopilotClusterMasterSnapshotResponse::~CreateAutopilotClusterMasterSnapshotResponse() = default;

void CreateAutopilotClusterMasterSnapshotResponse::validate()
{
}

web::json::value CreateAutopilotClusterMasterSnapshotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool CreateAutopilotClusterMasterSnapshotResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            SnapshotCluserResponseMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


std::string CreateAutopilotClusterMasterSnapshotResponse::getUid() const
{
    return uid_;
}

void CreateAutopilotClusterMasterSnapshotResponse::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool CreateAutopilotClusterMasterSnapshotResponse::uidIsSet() const
{
    return uidIsSet_;
}

void CreateAutopilotClusterMasterSnapshotResponse::unsetuid()
{
    uidIsSet_ = false;
}

SnapshotCluserResponseMetadata CreateAutopilotClusterMasterSnapshotResponse::getMetadata() const
{
    return metadata_;
}

void CreateAutopilotClusterMasterSnapshotResponse::setMetadata(const SnapshotCluserResponseMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateAutopilotClusterMasterSnapshotResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateAutopilotClusterMasterSnapshotResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


