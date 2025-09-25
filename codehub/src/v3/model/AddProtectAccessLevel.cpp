

#include "huaweicloud/codehub/v3/model/AddProtectAccessLevel.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




AddProtectAccessLevel::AddProtectAccessLevel()
{
    pushAccessLevel_ = 0;
    pushAccessLevelIsSet_ = false;
    mergeAccessLevel_ = 0;
    mergeAccessLevelIsSet_ = false;
}

AddProtectAccessLevel::~AddProtectAccessLevel() = default;

void AddProtectAccessLevel::validate()
{
}

web::json::value AddProtectAccessLevel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pushAccessLevelIsSet_) {
        val[utility::conversions::to_string_t("push_access_level")] = ModelBase::toJson(pushAccessLevel_);
    }
    if(mergeAccessLevelIsSet_) {
        val[utility::conversions::to_string_t("merge_access_level")] = ModelBase::toJson(mergeAccessLevel_);
    }

    return val;
}
bool AddProtectAccessLevel::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("push_access_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("push_access_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPushAccessLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_access_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_access_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeAccessLevel(refVal);
        }
    }
    return ok;
}


int32_t AddProtectAccessLevel::getPushAccessLevel() const
{
    return pushAccessLevel_;
}

void AddProtectAccessLevel::setPushAccessLevel(int32_t value)
{
    pushAccessLevel_ = value;
    pushAccessLevelIsSet_ = true;
}

bool AddProtectAccessLevel::pushAccessLevelIsSet() const
{
    return pushAccessLevelIsSet_;
}

void AddProtectAccessLevel::unsetpushAccessLevel()
{
    pushAccessLevelIsSet_ = false;
}

int32_t AddProtectAccessLevel::getMergeAccessLevel() const
{
    return mergeAccessLevel_;
}

void AddProtectAccessLevel::setMergeAccessLevel(int32_t value)
{
    mergeAccessLevel_ = value;
    mergeAccessLevelIsSet_ = true;
}

bool AddProtectAccessLevel::mergeAccessLevelIsSet() const
{
    return mergeAccessLevelIsSet_;
}

void AddProtectAccessLevel::unsetmergeAccessLevel()
{
    mergeAccessLevelIsSet_ = false;
}

}
}
}
}
}


