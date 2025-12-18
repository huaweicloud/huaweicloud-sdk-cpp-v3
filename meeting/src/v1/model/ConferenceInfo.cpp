

#include "huaweicloud/meeting/v1/model/ConferenceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ConferenceInfo::ConferenceInfo()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    timeZoneID_ = "";
    timeZoneIDIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    mediaTypes_ = "";
    mediaTypesIsSet_ = false;
    conferenceState_ = "";
    conferenceStateIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    accessNumber_ = "";
    accessNumberIsSet_ = false;
    passwordEntryIsSet_ = false;
    userUUID_ = "";
    userUUIDIsSet_ = false;
    scheduserName_ = "";
    scheduserNameIsSet_ = false;
    conferenceType_ = 0;
    conferenceTypeIsSet_ = false;
    confType_ = "";
    confTypeIsSet_ = false;
    cycleParamsIsSet_ = false;
    isAutoMute_ = 0;
    isAutoMuteIsSet_ = false;
    isAutoRecord_ = 0;
    isAutoRecordIsSet_ = false;
    chairJoinUri_ = "";
    chairJoinUriIsSet_ = false;
    guestJoinUri_ = "";
    guestJoinUriIsSet_ = false;
    audienceJoinUri_ = "";
    audienceJoinUriIsSet_ = false;
    recordType_ = 0;
    recordTypeIsSet_ = false;
    auxAddress_ = "";
    auxAddressIsSet_ = false;
    liveAddress_ = "";
    liveAddressIsSet_ = false;
    recordAuxStream_ = 0;
    recordAuxStreamIsSet_ = false;
    recordAuthType_ = 0;
    recordAuthTypeIsSet_ = false;
    liveUrl_ = "";
    liveUrlIsSet_ = false;
    confConfigInfoIsSet_ = false;
    vmrFlag_ = 0;
    vmrFlagIsSet_ = false;
    isHasRecordFile_ = false;
    isHasRecordFileIsSet_ = false;
    vmrConferenceID_ = "";
    vmrConferenceIDIsSet_ = false;
    confUUID_ = "";
    confUUIDIsSet_ = false;
    partAttendeeInfoIsSet_ = false;
    terminlCount_ = 0;
    terminlCountIsSet_ = false;
    normalCount_ = 0;
    normalCountIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    vmrID_ = "";
    vmrIDIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
    webinar_ = false;
    webinarIsSet_ = false;
    onlineAttendeeAmount_ = 0;
    onlineAttendeeAmountIsSet_ = false;
    multiStreamFlag_ = 0;
    multiStreamFlagIsSet_ = false;
    confMode_ = "";
    confModeIsSet_ = false;
    scheduleVmr_ = false;
    scheduleVmrIsSet_ = false;
    concurrentParticipants_ = 0;
    concurrentParticipantsIsSet_ = false;
    supportSimultaneousInterpretation_ = false;
    supportSimultaneousInterpretationIsSet_ = false;
    picDisplayIsSet_ = false;
    subConfsIsSet_ = false;
    cycleSubConfID_ = "";
    cycleSubConfIDIsSet_ = false;
}

ConferenceInfo::~ConferenceInfo() = default;

void ConferenceInfo::validate()
{
}

web::json::value ConferenceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(timeZoneIDIsSet_) {
        val[utility::conversions::to_string_t("timeZoneID")] = ModelBase::toJson(timeZoneID_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }
    if(mediaTypesIsSet_) {
        val[utility::conversions::to_string_t("mediaTypes")] = ModelBase::toJson(mediaTypes_);
    }
    if(conferenceStateIsSet_) {
        val[utility::conversions::to_string_t("conferenceState")] = ModelBase::toJson(conferenceState_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(accessNumberIsSet_) {
        val[utility::conversions::to_string_t("accessNumber")] = ModelBase::toJson(accessNumber_);
    }
    if(passwordEntryIsSet_) {
        val[utility::conversions::to_string_t("passwordEntry")] = ModelBase::toJson(passwordEntry_);
    }
    if(userUUIDIsSet_) {
        val[utility::conversions::to_string_t("userUUID")] = ModelBase::toJson(userUUID_);
    }
    if(scheduserNameIsSet_) {
        val[utility::conversions::to_string_t("scheduserName")] = ModelBase::toJson(scheduserName_);
    }
    if(conferenceTypeIsSet_) {
        val[utility::conversions::to_string_t("conferenceType")] = ModelBase::toJson(conferenceType_);
    }
    if(confTypeIsSet_) {
        val[utility::conversions::to_string_t("confType")] = ModelBase::toJson(confType_);
    }
    if(cycleParamsIsSet_) {
        val[utility::conversions::to_string_t("cycleParams")] = ModelBase::toJson(cycleParams_);
    }
    if(isAutoMuteIsSet_) {
        val[utility::conversions::to_string_t("isAutoMute")] = ModelBase::toJson(isAutoMute_);
    }
    if(isAutoRecordIsSet_) {
        val[utility::conversions::to_string_t("isAutoRecord")] = ModelBase::toJson(isAutoRecord_);
    }
    if(chairJoinUriIsSet_) {
        val[utility::conversions::to_string_t("chairJoinUri")] = ModelBase::toJson(chairJoinUri_);
    }
    if(guestJoinUriIsSet_) {
        val[utility::conversions::to_string_t("guestJoinUri")] = ModelBase::toJson(guestJoinUri_);
    }
    if(audienceJoinUriIsSet_) {
        val[utility::conversions::to_string_t("audienceJoinUri")] = ModelBase::toJson(audienceJoinUri_);
    }
    if(recordTypeIsSet_) {
        val[utility::conversions::to_string_t("recordType")] = ModelBase::toJson(recordType_);
    }
    if(auxAddressIsSet_) {
        val[utility::conversions::to_string_t("auxAddress")] = ModelBase::toJson(auxAddress_);
    }
    if(liveAddressIsSet_) {
        val[utility::conversions::to_string_t("liveAddress")] = ModelBase::toJson(liveAddress_);
    }
    if(recordAuxStreamIsSet_) {
        val[utility::conversions::to_string_t("recordAuxStream")] = ModelBase::toJson(recordAuxStream_);
    }
    if(recordAuthTypeIsSet_) {
        val[utility::conversions::to_string_t("recordAuthType")] = ModelBase::toJson(recordAuthType_);
    }
    if(liveUrlIsSet_) {
        val[utility::conversions::to_string_t("liveUrl")] = ModelBase::toJson(liveUrl_);
    }
    if(confConfigInfoIsSet_) {
        val[utility::conversions::to_string_t("confConfigInfo")] = ModelBase::toJson(confConfigInfo_);
    }
    if(vmrFlagIsSet_) {
        val[utility::conversions::to_string_t("vmrFlag")] = ModelBase::toJson(vmrFlag_);
    }
    if(isHasRecordFileIsSet_) {
        val[utility::conversions::to_string_t("isHasRecordFile")] = ModelBase::toJson(isHasRecordFile_);
    }
    if(vmrConferenceIDIsSet_) {
        val[utility::conversions::to_string_t("vmrConferenceID")] = ModelBase::toJson(vmrConferenceID_);
    }
    if(confUUIDIsSet_) {
        val[utility::conversions::to_string_t("confUUID")] = ModelBase::toJson(confUUID_);
    }
    if(partAttendeeInfoIsSet_) {
        val[utility::conversions::to_string_t("partAttendeeInfo")] = ModelBase::toJson(partAttendeeInfo_);
    }
    if(terminlCountIsSet_) {
        val[utility::conversions::to_string_t("terminlCount")] = ModelBase::toJson(terminlCount_);
    }
    if(normalCountIsSet_) {
        val[utility::conversions::to_string_t("normalCount")] = ModelBase::toJson(normalCount_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(vmrIDIsSet_) {
        val[utility::conversions::to_string_t("vmrID")] = ModelBase::toJson(vmrID_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(webinarIsSet_) {
        val[utility::conversions::to_string_t("webinar")] = ModelBase::toJson(webinar_);
    }
    if(onlineAttendeeAmountIsSet_) {
        val[utility::conversions::to_string_t("onlineAttendeeAmount")] = ModelBase::toJson(onlineAttendeeAmount_);
    }
    if(multiStreamFlagIsSet_) {
        val[utility::conversions::to_string_t("multiStreamFlag")] = ModelBase::toJson(multiStreamFlag_);
    }
    if(confModeIsSet_) {
        val[utility::conversions::to_string_t("confMode")] = ModelBase::toJson(confMode_);
    }
    if(scheduleVmrIsSet_) {
        val[utility::conversions::to_string_t("scheduleVmr")] = ModelBase::toJson(scheduleVmr_);
    }
    if(concurrentParticipantsIsSet_) {
        val[utility::conversions::to_string_t("concurrentParticipants")] = ModelBase::toJson(concurrentParticipants_);
    }
    if(supportSimultaneousInterpretationIsSet_) {
        val[utility::conversions::to_string_t("supportSimultaneousInterpretation")] = ModelBase::toJson(supportSimultaneousInterpretation_);
    }
    if(picDisplayIsSet_) {
        val[utility::conversions::to_string_t("picDisplay")] = ModelBase::toJson(picDisplay_);
    }
    if(subConfsIsSet_) {
        val[utility::conversions::to_string_t("subConfs")] = ModelBase::toJson(subConfs_);
    }
    if(cycleSubConfIDIsSet_) {
        val[utility::conversions::to_string_t("cycleSubConfID")] = ModelBase::toJson(cycleSubConfID_);
    }

    return val;
}
bool ConferenceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conferenceID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conferenceID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeZoneID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeZoneID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZoneID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mediaTypes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mediaTypes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMediaTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conferenceState"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conferenceState"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accessNumber"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessNumber"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("passwordEntry"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("passwordEntry"));
        if(!fieldValue.is_null())
        {
            std::vector<PasswordEntry> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPasswordEntry(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("scheduserName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scheduserName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conferenceType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conferenceType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cycleParams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cycleParams"));
        if(!fieldValue.is_null())
        {
            CycleParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCycleParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAutoMute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoMute"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoMute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAutoRecord"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoRecord"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRecord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chairJoinUri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chairJoinUri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChairJoinUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("guestJoinUri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("guestJoinUri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGuestJoinUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audienceJoinUri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audienceJoinUri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudienceJoinUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recordType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auxAddress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auxAddress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuxAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("liveAddress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("liveAddress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recordAuxStream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordAuxStream"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordAuxStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recordAuthType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordAuthType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordAuthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("liveUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("liveUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confConfigInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confConfigInfo"));
        if(!fieldValue.is_null())
        {
            RestConfConfigDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfConfigInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrFlag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrFlag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isHasRecordFile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isHasRecordFile"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsHasRecordFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrConferenceID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrConferenceID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrConferenceID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUUID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partAttendeeInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partAttendeeInfo"));
        if(!fieldValue.is_null())
        {
            std::vector<PartAttendee> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartAttendeeInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("terminlCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("terminlCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTerminlCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("normalCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("normalCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNormalCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vmrID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("webinar"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("webinar"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebinar(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("onlineAttendeeAmount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("onlineAttendeeAmount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlineAttendeeAmount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multiStreamFlag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multiStreamFlag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiStreamFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confMode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scheduleVmr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scheduleVmr"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleVmr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("concurrentParticipants"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concurrentParticipants"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConcurrentParticipants(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supportSimultaneousInterpretation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supportSimultaneousInterpretation"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportSimultaneousInterpretation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("picDisplay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("picDisplay"));
        if(!fieldValue.is_null())
        {
            MultiPicDisplayDO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPicDisplay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subConfs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subConfs"));
        if(!fieldValue.is_null())
        {
            std::vector<CycleSubConf> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubConfs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cycleSubConfID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cycleSubConfID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCycleSubConfID(refVal);
        }
    }
    return ok;
}


std::string ConferenceInfo::getConferenceID() const
{
    return conferenceID_;
}

void ConferenceInfo::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool ConferenceInfo::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void ConferenceInfo::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string ConferenceInfo::getSubject() const
{
    return subject_;
}

void ConferenceInfo::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool ConferenceInfo::subjectIsSet() const
{
    return subjectIsSet_;
}

void ConferenceInfo::unsetsubject()
{
    subjectIsSet_ = false;
}

int32_t ConferenceInfo::getSize() const
{
    return size_;
}

void ConferenceInfo::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ConferenceInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void ConferenceInfo::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ConferenceInfo::getTimeZoneID() const
{
    return timeZoneID_;
}

void ConferenceInfo::setTimeZoneID(const std::string& value)
{
    timeZoneID_ = value;
    timeZoneIDIsSet_ = true;
}

bool ConferenceInfo::timeZoneIDIsSet() const
{
    return timeZoneIDIsSet_;
}

void ConferenceInfo::unsettimeZoneID()
{
    timeZoneIDIsSet_ = false;
}

std::string ConferenceInfo::getStartTime() const
{
    return startTime_;
}

void ConferenceInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ConferenceInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ConferenceInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ConferenceInfo::getEndTime() const
{
    return endTime_;
}

void ConferenceInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ConferenceInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ConferenceInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ConferenceInfo::getMediaTypes() const
{
    return mediaTypes_;
}

void ConferenceInfo::setMediaTypes(const std::string& value)
{
    mediaTypes_ = value;
    mediaTypesIsSet_ = true;
}

bool ConferenceInfo::mediaTypesIsSet() const
{
    return mediaTypesIsSet_;
}

void ConferenceInfo::unsetmediaTypes()
{
    mediaTypesIsSet_ = false;
}

std::string ConferenceInfo::getConferenceState() const
{
    return conferenceState_;
}

void ConferenceInfo::setConferenceState(const std::string& value)
{
    conferenceState_ = value;
    conferenceStateIsSet_ = true;
}

bool ConferenceInfo::conferenceStateIsSet() const
{
    return conferenceStateIsSet_;
}

void ConferenceInfo::unsetconferenceState()
{
    conferenceStateIsSet_ = false;
}

std::string ConferenceInfo::getLanguage() const
{
    return language_;
}

void ConferenceInfo::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ConferenceInfo::languageIsSet() const
{
    return languageIsSet_;
}

void ConferenceInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ConferenceInfo::getAccessNumber() const
{
    return accessNumber_;
}

void ConferenceInfo::setAccessNumber(const std::string& value)
{
    accessNumber_ = value;
    accessNumberIsSet_ = true;
}

bool ConferenceInfo::accessNumberIsSet() const
{
    return accessNumberIsSet_;
}

void ConferenceInfo::unsetaccessNumber()
{
    accessNumberIsSet_ = false;
}

std::vector<PasswordEntry>& ConferenceInfo::getPasswordEntry()
{
    return passwordEntry_;
}

void ConferenceInfo::setPasswordEntry(const std::vector<PasswordEntry>& value)
{
    passwordEntry_ = value;
    passwordEntryIsSet_ = true;
}

bool ConferenceInfo::passwordEntryIsSet() const
{
    return passwordEntryIsSet_;
}

void ConferenceInfo::unsetpasswordEntry()
{
    passwordEntryIsSet_ = false;
}

std::string ConferenceInfo::getUserUUID() const
{
    return userUUID_;
}

void ConferenceInfo::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool ConferenceInfo::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void ConferenceInfo::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string ConferenceInfo::getScheduserName() const
{
    return scheduserName_;
}

void ConferenceInfo::setScheduserName(const std::string& value)
{
    scheduserName_ = value;
    scheduserNameIsSet_ = true;
}

bool ConferenceInfo::scheduserNameIsSet() const
{
    return scheduserNameIsSet_;
}

void ConferenceInfo::unsetscheduserName()
{
    scheduserNameIsSet_ = false;
}

int32_t ConferenceInfo::getConferenceType() const
{
    return conferenceType_;
}

void ConferenceInfo::setConferenceType(int32_t value)
{
    conferenceType_ = value;
    conferenceTypeIsSet_ = true;
}

bool ConferenceInfo::conferenceTypeIsSet() const
{
    return conferenceTypeIsSet_;
}

void ConferenceInfo::unsetconferenceType()
{
    conferenceTypeIsSet_ = false;
}

std::string ConferenceInfo::getConfType() const
{
    return confType_;
}

void ConferenceInfo::setConfType(const std::string& value)
{
    confType_ = value;
    confTypeIsSet_ = true;
}

bool ConferenceInfo::confTypeIsSet() const
{
    return confTypeIsSet_;
}

void ConferenceInfo::unsetconfType()
{
    confTypeIsSet_ = false;
}

CycleParams ConferenceInfo::getCycleParams() const
{
    return cycleParams_;
}

void ConferenceInfo::setCycleParams(const CycleParams& value)
{
    cycleParams_ = value;
    cycleParamsIsSet_ = true;
}

bool ConferenceInfo::cycleParamsIsSet() const
{
    return cycleParamsIsSet_;
}

void ConferenceInfo::unsetcycleParams()
{
    cycleParamsIsSet_ = false;
}

int32_t ConferenceInfo::getIsAutoMute() const
{
    return isAutoMute_;
}

void ConferenceInfo::setIsAutoMute(int32_t value)
{
    isAutoMute_ = value;
    isAutoMuteIsSet_ = true;
}

bool ConferenceInfo::isAutoMuteIsSet() const
{
    return isAutoMuteIsSet_;
}

void ConferenceInfo::unsetisAutoMute()
{
    isAutoMuteIsSet_ = false;
}

int32_t ConferenceInfo::getIsAutoRecord() const
{
    return isAutoRecord_;
}

void ConferenceInfo::setIsAutoRecord(int32_t value)
{
    isAutoRecord_ = value;
    isAutoRecordIsSet_ = true;
}

bool ConferenceInfo::isAutoRecordIsSet() const
{
    return isAutoRecordIsSet_;
}

void ConferenceInfo::unsetisAutoRecord()
{
    isAutoRecordIsSet_ = false;
}

std::string ConferenceInfo::getChairJoinUri() const
{
    return chairJoinUri_;
}

void ConferenceInfo::setChairJoinUri(const std::string& value)
{
    chairJoinUri_ = value;
    chairJoinUriIsSet_ = true;
}

bool ConferenceInfo::chairJoinUriIsSet() const
{
    return chairJoinUriIsSet_;
}

void ConferenceInfo::unsetchairJoinUri()
{
    chairJoinUriIsSet_ = false;
}

std::string ConferenceInfo::getGuestJoinUri() const
{
    return guestJoinUri_;
}

void ConferenceInfo::setGuestJoinUri(const std::string& value)
{
    guestJoinUri_ = value;
    guestJoinUriIsSet_ = true;
}

bool ConferenceInfo::guestJoinUriIsSet() const
{
    return guestJoinUriIsSet_;
}

void ConferenceInfo::unsetguestJoinUri()
{
    guestJoinUriIsSet_ = false;
}

std::string ConferenceInfo::getAudienceJoinUri() const
{
    return audienceJoinUri_;
}

void ConferenceInfo::setAudienceJoinUri(const std::string& value)
{
    audienceJoinUri_ = value;
    audienceJoinUriIsSet_ = true;
}

bool ConferenceInfo::audienceJoinUriIsSet() const
{
    return audienceJoinUriIsSet_;
}

void ConferenceInfo::unsetaudienceJoinUri()
{
    audienceJoinUriIsSet_ = false;
}

int32_t ConferenceInfo::getRecordType() const
{
    return recordType_;
}

void ConferenceInfo::setRecordType(int32_t value)
{
    recordType_ = value;
    recordTypeIsSet_ = true;
}

bool ConferenceInfo::recordTypeIsSet() const
{
    return recordTypeIsSet_;
}

void ConferenceInfo::unsetrecordType()
{
    recordTypeIsSet_ = false;
}

std::string ConferenceInfo::getAuxAddress() const
{
    return auxAddress_;
}

void ConferenceInfo::setAuxAddress(const std::string& value)
{
    auxAddress_ = value;
    auxAddressIsSet_ = true;
}

bool ConferenceInfo::auxAddressIsSet() const
{
    return auxAddressIsSet_;
}

void ConferenceInfo::unsetauxAddress()
{
    auxAddressIsSet_ = false;
}

std::string ConferenceInfo::getLiveAddress() const
{
    return liveAddress_;
}

void ConferenceInfo::setLiveAddress(const std::string& value)
{
    liveAddress_ = value;
    liveAddressIsSet_ = true;
}

bool ConferenceInfo::liveAddressIsSet() const
{
    return liveAddressIsSet_;
}

void ConferenceInfo::unsetliveAddress()
{
    liveAddressIsSet_ = false;
}

int32_t ConferenceInfo::getRecordAuxStream() const
{
    return recordAuxStream_;
}

void ConferenceInfo::setRecordAuxStream(int32_t value)
{
    recordAuxStream_ = value;
    recordAuxStreamIsSet_ = true;
}

bool ConferenceInfo::recordAuxStreamIsSet() const
{
    return recordAuxStreamIsSet_;
}

void ConferenceInfo::unsetrecordAuxStream()
{
    recordAuxStreamIsSet_ = false;
}

int32_t ConferenceInfo::getRecordAuthType() const
{
    return recordAuthType_;
}

void ConferenceInfo::setRecordAuthType(int32_t value)
{
    recordAuthType_ = value;
    recordAuthTypeIsSet_ = true;
}

bool ConferenceInfo::recordAuthTypeIsSet() const
{
    return recordAuthTypeIsSet_;
}

void ConferenceInfo::unsetrecordAuthType()
{
    recordAuthTypeIsSet_ = false;
}

std::string ConferenceInfo::getLiveUrl() const
{
    return liveUrl_;
}

void ConferenceInfo::setLiveUrl(const std::string& value)
{
    liveUrl_ = value;
    liveUrlIsSet_ = true;
}

bool ConferenceInfo::liveUrlIsSet() const
{
    return liveUrlIsSet_;
}

void ConferenceInfo::unsetliveUrl()
{
    liveUrlIsSet_ = false;
}

RestConfConfigDTO ConferenceInfo::getConfConfigInfo() const
{
    return confConfigInfo_;
}

void ConferenceInfo::setConfConfigInfo(const RestConfConfigDTO& value)
{
    confConfigInfo_ = value;
    confConfigInfoIsSet_ = true;
}

bool ConferenceInfo::confConfigInfoIsSet() const
{
    return confConfigInfoIsSet_;
}

void ConferenceInfo::unsetconfConfigInfo()
{
    confConfigInfoIsSet_ = false;
}

int32_t ConferenceInfo::getVmrFlag() const
{
    return vmrFlag_;
}

void ConferenceInfo::setVmrFlag(int32_t value)
{
    vmrFlag_ = value;
    vmrFlagIsSet_ = true;
}

bool ConferenceInfo::vmrFlagIsSet() const
{
    return vmrFlagIsSet_;
}

void ConferenceInfo::unsetvmrFlag()
{
    vmrFlagIsSet_ = false;
}

bool ConferenceInfo::isIsHasRecordFile() const
{
    return isHasRecordFile_;
}

void ConferenceInfo::setIsHasRecordFile(bool value)
{
    isHasRecordFile_ = value;
    isHasRecordFileIsSet_ = true;
}

bool ConferenceInfo::isHasRecordFileIsSet() const
{
    return isHasRecordFileIsSet_;
}

void ConferenceInfo::unsetisHasRecordFile()
{
    isHasRecordFileIsSet_ = false;
}

std::string ConferenceInfo::getVmrConferenceID() const
{
    return vmrConferenceID_;
}

void ConferenceInfo::setVmrConferenceID(const std::string& value)
{
    vmrConferenceID_ = value;
    vmrConferenceIDIsSet_ = true;
}

bool ConferenceInfo::vmrConferenceIDIsSet() const
{
    return vmrConferenceIDIsSet_;
}

void ConferenceInfo::unsetvmrConferenceID()
{
    vmrConferenceIDIsSet_ = false;
}

std::string ConferenceInfo::getConfUUID() const
{
    return confUUID_;
}

void ConferenceInfo::setConfUUID(const std::string& value)
{
    confUUID_ = value;
    confUUIDIsSet_ = true;
}

bool ConferenceInfo::confUUIDIsSet() const
{
    return confUUIDIsSet_;
}

void ConferenceInfo::unsetconfUUID()
{
    confUUIDIsSet_ = false;
}

std::vector<PartAttendee>& ConferenceInfo::getPartAttendeeInfo()
{
    return partAttendeeInfo_;
}

void ConferenceInfo::setPartAttendeeInfo(const std::vector<PartAttendee>& value)
{
    partAttendeeInfo_ = value;
    partAttendeeInfoIsSet_ = true;
}

bool ConferenceInfo::partAttendeeInfoIsSet() const
{
    return partAttendeeInfoIsSet_;
}

void ConferenceInfo::unsetpartAttendeeInfo()
{
    partAttendeeInfoIsSet_ = false;
}

int32_t ConferenceInfo::getTerminlCount() const
{
    return terminlCount_;
}

void ConferenceInfo::setTerminlCount(int32_t value)
{
    terminlCount_ = value;
    terminlCountIsSet_ = true;
}

bool ConferenceInfo::terminlCountIsSet() const
{
    return terminlCountIsSet_;
}

void ConferenceInfo::unsetterminlCount()
{
    terminlCountIsSet_ = false;
}

int32_t ConferenceInfo::getNormalCount() const
{
    return normalCount_;
}

void ConferenceInfo::setNormalCount(int32_t value)
{
    normalCount_ = value;
    normalCountIsSet_ = true;
}

bool ConferenceInfo::normalCountIsSet() const
{
    return normalCountIsSet_;
}

void ConferenceInfo::unsetnormalCount()
{
    normalCountIsSet_ = false;
}

std::string ConferenceInfo::getDeptName() const
{
    return deptName_;
}

void ConferenceInfo::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool ConferenceInfo::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void ConferenceInfo::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string ConferenceInfo::getVmrID() const
{
    return vmrID_;
}

void ConferenceInfo::setVmrID(const std::string& value)
{
    vmrID_ = value;
    vmrIDIsSet_ = true;
}

bool ConferenceInfo::vmrIDIsSet() const
{
    return vmrIDIsSet_;
}

void ConferenceInfo::unsetvmrID()
{
    vmrIDIsSet_ = false;
}

std::string ConferenceInfo::getRole() const
{
    return role_;
}

void ConferenceInfo::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool ConferenceInfo::roleIsSet() const
{
    return roleIsSet_;
}

void ConferenceInfo::unsetrole()
{
    roleIsSet_ = false;
}

bool ConferenceInfo::isWebinar() const
{
    return webinar_;
}

void ConferenceInfo::setWebinar(bool value)
{
    webinar_ = value;
    webinarIsSet_ = true;
}

bool ConferenceInfo::webinarIsSet() const
{
    return webinarIsSet_;
}

void ConferenceInfo::unsetwebinar()
{
    webinarIsSet_ = false;
}

int32_t ConferenceInfo::getOnlineAttendeeAmount() const
{
    return onlineAttendeeAmount_;
}

void ConferenceInfo::setOnlineAttendeeAmount(int32_t value)
{
    onlineAttendeeAmount_ = value;
    onlineAttendeeAmountIsSet_ = true;
}

bool ConferenceInfo::onlineAttendeeAmountIsSet() const
{
    return onlineAttendeeAmountIsSet_;
}

void ConferenceInfo::unsetonlineAttendeeAmount()
{
    onlineAttendeeAmountIsSet_ = false;
}

int32_t ConferenceInfo::getMultiStreamFlag() const
{
    return multiStreamFlag_;
}

void ConferenceInfo::setMultiStreamFlag(int32_t value)
{
    multiStreamFlag_ = value;
    multiStreamFlagIsSet_ = true;
}

bool ConferenceInfo::multiStreamFlagIsSet() const
{
    return multiStreamFlagIsSet_;
}

void ConferenceInfo::unsetmultiStreamFlag()
{
    multiStreamFlagIsSet_ = false;
}

std::string ConferenceInfo::getConfMode() const
{
    return confMode_;
}

void ConferenceInfo::setConfMode(const std::string& value)
{
    confMode_ = value;
    confModeIsSet_ = true;
}

bool ConferenceInfo::confModeIsSet() const
{
    return confModeIsSet_;
}

void ConferenceInfo::unsetconfMode()
{
    confModeIsSet_ = false;
}

bool ConferenceInfo::isScheduleVmr() const
{
    return scheduleVmr_;
}

void ConferenceInfo::setScheduleVmr(bool value)
{
    scheduleVmr_ = value;
    scheduleVmrIsSet_ = true;
}

bool ConferenceInfo::scheduleVmrIsSet() const
{
    return scheduleVmrIsSet_;
}

void ConferenceInfo::unsetscheduleVmr()
{
    scheduleVmrIsSet_ = false;
}

int32_t ConferenceInfo::getConcurrentParticipants() const
{
    return concurrentParticipants_;
}

void ConferenceInfo::setConcurrentParticipants(int32_t value)
{
    concurrentParticipants_ = value;
    concurrentParticipantsIsSet_ = true;
}

bool ConferenceInfo::concurrentParticipantsIsSet() const
{
    return concurrentParticipantsIsSet_;
}

void ConferenceInfo::unsetconcurrentParticipants()
{
    concurrentParticipantsIsSet_ = false;
}

bool ConferenceInfo::isSupportSimultaneousInterpretation() const
{
    return supportSimultaneousInterpretation_;
}

void ConferenceInfo::setSupportSimultaneousInterpretation(bool value)
{
    supportSimultaneousInterpretation_ = value;
    supportSimultaneousInterpretationIsSet_ = true;
}

bool ConferenceInfo::supportSimultaneousInterpretationIsSet() const
{
    return supportSimultaneousInterpretationIsSet_;
}

void ConferenceInfo::unsetsupportSimultaneousInterpretation()
{
    supportSimultaneousInterpretationIsSet_ = false;
}

MultiPicDisplayDO ConferenceInfo::getPicDisplay() const
{
    return picDisplay_;
}

void ConferenceInfo::setPicDisplay(const MultiPicDisplayDO& value)
{
    picDisplay_ = value;
    picDisplayIsSet_ = true;
}

bool ConferenceInfo::picDisplayIsSet() const
{
    return picDisplayIsSet_;
}

void ConferenceInfo::unsetpicDisplay()
{
    picDisplayIsSet_ = false;
}

std::vector<CycleSubConf>& ConferenceInfo::getSubConfs()
{
    return subConfs_;
}

void ConferenceInfo::setSubConfs(const std::vector<CycleSubConf>& value)
{
    subConfs_ = value;
    subConfsIsSet_ = true;
}

bool ConferenceInfo::subConfsIsSet() const
{
    return subConfsIsSet_;
}

void ConferenceInfo::unsetsubConfs()
{
    subConfsIsSet_ = false;
}

std::string ConferenceInfo::getCycleSubConfID() const
{
    return cycleSubConfID_;
}

void ConferenceInfo::setCycleSubConfID(const std::string& value)
{
    cycleSubConfID_ = value;
    cycleSubConfIDIsSet_ = true;
}

bool ConferenceInfo::cycleSubConfIDIsSet() const
{
    return cycleSubConfIDIsSet_;
}

void ConferenceInfo::unsetcycleSubConfID()
{
    cycleSubConfIDIsSet_ = false;
}

}
}
}
}
}


