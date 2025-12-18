

#include "huaweicloud/meeting/v1/model/QosParticipantInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QosParticipantInfo::QosParticipantInfo()
{
    confUUID_ = "";
    confUUIDIsSet_ = false;
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    participantID_ = "";
    participantIDIsSet_ = false;
    userUUID_ = "";
    userUUIDIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    terminalType_ = "";
    terminalTypeIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
    province_ = "";
    provinceIsSet_ = false;
    city_ = "";
    cityIsSet_ = false;
    appVersion_ = "";
    appVersionIsSet_ = false;
    joinTime_ = 0L;
    joinTimeIsSet_ = false;
    leftTime_ = 0L;
    leftTimeIsSet_ = false;
    systemInfo_ = "";
    systemInfoIsSet_ = false;
    networkType_ = "";
    networkTypeIsSet_ = false;
    alarm_ = "";
    alarmIsSet_ = false;
    audioAlarmSend_ = "";
    audioAlarmSendIsSet_ = false;
    videoAlarmSend_ = "";
    videoAlarmSendIsSet_ = false;
    screenAlarmSend_ = "";
    screenAlarmSendIsSet_ = false;
    audioAlarmRec_ = "";
    audioAlarmRecIsSet_ = false;
    videoAlarmRec_ = "";
    videoAlarmRecIsSet_ = false;
    screenAlarmRec_ = "";
    screenAlarmRecIsSet_ = false;
    cpuAlarm_ = "";
    cpuAlarmIsSet_ = false;
    microphoneInfo_ = "";
    microphoneInfoIsSet_ = false;
    speakerInfo_ = "";
    speakerInfoIsSet_ = false;
    cameraInfo_ = "";
    cameraInfoIsSet_ = false;
    dataCenter_ = "";
    dataCenterIsSet_ = false;
    leftReason_ = 0;
    leftReasonIsSet_ = false;
    existQos_ = false;
    existQosIsSet_ = false;
}

QosParticipantInfo::~QosParticipantInfo() = default;

void QosParticipantInfo::validate()
{
}

web::json::value QosParticipantInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confUUIDIsSet_) {
        val[utility::conversions::to_string_t("confUUID")] = ModelBase::toJson(confUUID_);
    }
    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(participantIDIsSet_) {
        val[utility::conversions::to_string_t("participantID")] = ModelBase::toJson(participantID_);
    }
    if(userUUIDIsSet_) {
        val[utility::conversions::to_string_t("userUUID")] = ModelBase::toJson(userUUID_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("displayName")] = ModelBase::toJson(displayName_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(terminalTypeIsSet_) {
        val[utility::conversions::to_string_t("terminalType")] = ModelBase::toJson(terminalType_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ipAddress")] = ModelBase::toJson(ipAddress_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }
    if(provinceIsSet_) {
        val[utility::conversions::to_string_t("province")] = ModelBase::toJson(province_);
    }
    if(cityIsSet_) {
        val[utility::conversions::to_string_t("city")] = ModelBase::toJson(city_);
    }
    if(appVersionIsSet_) {
        val[utility::conversions::to_string_t("appVersion")] = ModelBase::toJson(appVersion_);
    }
    if(joinTimeIsSet_) {
        val[utility::conversions::to_string_t("joinTime")] = ModelBase::toJson(joinTime_);
    }
    if(leftTimeIsSet_) {
        val[utility::conversions::to_string_t("leftTime")] = ModelBase::toJson(leftTime_);
    }
    if(systemInfoIsSet_) {
        val[utility::conversions::to_string_t("systemInfo")] = ModelBase::toJson(systemInfo_);
    }
    if(networkTypeIsSet_) {
        val[utility::conversions::to_string_t("networkType")] = ModelBase::toJson(networkType_);
    }
    if(alarmIsSet_) {
        val[utility::conversions::to_string_t("alarm")] = ModelBase::toJson(alarm_);
    }
    if(audioAlarmSendIsSet_) {
        val[utility::conversions::to_string_t("audioAlarmSend")] = ModelBase::toJson(audioAlarmSend_);
    }
    if(videoAlarmSendIsSet_) {
        val[utility::conversions::to_string_t("videoAlarmSend")] = ModelBase::toJson(videoAlarmSend_);
    }
    if(screenAlarmSendIsSet_) {
        val[utility::conversions::to_string_t("screenAlarmSend")] = ModelBase::toJson(screenAlarmSend_);
    }
    if(audioAlarmRecIsSet_) {
        val[utility::conversions::to_string_t("audioAlarmRec")] = ModelBase::toJson(audioAlarmRec_);
    }
    if(videoAlarmRecIsSet_) {
        val[utility::conversions::to_string_t("videoAlarmRec")] = ModelBase::toJson(videoAlarmRec_);
    }
    if(screenAlarmRecIsSet_) {
        val[utility::conversions::to_string_t("screenAlarmRec")] = ModelBase::toJson(screenAlarmRec_);
    }
    if(cpuAlarmIsSet_) {
        val[utility::conversions::to_string_t("cpuAlarm")] = ModelBase::toJson(cpuAlarm_);
    }
    if(microphoneInfoIsSet_) {
        val[utility::conversions::to_string_t("microphoneInfo")] = ModelBase::toJson(microphoneInfo_);
    }
    if(speakerInfoIsSet_) {
        val[utility::conversions::to_string_t("speakerInfo")] = ModelBase::toJson(speakerInfo_);
    }
    if(cameraInfoIsSet_) {
        val[utility::conversions::to_string_t("cameraInfo")] = ModelBase::toJson(cameraInfo_);
    }
    if(dataCenterIsSet_) {
        val[utility::conversions::to_string_t("dataCenter")] = ModelBase::toJson(dataCenter_);
    }
    if(leftReasonIsSet_) {
        val[utility::conversions::to_string_t("leftReason")] = ModelBase::toJson(leftReason_);
    }
    if(existQosIsSet_) {
        val[utility::conversions::to_string_t("existQos")] = ModelBase::toJson(existQos_);
    }

    return val;
}
bool QosParticipantInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("confUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUUID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conferenceID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conferenceID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("participantID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("participantID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParticipantID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserUUID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("displayName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("displayName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("terminalType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("terminalType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTerminalType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipAddress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipAddress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("country"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("country"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountry(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("province"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("province"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("city"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("city"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("appVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("appVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("joinTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("joinTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJoinTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("leftTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("leftTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeftTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("systemInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("systemInfo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("networkType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("networkType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audioAlarmSend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audioAlarmSend"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioAlarmSend(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("videoAlarmSend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("videoAlarmSend"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoAlarmSend(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("screenAlarmSend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("screenAlarmSend"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScreenAlarmSend(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audioAlarmRec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audioAlarmRec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioAlarmRec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("videoAlarmRec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("videoAlarmRec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoAlarmRec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("screenAlarmRec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("screenAlarmRec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScreenAlarmRec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpuAlarm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuAlarm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuAlarm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("microphoneInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("microphoneInfo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMicrophoneInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("speakerInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("speakerInfo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpeakerInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cameraInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cameraInfo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCameraInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataCenter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataCenter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataCenter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("leftReason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("leftReason"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeftReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("existQos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("existQos"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExistQos(refVal);
        }
    }
    return ok;
}


std::string QosParticipantInfo::getConfUUID() const
{
    return confUUID_;
}

void QosParticipantInfo::setConfUUID(const std::string& value)
{
    confUUID_ = value;
    confUUIDIsSet_ = true;
}

bool QosParticipantInfo::confUUIDIsSet() const
{
    return confUUIDIsSet_;
}

void QosParticipantInfo::unsetconfUUID()
{
    confUUIDIsSet_ = false;
}

std::string QosParticipantInfo::getConferenceID() const
{
    return conferenceID_;
}

void QosParticipantInfo::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool QosParticipantInfo::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void QosParticipantInfo::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string QosParticipantInfo::getParticipantID() const
{
    return participantID_;
}

void QosParticipantInfo::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool QosParticipantInfo::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void QosParticipantInfo::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

std::string QosParticipantInfo::getUserUUID() const
{
    return userUUID_;
}

void QosParticipantInfo::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool QosParticipantInfo::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void QosParticipantInfo::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string QosParticipantInfo::getDisplayName() const
{
    return displayName_;
}

void QosParticipantInfo::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool QosParticipantInfo::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void QosParticipantInfo::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string QosParticipantInfo::getDeptName() const
{
    return deptName_;
}

void QosParticipantInfo::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool QosParticipantInfo::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void QosParticipantInfo::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string QosParticipantInfo::getTerminalType() const
{
    return terminalType_;
}

void QosParticipantInfo::setTerminalType(const std::string& value)
{
    terminalType_ = value;
    terminalTypeIsSet_ = true;
}

bool QosParticipantInfo::terminalTypeIsSet() const
{
    return terminalTypeIsSet_;
}

void QosParticipantInfo::unsetterminalType()
{
    terminalTypeIsSet_ = false;
}

std::string QosParticipantInfo::getRole() const
{
    return role_;
}

void QosParticipantInfo::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool QosParticipantInfo::roleIsSet() const
{
    return roleIsSet_;
}

void QosParticipantInfo::unsetrole()
{
    roleIsSet_ = false;
}

std::string QosParticipantInfo::getIpAddress() const
{
    return ipAddress_;
}

void QosParticipantInfo::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool QosParticipantInfo::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void QosParticipantInfo::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::string QosParticipantInfo::getCountry() const
{
    return country_;
}

void QosParticipantInfo::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool QosParticipantInfo::countryIsSet() const
{
    return countryIsSet_;
}

void QosParticipantInfo::unsetcountry()
{
    countryIsSet_ = false;
}

std::string QosParticipantInfo::getProvince() const
{
    return province_;
}

void QosParticipantInfo::setProvince(const std::string& value)
{
    province_ = value;
    provinceIsSet_ = true;
}

bool QosParticipantInfo::provinceIsSet() const
{
    return provinceIsSet_;
}

void QosParticipantInfo::unsetprovince()
{
    provinceIsSet_ = false;
}

std::string QosParticipantInfo::getCity() const
{
    return city_;
}

void QosParticipantInfo::setCity(const std::string& value)
{
    city_ = value;
    cityIsSet_ = true;
}

bool QosParticipantInfo::cityIsSet() const
{
    return cityIsSet_;
}

void QosParticipantInfo::unsetcity()
{
    cityIsSet_ = false;
}

std::string QosParticipantInfo::getAppVersion() const
{
    return appVersion_;
}

void QosParticipantInfo::setAppVersion(const std::string& value)
{
    appVersion_ = value;
    appVersionIsSet_ = true;
}

bool QosParticipantInfo::appVersionIsSet() const
{
    return appVersionIsSet_;
}

void QosParticipantInfo::unsetappVersion()
{
    appVersionIsSet_ = false;
}

int64_t QosParticipantInfo::getJoinTime() const
{
    return joinTime_;
}

void QosParticipantInfo::setJoinTime(int64_t value)
{
    joinTime_ = value;
    joinTimeIsSet_ = true;
}

bool QosParticipantInfo::joinTimeIsSet() const
{
    return joinTimeIsSet_;
}

void QosParticipantInfo::unsetjoinTime()
{
    joinTimeIsSet_ = false;
}

int64_t QosParticipantInfo::getLeftTime() const
{
    return leftTime_;
}

void QosParticipantInfo::setLeftTime(int64_t value)
{
    leftTime_ = value;
    leftTimeIsSet_ = true;
}

bool QosParticipantInfo::leftTimeIsSet() const
{
    return leftTimeIsSet_;
}

void QosParticipantInfo::unsetleftTime()
{
    leftTimeIsSet_ = false;
}

std::string QosParticipantInfo::getSystemInfo() const
{
    return systemInfo_;
}

void QosParticipantInfo::setSystemInfo(const std::string& value)
{
    systemInfo_ = value;
    systemInfoIsSet_ = true;
}

bool QosParticipantInfo::systemInfoIsSet() const
{
    return systemInfoIsSet_;
}

void QosParticipantInfo::unsetsystemInfo()
{
    systemInfoIsSet_ = false;
}

std::string QosParticipantInfo::getNetworkType() const
{
    return networkType_;
}

void QosParticipantInfo::setNetworkType(const std::string& value)
{
    networkType_ = value;
    networkTypeIsSet_ = true;
}

bool QosParticipantInfo::networkTypeIsSet() const
{
    return networkTypeIsSet_;
}

void QosParticipantInfo::unsetnetworkType()
{
    networkTypeIsSet_ = false;
}

std::string QosParticipantInfo::getAlarm() const
{
    return alarm_;
}

void QosParticipantInfo::setAlarm(const std::string& value)
{
    alarm_ = value;
    alarmIsSet_ = true;
}

bool QosParticipantInfo::alarmIsSet() const
{
    return alarmIsSet_;
}

void QosParticipantInfo::unsetalarm()
{
    alarmIsSet_ = false;
}

std::string QosParticipantInfo::getAudioAlarmSend() const
{
    return audioAlarmSend_;
}

void QosParticipantInfo::setAudioAlarmSend(const std::string& value)
{
    audioAlarmSend_ = value;
    audioAlarmSendIsSet_ = true;
}

bool QosParticipantInfo::audioAlarmSendIsSet() const
{
    return audioAlarmSendIsSet_;
}

void QosParticipantInfo::unsetaudioAlarmSend()
{
    audioAlarmSendIsSet_ = false;
}

std::string QosParticipantInfo::getVideoAlarmSend() const
{
    return videoAlarmSend_;
}

void QosParticipantInfo::setVideoAlarmSend(const std::string& value)
{
    videoAlarmSend_ = value;
    videoAlarmSendIsSet_ = true;
}

bool QosParticipantInfo::videoAlarmSendIsSet() const
{
    return videoAlarmSendIsSet_;
}

void QosParticipantInfo::unsetvideoAlarmSend()
{
    videoAlarmSendIsSet_ = false;
}

std::string QosParticipantInfo::getScreenAlarmSend() const
{
    return screenAlarmSend_;
}

void QosParticipantInfo::setScreenAlarmSend(const std::string& value)
{
    screenAlarmSend_ = value;
    screenAlarmSendIsSet_ = true;
}

bool QosParticipantInfo::screenAlarmSendIsSet() const
{
    return screenAlarmSendIsSet_;
}

void QosParticipantInfo::unsetscreenAlarmSend()
{
    screenAlarmSendIsSet_ = false;
}

std::string QosParticipantInfo::getAudioAlarmRec() const
{
    return audioAlarmRec_;
}

void QosParticipantInfo::setAudioAlarmRec(const std::string& value)
{
    audioAlarmRec_ = value;
    audioAlarmRecIsSet_ = true;
}

bool QosParticipantInfo::audioAlarmRecIsSet() const
{
    return audioAlarmRecIsSet_;
}

void QosParticipantInfo::unsetaudioAlarmRec()
{
    audioAlarmRecIsSet_ = false;
}

std::string QosParticipantInfo::getVideoAlarmRec() const
{
    return videoAlarmRec_;
}

void QosParticipantInfo::setVideoAlarmRec(const std::string& value)
{
    videoAlarmRec_ = value;
    videoAlarmRecIsSet_ = true;
}

bool QosParticipantInfo::videoAlarmRecIsSet() const
{
    return videoAlarmRecIsSet_;
}

void QosParticipantInfo::unsetvideoAlarmRec()
{
    videoAlarmRecIsSet_ = false;
}

std::string QosParticipantInfo::getScreenAlarmRec() const
{
    return screenAlarmRec_;
}

void QosParticipantInfo::setScreenAlarmRec(const std::string& value)
{
    screenAlarmRec_ = value;
    screenAlarmRecIsSet_ = true;
}

bool QosParticipantInfo::screenAlarmRecIsSet() const
{
    return screenAlarmRecIsSet_;
}

void QosParticipantInfo::unsetscreenAlarmRec()
{
    screenAlarmRecIsSet_ = false;
}

std::string QosParticipantInfo::getCpuAlarm() const
{
    return cpuAlarm_;
}

void QosParticipantInfo::setCpuAlarm(const std::string& value)
{
    cpuAlarm_ = value;
    cpuAlarmIsSet_ = true;
}

bool QosParticipantInfo::cpuAlarmIsSet() const
{
    return cpuAlarmIsSet_;
}

void QosParticipantInfo::unsetcpuAlarm()
{
    cpuAlarmIsSet_ = false;
}

std::string QosParticipantInfo::getMicrophoneInfo() const
{
    return microphoneInfo_;
}

void QosParticipantInfo::setMicrophoneInfo(const std::string& value)
{
    microphoneInfo_ = value;
    microphoneInfoIsSet_ = true;
}

bool QosParticipantInfo::microphoneInfoIsSet() const
{
    return microphoneInfoIsSet_;
}

void QosParticipantInfo::unsetmicrophoneInfo()
{
    microphoneInfoIsSet_ = false;
}

std::string QosParticipantInfo::getSpeakerInfo() const
{
    return speakerInfo_;
}

void QosParticipantInfo::setSpeakerInfo(const std::string& value)
{
    speakerInfo_ = value;
    speakerInfoIsSet_ = true;
}

bool QosParticipantInfo::speakerInfoIsSet() const
{
    return speakerInfoIsSet_;
}

void QosParticipantInfo::unsetspeakerInfo()
{
    speakerInfoIsSet_ = false;
}

std::string QosParticipantInfo::getCameraInfo() const
{
    return cameraInfo_;
}

void QosParticipantInfo::setCameraInfo(const std::string& value)
{
    cameraInfo_ = value;
    cameraInfoIsSet_ = true;
}

bool QosParticipantInfo::cameraInfoIsSet() const
{
    return cameraInfoIsSet_;
}

void QosParticipantInfo::unsetcameraInfo()
{
    cameraInfoIsSet_ = false;
}

std::string QosParticipantInfo::getDataCenter() const
{
    return dataCenter_;
}

void QosParticipantInfo::setDataCenter(const std::string& value)
{
    dataCenter_ = value;
    dataCenterIsSet_ = true;
}

bool QosParticipantInfo::dataCenterIsSet() const
{
    return dataCenterIsSet_;
}

void QosParticipantInfo::unsetdataCenter()
{
    dataCenterIsSet_ = false;
}

int32_t QosParticipantInfo::getLeftReason() const
{
    return leftReason_;
}

void QosParticipantInfo::setLeftReason(int32_t value)
{
    leftReason_ = value;
    leftReasonIsSet_ = true;
}

bool QosParticipantInfo::leftReasonIsSet() const
{
    return leftReasonIsSet_;
}

void QosParticipantInfo::unsetleftReason()
{
    leftReasonIsSet_ = false;
}

bool QosParticipantInfo::isExistQos() const
{
    return existQos_;
}

void QosParticipantInfo::setExistQos(bool value)
{
    existQos_ = value;
    existQosIsSet_ = true;
}

bool QosParticipantInfo::existQosIsSet() const
{
    return existQosIsSet_;
}

void QosParticipantInfo::unsetexistQos()
{
    existQosIsSet_ = false;
}

}
}
}
}
}


