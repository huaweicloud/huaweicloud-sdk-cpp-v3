

#include "huaweicloud/live/v1/model/VodPackageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




VodPackageInfo::VodPackageInfo()
{
    packagingGroupId_ = "";
    packagingGroupIdIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

VodPackageInfo::~VodPackageInfo() = default;

void VodPackageInfo::validate()
{
}

web::json::value VodPackageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(packagingGroupIdIsSet_) {
        val[utility::conversions::to_string_t("packaging_group_id")] = ModelBase::toJson(packagingGroupId_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool VodPackageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("packaging_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packaging_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackagingGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    return ok;
}


std::string VodPackageInfo::getPackagingGroupId() const
{
    return packagingGroupId_;
}

void VodPackageInfo::setPackagingGroupId(const std::string& value)
{
    packagingGroupId_ = value;
    packagingGroupIdIsSet_ = true;
}

bool VodPackageInfo::packagingGroupIdIsSet() const
{
    return packagingGroupIdIsSet_;
}

void VodPackageInfo::unsetpackagingGroupId()
{
    packagingGroupIdIsSet_ = false;
}

std::string VodPackageInfo::getResourceId() const
{
    return resourceId_;
}

void VodPackageInfo::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool VodPackageInfo::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void VodPackageInfo::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


