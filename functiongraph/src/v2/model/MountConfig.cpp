

#include "huaweicloud/functiongraph/v2/model/MountConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




MountConfig::MountConfig()
{
    mountUserIsSet_ = false;
    funcMountsIsSet_ = false;
}

MountConfig::~MountConfig() = default;

void MountConfig::validate()
{
}

web::json::value MountConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mountUserIsSet_) {
        val[utility::conversions::to_string_t("mount_user")] = ModelBase::toJson(mountUser_);
    }
    if(funcMountsIsSet_) {
        val[utility::conversions::to_string_t("func_mounts")] = ModelBase::toJson(funcMounts_);
    }

    return val;
}
bool MountConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mount_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mount_user"));
        if(!fieldValue.is_null())
        {
            MountUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMountUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("func_mounts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_mounts"));
        if(!fieldValue.is_null())
        {
            std::vector<FuncMount> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncMounts(refVal);
        }
    }
    return ok;
}


MountUser MountConfig::getMountUser() const
{
    return mountUser_;
}

void MountConfig::setMountUser(const MountUser& value)
{
    mountUser_ = value;
    mountUserIsSet_ = true;
}

bool MountConfig::mountUserIsSet() const
{
    return mountUserIsSet_;
}

void MountConfig::unsetmountUser()
{
    mountUserIsSet_ = false;
}

std::vector<FuncMount>& MountConfig::getFuncMounts()
{
    return funcMounts_;
}

void MountConfig::setFuncMounts(const std::vector<FuncMount>& value)
{
    funcMounts_ = value;
    funcMountsIsSet_ = true;
}

bool MountConfig::funcMountsIsSet() const
{
    return funcMountsIsSet_;
}

void MountConfig::unsetfuncMounts()
{
    funcMountsIsSet_ = false;
}

}
}
}
}
}


