

#include "huaweicloud/ecs/v2/model/PrePaidServerDataVolumeExtendParam.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServerDataVolumeExtendParam::PrePaidServerDataVolumeExtendParam()
{
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
}

PrePaidServerDataVolumeExtendParam::~PrePaidServerDataVolumeExtendParam() = default;

void PrePaidServerDataVolumeExtendParam::validate()
{
}

web::json::value PrePaidServerDataVolumeExtendParam::toJson() const
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

bool PrePaidServerDataVolumeExtendParam::fromJson(const web::json::value& val)
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

std::string PrePaidServerDataVolumeExtendParam::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void PrePaidServerDataVolumeExtendParam::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool PrePaidServerDataVolumeExtendParam::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void PrePaidServerDataVolumeExtendParam::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

std::string PrePaidServerDataVolumeExtendParam::getResourceType() const
{
    return resourceType_;
}

void PrePaidServerDataVolumeExtendParam::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool PrePaidServerDataVolumeExtendParam::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void PrePaidServerDataVolumeExtendParam::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string PrePaidServerDataVolumeExtendParam::getSnapshotId() const
{
    return snapshotId_;
}

void PrePaidServerDataVolumeExtendParam::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool PrePaidServerDataVolumeExtendParam::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void PrePaidServerDataVolumeExtendParam::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

}
}
}
}
}


