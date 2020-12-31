

#include "huaweicloud/ecs/model/PostPaidServerRootVolumeExtendParam.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServerRootVolumeExtendParam::PostPaidServerRootVolumeExtendParam()
{
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
}

PostPaidServerRootVolumeExtendParam::~PostPaidServerRootVolumeExtendParam() = default;

void PostPaidServerRootVolumeExtendParam::validate()
{
}

web::json::value PostPaidServerRootVolumeExtendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resourceSpecCode")] = ModelBase::toJson(resourceSpecCode_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resourceType")] = ModelBase::toJson(resourceType_);
    }
    if(snapshotIdIsSet_) {
        val[utility::conversions::to_string_t("snapshotId")] = ModelBase::toJson(snapshotId_);
    }

    return val;
}

bool PostPaidServerRootVolumeExtendParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resourceSpecCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceSpecCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshotId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshotId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotId(refVal);
        }
    }
    return ok;
}


std::string PostPaidServerRootVolumeExtendParam::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void PostPaidServerRootVolumeExtendParam::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool PostPaidServerRootVolumeExtendParam::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void PostPaidServerRootVolumeExtendParam::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

std::string PostPaidServerRootVolumeExtendParam::getResourceType() const
{
    return resourceType_;
}

void PostPaidServerRootVolumeExtendParam::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool PostPaidServerRootVolumeExtendParam::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void PostPaidServerRootVolumeExtendParam::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string PostPaidServerRootVolumeExtendParam::getSnapshotId() const
{
    return snapshotId_;
}

void PostPaidServerRootVolumeExtendParam::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool PostPaidServerRootVolumeExtendParam::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void PostPaidServerRootVolumeExtendParam::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

}
}
}
}
}


