

#include "huaweicloud/drs/v3/model/UpdateTuningParamsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




UpdateTuningParamsResponse::UpdateTuningParamsResponse()
{
    fullSyncIsSet_ = false;
    increCaptureIsSet_ = false;
    increApplyIsSet_ = false;
    increRelayIsSet_ = false;
    modifyResult_ = "";
    modifyResultIsSet_ = false;
}

UpdateTuningParamsResponse::~UpdateTuningParamsResponse() = default;

void UpdateTuningParamsResponse::validate()
{
}

web::json::value UpdateTuningParamsResponse::toJson() const
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
    if(modifyResultIsSet_) {
        val[utility::conversions::to_string_t("modify_result")] = ModelBase::toJson(modifyResult_);
    }

    return val;
}

bool UpdateTuningParamsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("modify_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modify_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifyResult(refVal);
        }
    }
    return ok;
}

std::vector<TuningParameter>& UpdateTuningParamsResponse::getFullSync()
{
    return fullSync_;
}

void UpdateTuningParamsResponse::setFullSync(const std::vector<TuningParameter>& value)
{
    fullSync_ = value;
    fullSyncIsSet_ = true;
}

bool UpdateTuningParamsResponse::fullSyncIsSet() const
{
    return fullSyncIsSet_;
}

void UpdateTuningParamsResponse::unsetfullSync()
{
    fullSyncIsSet_ = false;
}

std::vector<TuningParameter>& UpdateTuningParamsResponse::getIncreCapture()
{
    return increCapture_;
}

void UpdateTuningParamsResponse::setIncreCapture(const std::vector<TuningParameter>& value)
{
    increCapture_ = value;
    increCaptureIsSet_ = true;
}

bool UpdateTuningParamsResponse::increCaptureIsSet() const
{
    return increCaptureIsSet_;
}

void UpdateTuningParamsResponse::unsetincreCapture()
{
    increCaptureIsSet_ = false;
}

std::vector<TuningParameter>& UpdateTuningParamsResponse::getIncreApply()
{
    return increApply_;
}

void UpdateTuningParamsResponse::setIncreApply(const std::vector<TuningParameter>& value)
{
    increApply_ = value;
    increApplyIsSet_ = true;
}

bool UpdateTuningParamsResponse::increApplyIsSet() const
{
    return increApplyIsSet_;
}

void UpdateTuningParamsResponse::unsetincreApply()
{
    increApplyIsSet_ = false;
}

std::vector<TuningParameter>& UpdateTuningParamsResponse::getIncreRelay()
{
    return increRelay_;
}

void UpdateTuningParamsResponse::setIncreRelay(const std::vector<TuningParameter>& value)
{
    increRelay_ = value;
    increRelayIsSet_ = true;
}

bool UpdateTuningParamsResponse::increRelayIsSet() const
{
    return increRelayIsSet_;
}

void UpdateTuningParamsResponse::unsetincreRelay()
{
    increRelayIsSet_ = false;
}

std::string UpdateTuningParamsResponse::getModifyResult() const
{
    return modifyResult_;
}

void UpdateTuningParamsResponse::setModifyResult(const std::string& value)
{
    modifyResult_ = value;
    modifyResultIsSet_ = true;
}

bool UpdateTuningParamsResponse::modifyResultIsSet() const
{
    return modifyResultIsSet_;
}

void UpdateTuningParamsResponse::unsetmodifyResult()
{
    modifyResultIsSet_ = false;
}

}
}
}
}
}


