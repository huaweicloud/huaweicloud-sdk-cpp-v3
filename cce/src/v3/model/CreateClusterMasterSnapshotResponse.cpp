

#include "huaweicloud/cce/v3/model/CreateClusterMasterSnapshotResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateClusterMasterSnapshotResponse::CreateClusterMasterSnapshotResponse()
{
    uid_ = "";
    uidIsSet_ = false;
    metadataIsSet_ = false;
}

CreateClusterMasterSnapshotResponse::~CreateClusterMasterSnapshotResponse() = default;

void CreateClusterMasterSnapshotResponse::validate()
{
}

web::json::value CreateClusterMasterSnapshotResponse::toJson() const
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
bool CreateClusterMasterSnapshotResponse::fromJson(const web::json::value& val)
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


std::string CreateClusterMasterSnapshotResponse::getUid() const
{
    return uid_;
}

void CreateClusterMasterSnapshotResponse::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool CreateClusterMasterSnapshotResponse::uidIsSet() const
{
    return uidIsSet_;
}

void CreateClusterMasterSnapshotResponse::unsetuid()
{
    uidIsSet_ = false;
}

SnapshotCluserResponseMetadata CreateClusterMasterSnapshotResponse::getMetadata() const
{
    return metadata_;
}

void CreateClusterMasterSnapshotResponse::setMetadata(const SnapshotCluserResponseMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateClusterMasterSnapshotResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateClusterMasterSnapshotResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


