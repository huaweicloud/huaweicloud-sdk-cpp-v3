

#include "huaweicloud/functiongraph/v2/model/FuncMount.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




FuncMount::FuncMount()
{
    mountType_ = "";
    mountTypeIsSet_ = false;
    mountResource_ = "";
    mountResourceIsSet_ = false;
    mountSharePath_ = "";
    mountSharePathIsSet_ = false;
    localMountPath_ = "";
    localMountPathIsSet_ = false;
}

FuncMount::~FuncMount() = default;

void FuncMount::validate()
{
}

web::json::value FuncMount::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mountTypeIsSet_) {
        val[utility::conversions::to_string_t("mount_type")] = ModelBase::toJson(mountType_);
    }
    if(mountResourceIsSet_) {
        val[utility::conversions::to_string_t("mount_resource")] = ModelBase::toJson(mountResource_);
    }
    if(mountSharePathIsSet_) {
        val[utility::conversions::to_string_t("mount_share_path")] = ModelBase::toJson(mountSharePath_);
    }
    if(localMountPathIsSet_) {
        val[utility::conversions::to_string_t("local_mount_path")] = ModelBase::toJson(localMountPath_);
    }

    return val;
}
bool FuncMount::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mount_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mount_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMountType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mount_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mount_resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMountResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mount_share_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mount_share_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMountSharePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("local_mount_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("local_mount_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalMountPath(refVal);
        }
    }
    return ok;
}


std::string FuncMount::getMountType() const
{
    return mountType_;
}

void FuncMount::setMountType(const std::string& value)
{
    mountType_ = value;
    mountTypeIsSet_ = true;
}

bool FuncMount::mountTypeIsSet() const
{
    return mountTypeIsSet_;
}

void FuncMount::unsetmountType()
{
    mountTypeIsSet_ = false;
}

std::string FuncMount::getMountResource() const
{
    return mountResource_;
}

void FuncMount::setMountResource(const std::string& value)
{
    mountResource_ = value;
    mountResourceIsSet_ = true;
}

bool FuncMount::mountResourceIsSet() const
{
    return mountResourceIsSet_;
}

void FuncMount::unsetmountResource()
{
    mountResourceIsSet_ = false;
}

std::string FuncMount::getMountSharePath() const
{
    return mountSharePath_;
}

void FuncMount::setMountSharePath(const std::string& value)
{
    mountSharePath_ = value;
    mountSharePathIsSet_ = true;
}

bool FuncMount::mountSharePathIsSet() const
{
    return mountSharePathIsSet_;
}

void FuncMount::unsetmountSharePath()
{
    mountSharePathIsSet_ = false;
}

std::string FuncMount::getLocalMountPath() const
{
    return localMountPath_;
}

void FuncMount::setLocalMountPath(const std::string& value)
{
    localMountPath_ = value;
    localMountPathIsSet_ = true;
}

bool FuncMount::localMountPathIsSet() const
{
    return localMountPathIsSet_;
}

void FuncMount::unsetlocalMountPath()
{
    localMountPathIsSet_ = false;
}

}
}
}
}
}


