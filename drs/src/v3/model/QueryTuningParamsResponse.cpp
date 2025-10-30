

#include "huaweicloud/drs/v3/model/QueryTuningParamsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryTuningParamsResponse::QueryTuningParamsResponse()
{
    fullSyncIsSet_ = false;
    increCaptureIsSet_ = false;
    increApplyIsSet_ = false;
    increRelayIsSet_ = false;
    modifyResult_ = "";
    modifyResultIsSet_ = false;
}

QueryTuningParamsResponse::~QueryTuningParamsResponse() = default;

void QueryTuningParamsResponse::validate()
{
}

web::json::value QueryTuningParamsResponse::toJson() const
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
bool QueryTuningParamsResponse::fromJson(const web::json::value& val)
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


std::vector<TuningParameter>& QueryTuningParamsResponse::getFullSync()
{
    return fullSync_;
}

void QueryTuningParamsResponse::setFullSync(const std::vector<TuningParameter>& value)
{
    fullSync_ = value;
    fullSyncIsSet_ = true;
}

bool QueryTuningParamsResponse::fullSyncIsSet() const
{
    return fullSyncIsSet_;
}

void QueryTuningParamsResponse::unsetfullSync()
{
    fullSyncIsSet_ = false;
}

std::vector<TuningParameter>& QueryTuningParamsResponse::getIncreCapture()
{
    return increCapture_;
}

void QueryTuningParamsResponse::setIncreCapture(const std::vector<TuningParameter>& value)
{
    increCapture_ = value;
    increCaptureIsSet_ = true;
}

bool QueryTuningParamsResponse::increCaptureIsSet() const
{
    return increCaptureIsSet_;
}

void QueryTuningParamsResponse::unsetincreCapture()
{
    increCaptureIsSet_ = false;
}

std::vector<TuningParameter>& QueryTuningParamsResponse::getIncreApply()
{
    return increApply_;
}

void QueryTuningParamsResponse::setIncreApply(const std::vector<TuningParameter>& value)
{
    increApply_ = value;
    increApplyIsSet_ = true;
}

bool QueryTuningParamsResponse::increApplyIsSet() const
{
    return increApplyIsSet_;
}

void QueryTuningParamsResponse::unsetincreApply()
{
    increApplyIsSet_ = false;
}

std::vector<TuningParameter>& QueryTuningParamsResponse::getIncreRelay()
{
    return increRelay_;
}

void QueryTuningParamsResponse::setIncreRelay(const std::vector<TuningParameter>& value)
{
    increRelay_ = value;
    increRelayIsSet_ = true;
}

bool QueryTuningParamsResponse::increRelayIsSet() const
{
    return increRelayIsSet_;
}

void QueryTuningParamsResponse::unsetincreRelay()
{
    increRelayIsSet_ = false;
}

std::string QueryTuningParamsResponse::getModifyResult() const
{
    return modifyResult_;
}

void QueryTuningParamsResponse::setModifyResult(const std::string& value)
{
    modifyResult_ = value;
    modifyResultIsSet_ = true;
}

bool QueryTuningParamsResponse::modifyResultIsSet() const
{
    return modifyResultIsSet_;
}

void QueryTuningParamsResponse::unsetmodifyResult()
{
    modifyResultIsSet_ = false;
}

}
}
}
}
}


