

#include "huaweicloud/ocr/v1/model/VehicleLicenseAlarmConfidence.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




VehicleLicenseAlarmConfidence::VehicleLicenseAlarmConfidence()
{
    blockingWithinBorderScore_ = 0;
    blockingWithinBorderScoreIsSet_ = false;
    borderIntegrityScore_ = 0;
    borderIntegrityScoreIsSet_ = false;
}

VehicleLicenseAlarmConfidence::~VehicleLicenseAlarmConfidence() = default;

void VehicleLicenseAlarmConfidence::validate()
{
}

web::json::value VehicleLicenseAlarmConfidence::toJson() const
{
    web::json::value val = web::json::value::object();

    if(blockingWithinBorderScoreIsSet_) {
        val[utility::conversions::to_string_t("blocking_within_border_score")] = ModelBase::toJson(blockingWithinBorderScore_);
    }
    if(borderIntegrityScoreIsSet_) {
        val[utility::conversions::to_string_t("border_integrity_score")] = ModelBase::toJson(borderIntegrityScore_);
    }

    return val;
}
bool VehicleLicenseAlarmConfidence::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("blocking_within_border_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocking_within_border_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockingWithinBorderScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("border_integrity_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("border_integrity_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBorderIntegrityScore(refVal);
        }
    }
    return ok;
}


int32_t VehicleLicenseAlarmConfidence::getBlockingWithinBorderScore() const
{
    return blockingWithinBorderScore_;
}

void VehicleLicenseAlarmConfidence::setBlockingWithinBorderScore(int32_t value)
{
    blockingWithinBorderScore_ = value;
    blockingWithinBorderScoreIsSet_ = true;
}

bool VehicleLicenseAlarmConfidence::blockingWithinBorderScoreIsSet() const
{
    return blockingWithinBorderScoreIsSet_;
}

void VehicleLicenseAlarmConfidence::unsetblockingWithinBorderScore()
{
    blockingWithinBorderScoreIsSet_ = false;
}

int32_t VehicleLicenseAlarmConfidence::getBorderIntegrityScore() const
{
    return borderIntegrityScore_;
}

void VehicleLicenseAlarmConfidence::setBorderIntegrityScore(int32_t value)
{
    borderIntegrityScore_ = value;
    borderIntegrityScoreIsSet_ = true;
}

bool VehicleLicenseAlarmConfidence::borderIntegrityScoreIsSet() const
{
    return borderIntegrityScoreIsSet_;
}

void VehicleLicenseAlarmConfidence::unsetborderIntegrityScore()
{
    borderIntegrityScoreIsSet_ = false;
}

}
}
}
}
}


