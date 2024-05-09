

#include "huaweicloud/drs/v5/model/ActionParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ActionParams::ActionParams()
{
    endpointsIsSet_ = false;
    precheckMode_ = "";
    precheckModeIsSet_ = false;
    skipPrecheckInfoIsSet_ = false;
    pauseMode_ = "";
    pauseModeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    compareTaskParamIsSet_ = false;
    isSyncReEdit_ = false;
    isSyncReEditIsSet_ = false;
    forceDelete_ = false;
    forceDeleteIsSet_ = false;
    publicIpConfigIsSet_ = false;
    replayConfigIsSet_ = false;
}

ActionParams::~ActionParams() = default;

void ActionParams::validate()
{
}

web::json::value ActionParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }
    if(precheckModeIsSet_) {
        val[utility::conversions::to_string_t("precheck_mode")] = ModelBase::toJson(precheckMode_);
    }
    if(skipPrecheckInfoIsSet_) {
        val[utility::conversions::to_string_t("skip_precheck_info")] = ModelBase::toJson(skipPrecheckInfo_);
    }
    if(pauseModeIsSet_) {
        val[utility::conversions::to_string_t("pause_mode")] = ModelBase::toJson(pauseMode_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(compareTaskParamIsSet_) {
        val[utility::conversions::to_string_t("compare_task_param")] = ModelBase::toJson(compareTaskParam_);
    }
    if(isSyncReEditIsSet_) {
        val[utility::conversions::to_string_t("is_sync_re_edit")] = ModelBase::toJson(isSyncReEdit_);
    }
    if(forceDeleteIsSet_) {
        val[utility::conversions::to_string_t("force_delete")] = ModelBase::toJson(forceDelete_);
    }
    if(publicIpConfigIsSet_) {
        val[utility::conversions::to_string_t("public_ip_config")] = ModelBase::toJson(publicIpConfig_);
    }
    if(replayConfigIsSet_) {
        val[utility::conversions::to_string_t("replay_config")] = ModelBase::toJson(replayConfig_);
    }

    return val;
}
bool ActionParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            std::vector<JobEndpointInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("precheck_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("precheck_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrecheckMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skip_precheck_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skip_precheck_info"));
        if(!fieldValue.is_null())
        {
            SkipPreCheckInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkipPrecheckInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pause_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pause_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPauseMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_task_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_task_param"));
        if(!fieldValue.is_null())
        {
            CompareTaskParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareTaskParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_sync_re_edit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_sync_re_edit"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSyncReEdit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_config"));
        if(!fieldValue.is_null())
        {
            PublicIpConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replay_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replay_config"));
        if(!fieldValue.is_null())
        {
            ReplayConfigInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplayConfig(refVal);
        }
    }
    return ok;
}


std::vector<JobEndpointInfo>& ActionParams::getEndpoints()
{
    return endpoints_;
}

void ActionParams::setEndpoints(const std::vector<JobEndpointInfo>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool ActionParams::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void ActionParams::unsetendpoints()
{
    endpointsIsSet_ = false;
}

std::string ActionParams::getPrecheckMode() const
{
    return precheckMode_;
}

void ActionParams::setPrecheckMode(const std::string& value)
{
    precheckMode_ = value;
    precheckModeIsSet_ = true;
}

bool ActionParams::precheckModeIsSet() const
{
    return precheckModeIsSet_;
}

void ActionParams::unsetprecheckMode()
{
    precheckModeIsSet_ = false;
}

SkipPreCheckInfo ActionParams::getSkipPrecheckInfo() const
{
    return skipPrecheckInfo_;
}

void ActionParams::setSkipPrecheckInfo(const SkipPreCheckInfo& value)
{
    skipPrecheckInfo_ = value;
    skipPrecheckInfoIsSet_ = true;
}

bool ActionParams::skipPrecheckInfoIsSet() const
{
    return skipPrecheckInfoIsSet_;
}

void ActionParams::unsetskipPrecheckInfo()
{
    skipPrecheckInfoIsSet_ = false;
}

std::string ActionParams::getPauseMode() const
{
    return pauseMode_;
}

void ActionParams::setPauseMode(const std::string& value)
{
    pauseMode_ = value;
    pauseModeIsSet_ = true;
}

bool ActionParams::pauseModeIsSet() const
{
    return pauseModeIsSet_;
}

void ActionParams::unsetpauseMode()
{
    pauseModeIsSet_ = false;
}

std::string ActionParams::getStartTime() const
{
    return startTime_;
}

void ActionParams::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ActionParams::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ActionParams::unsetstartTime()
{
    startTimeIsSet_ = false;
}

CompareTaskParams ActionParams::getCompareTaskParam() const
{
    return compareTaskParam_;
}

void ActionParams::setCompareTaskParam(const CompareTaskParams& value)
{
    compareTaskParam_ = value;
    compareTaskParamIsSet_ = true;
}

bool ActionParams::compareTaskParamIsSet() const
{
    return compareTaskParamIsSet_;
}

void ActionParams::unsetcompareTaskParam()
{
    compareTaskParamIsSet_ = false;
}

bool ActionParams::isIsSyncReEdit() const
{
    return isSyncReEdit_;
}

void ActionParams::setIsSyncReEdit(bool value)
{
    isSyncReEdit_ = value;
    isSyncReEditIsSet_ = true;
}

bool ActionParams::isSyncReEditIsSet() const
{
    return isSyncReEditIsSet_;
}

void ActionParams::unsetisSyncReEdit()
{
    isSyncReEditIsSet_ = false;
}

bool ActionParams::isForceDelete() const
{
    return forceDelete_;
}

void ActionParams::setForceDelete(bool value)
{
    forceDelete_ = value;
    forceDeleteIsSet_ = true;
}

bool ActionParams::forceDeleteIsSet() const
{
    return forceDeleteIsSet_;
}

void ActionParams::unsetforceDelete()
{
    forceDeleteIsSet_ = false;
}

PublicIpConfig ActionParams::getPublicIpConfig() const
{
    return publicIpConfig_;
}

void ActionParams::setPublicIpConfig(const PublicIpConfig& value)
{
    publicIpConfig_ = value;
    publicIpConfigIsSet_ = true;
}

bool ActionParams::publicIpConfigIsSet() const
{
    return publicIpConfigIsSet_;
}

void ActionParams::unsetpublicIpConfig()
{
    publicIpConfigIsSet_ = false;
}

ReplayConfigInfo ActionParams::getReplayConfig() const
{
    return replayConfig_;
}

void ActionParams::setReplayConfig(const ReplayConfigInfo& value)
{
    replayConfig_ = value;
    replayConfigIsSet_ = true;
}

bool ActionParams::replayConfigIsSet() const
{
    return replayConfigIsSet_;
}

void ActionParams::unsetreplayConfig()
{
    replayConfigIsSet_ = false;
}

}
}
}
}
}


