

#include "huaweicloud/cbr/v1/model/VaultBatchUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultBatchUpdate::VaultBatchUpdate()
{
    smnNotify_ = false;
    smnNotifyIsSet_ = false;
    threshold_ = 0;
    thresholdIsSet_ = false;
}

VaultBatchUpdate::~VaultBatchUpdate() = default;

void VaultBatchUpdate::validate()
{
}

web::json::value VaultBatchUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(smnNotifyIsSet_) {
        val[utility::conversions::to_string_t("smn_notify")] = ModelBase::toJson(smnNotify_);
    }
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }

    return val;
}
bool VaultBatchUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("smn_notify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smn_notify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmnNotify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreshold(refVal);
        }
    }
    return ok;
}


bool VaultBatchUpdate::isSmnNotify() const
{
    return smnNotify_;
}

void VaultBatchUpdate::setSmnNotify(bool value)
{
    smnNotify_ = value;
    smnNotifyIsSet_ = true;
}

bool VaultBatchUpdate::smnNotifyIsSet() const
{
    return smnNotifyIsSet_;
}

void VaultBatchUpdate::unsetsmnNotify()
{
    smnNotifyIsSet_ = false;
}

int32_t VaultBatchUpdate::getThreshold() const
{
    return threshold_;
}

void VaultBatchUpdate::setThreshold(int32_t value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool VaultBatchUpdate::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void VaultBatchUpdate::unsetthreshold()
{
    thresholdIsSet_ = false;
}

}
}
}
}
}


