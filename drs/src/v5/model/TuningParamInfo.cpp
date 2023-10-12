

#include "huaweicloud/drs/v5/model/TuningParamInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




TuningParamInfo::TuningParamInfo()
{
    fullSyncIsSet_ = false;
    increCaptureIsSet_ = false;
    increApplyIsSet_ = false;
    increRelayIsSet_ = false;
}

TuningParamInfo::~TuningParamInfo() = default;

void TuningParamInfo::validate()
{
}

web::json::value TuningParamInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fullSyncIsSet_) {
        val[utility::conversions::to_string_t("full_sync")] = ModelBase::toJson(fullSync_);
    }
    if(increCaptureIsSet_) {
        val[utility::conversions::to_string_t("incre_capture")] = ModelBase::toJson(increCapture_);
    }
    if(increApplyIsSet_) {
        val[utility::conversions::to_string_t("incre_apply")] = ModelBase::toJson(increApply_);
    }
    if(increRelayIsSet_) {
        val[utility::conversions::to_string_t("incre_relay")] = ModelBase::toJson(increRelay_);
    }

    return val;
}
bool TuningParamInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("full_sync"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_sync"));
        if(!fieldValue.is_null())
        {
            std::vector<TuningParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullSync(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incre_capture"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incre_capture"));
        if(!fieldValue.is_null())
        {
            std::vector<TuningParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncreCapture(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incre_apply"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incre_apply"));
        if(!fieldValue.is_null())
        {
            std::vector<TuningParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncreApply(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incre_relay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incre_relay"));
        if(!fieldValue.is_null())
        {
            std::vector<TuningParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncreRelay(refVal);
        }
    }
    return ok;
}


std::vector<TuningParameter>& TuningParamInfo::getFullSync()
{
    return fullSync_;
}

void TuningParamInfo::setFullSync(const std::vector<TuningParameter>& value)
{
    fullSync_ = value;
    fullSyncIsSet_ = true;
}

bool TuningParamInfo::fullSyncIsSet() const
{
    return fullSyncIsSet_;
}

void TuningParamInfo::unsetfullSync()
{
    fullSyncIsSet_ = false;
}

std::vector<TuningParameter>& TuningParamInfo::getIncreCapture()
{
    return increCapture_;
}

void TuningParamInfo::setIncreCapture(const std::vector<TuningParameter>& value)
{
    increCapture_ = value;
    increCaptureIsSet_ = true;
}

bool TuningParamInfo::increCaptureIsSet() const
{
    return increCaptureIsSet_;
}

void TuningParamInfo::unsetincreCapture()
{
    increCaptureIsSet_ = false;
}

std::vector<TuningParameter>& TuningParamInfo::getIncreApply()
{
    return increApply_;
}

void TuningParamInfo::setIncreApply(const std::vector<TuningParameter>& value)
{
    increApply_ = value;
    increApplyIsSet_ = true;
}

bool TuningParamInfo::increApplyIsSet() const
{
    return increApplyIsSet_;
}

void TuningParamInfo::unsetincreApply()
{
    increApplyIsSet_ = false;
}

std::vector<TuningParameter>& TuningParamInfo::getIncreRelay()
{
    return increRelay_;
}

void TuningParamInfo::setIncreRelay(const std::vector<TuningParameter>& value)
{
    increRelay_ = value;
    increRelayIsSet_ = true;
}

bool TuningParamInfo::increRelayIsSet() const
{
    return increRelayIsSet_;
}

void TuningParamInfo::unsetincreRelay()
{
    increRelayIsSet_ = false;
}

}
}
}
}
}


