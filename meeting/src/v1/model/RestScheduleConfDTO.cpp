

#include "huaweicloud/meeting/v1/model/RestScheduleConfDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestScheduleConfDTO::RestScheduleConfDTO()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    length_ = 0;
    lengthIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    mediaTypes_ = "";
    mediaTypesIsSet_ = false;
    groupuri_ = "";
    groupuriIsSet_ = false;
    attendeesIsSet_ = false;
    isAutoRecord_ = 0;
    isAutoRecordIsSet_ = false;
    encryptMode_ = 0;
    encryptModeIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    timeZoneID_ = "";
    timeZoneIDIsSet_ = false;
    recordType_ = 0;
    recordTypeIsSet_ = false;
    liveAddress_ = "";
    liveAddressIsSet_ = false;
    auxAddress_ = "";
    auxAddressIsSet_ = false;
    recordAuxStream_ = 0;
    recordAuxStreamIsSet_ = false;
    confConfigInfoIsSet_ = false;
    recordAuthType_ = 0;
    recordAuthTypeIsSet_ = false;
    vmrFlag_ = 0;
    vmrFlagIsSet_ = false;
    cycleParamsIsSet_ = false;
    vmrID_ = "";
    vmrIDIsSet_ = false;
    concurrentParticipants_ = 0;
    concurrentParticipantsIsSet_ = false;
    supportSimultaneousInterpretation_ = false;
    supportSimultaneousInterpretationIsSet_ = false;
    confResType_ = 0;
    confResTypeIsSet_ = false;
}

RestScheduleConfDTO::~RestScheduleConfDTO() = default;

void RestScheduleConfDTO::validate()
{
}

web::json::value RestScheduleConfDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(lengthIsSet_) {
        val[utility::conversions::to_string_t("length")] = ModelBase::toJson(length_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(mediaTypesIsSet_) {
        val[utility::conversions::to_string_t("mediaTypes")] = ModelBase::toJson(mediaTypes_);
    }
    if(groupuriIsSet_) {
        val[utility::conversions::to_string_t("groupuri")] = ModelBase::toJson(groupuri_);
    }
    if(attendeesIsSet_) {
        val[utility::conversions::to_string_t("attendees")] = ModelBase::toJson(attendees_);
    }
    if(isAutoRecordIsSet_) {
        val[utility::conversions::to_string_t("isAutoRecord")] = ModelBase::toJson(isAutoRecord_);
    }
    if(encryptModeIsSet_) {
        val[utility::conversions::to_string_t("encryptMode")] = ModelBase::toJson(encryptMode_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(timeZoneIDIsSet_) {
        val[utility::conversions::to_string_t("timeZoneID")] = ModelBase::toJson(timeZoneID_);
    }
    if(recordTypeIsSet_) {
        val[utility::conversions::to_string_t("recordType")] = ModelBase::toJson(recordType_);
    }
    if(liveAddressIsSet_) {
        val[utility::conversions::to_string_t("liveAddress")] = ModelBase::toJson(liveAddress_);
    }
    if(auxAddressIsSet_) {
        val[utility::conversions::to_string_t("auxAddress")] = ModelBase::toJson(auxAddress_);
    }
    if(recordAuxStreamIsSet_) {
        val[utility::conversions::to_string_t("recordAuxStream")] = ModelBase::toJson(recordAuxStream_);
    }
    if(confConfigInfoIsSet_) {
        val[utility::conversions::to_string_t("confConfigInfo")] = ModelBase::toJson(confConfigInfo_);
    }
    if(recordAuthTypeIsSet_) {
        val[utility::conversions::to_string_t("recordAuthType")] = ModelBase::toJson(recordAuthType_);
    }
    if(vmrFlagIsSet_) {
        val[utility::conversions::to_string_t("vmrFlag")] = ModelBase::toJson(vmrFlag_);
    }
    if(cycleParamsIsSet_) {
        val[utility::conversions::to_string_t("cycleParams")] = ModelBase::toJson(cycleParams_);
    }
    if(vmrIDIsSet_) {
        val[utility::conversions::to_string_t("vmrID")] = ModelBase::toJson(vmrID_);
    }
    if(concurrentParticipantsIsSet_) {
        val[utility::conversions::to_string_t("concurrentParticipants")] = ModelBase::toJson(concurrentParticipants_);
    }
    if(supportSimultaneousInterpretationIsSet_) {
        val[utility::conversions::to_string_t("supportSimultaneousInterpretation")] = ModelBase::toJson(supportSimultaneousInterpretation_);
    }
    if(confResTypeIsSet_) {
        val[utility::conversions::to_string_t("confResType")] = ModelBase::toJson(confResType_);
    }

    return val;
}
bool RestScheduleConfDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLength(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("mediaTypes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mediaTypes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMediaTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groupuri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groupuri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupuri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attendees"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attendees"));
        if(!fieldValue.is_null())
        {
            std::vector<RestAttendeeDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttendees(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("encryptMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryptMode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("timeZoneID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeZoneID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZoneID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("liveAddress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("liveAddress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveAddress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("recordAuxStream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordAuxStream"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordAuxStream(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("recordAuthType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordAuthType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordAuthType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cycleParams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cycleParams"));
        if(!fieldValue.is_null())
        {
            CycleParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCycleParams(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("confResType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confResType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfResType(refVal);
        }
    }
    return ok;
}


std::string RestScheduleConfDTO::getStartTime() const
{
    return startTime_;
}

void RestScheduleConfDTO::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool RestScheduleConfDTO::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void RestScheduleConfDTO::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t RestScheduleConfDTO::getLength() const
{
    return length_;
}

void RestScheduleConfDTO::setLength(int32_t value)
{
    length_ = value;
    lengthIsSet_ = true;
}

bool RestScheduleConfDTO::lengthIsSet() const
{
    return lengthIsSet_;
}

void RestScheduleConfDTO::unsetlength()
{
    lengthIsSet_ = false;
}

std::string RestScheduleConfDTO::getSubject() const
{
    return subject_;
}

void RestScheduleConfDTO::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool RestScheduleConfDTO::subjectIsSet() const
{
    return subjectIsSet_;
}

void RestScheduleConfDTO::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string RestScheduleConfDTO::getMediaTypes() const
{
    return mediaTypes_;
}

void RestScheduleConfDTO::setMediaTypes(const std::string& value)
{
    mediaTypes_ = value;
    mediaTypesIsSet_ = true;
}

bool RestScheduleConfDTO::mediaTypesIsSet() const
{
    return mediaTypesIsSet_;
}

void RestScheduleConfDTO::unsetmediaTypes()
{
    mediaTypesIsSet_ = false;
}

std::string RestScheduleConfDTO::getGroupuri() const
{
    return groupuri_;
}

void RestScheduleConfDTO::setGroupuri(const std::string& value)
{
    groupuri_ = value;
    groupuriIsSet_ = true;
}

bool RestScheduleConfDTO::groupuriIsSet() const
{
    return groupuriIsSet_;
}

void RestScheduleConfDTO::unsetgroupuri()
{
    groupuriIsSet_ = false;
}

std::vector<RestAttendeeDTO>& RestScheduleConfDTO::getAttendees()
{
    return attendees_;
}

void RestScheduleConfDTO::setAttendees(const std::vector<RestAttendeeDTO>& value)
{
    attendees_ = value;
    attendeesIsSet_ = true;
}

bool RestScheduleConfDTO::attendeesIsSet() const
{
    return attendeesIsSet_;
}

void RestScheduleConfDTO::unsetattendees()
{
    attendeesIsSet_ = false;
}

int32_t RestScheduleConfDTO::getIsAutoRecord() const
{
    return isAutoRecord_;
}

void RestScheduleConfDTO::setIsAutoRecord(int32_t value)
{
    isAutoRecord_ = value;
    isAutoRecordIsSet_ = true;
}

bool RestScheduleConfDTO::isAutoRecordIsSet() const
{
    return isAutoRecordIsSet_;
}

void RestScheduleConfDTO::unsetisAutoRecord()
{
    isAutoRecordIsSet_ = false;
}

int32_t RestScheduleConfDTO::getEncryptMode() const
{
    return encryptMode_;
}

void RestScheduleConfDTO::setEncryptMode(int32_t value)
{
    encryptMode_ = value;
    encryptModeIsSet_ = true;
}

bool RestScheduleConfDTO::encryptModeIsSet() const
{
    return encryptModeIsSet_;
}

void RestScheduleConfDTO::unsetencryptMode()
{
    encryptModeIsSet_ = false;
}

std::string RestScheduleConfDTO::getLanguage() const
{
    return language_;
}

void RestScheduleConfDTO::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool RestScheduleConfDTO::languageIsSet() const
{
    return languageIsSet_;
}

void RestScheduleConfDTO::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string RestScheduleConfDTO::getTimeZoneID() const
{
    return timeZoneID_;
}

void RestScheduleConfDTO::setTimeZoneID(const std::string& value)
{
    timeZoneID_ = value;
    timeZoneIDIsSet_ = true;
}

bool RestScheduleConfDTO::timeZoneIDIsSet() const
{
    return timeZoneIDIsSet_;
}

void RestScheduleConfDTO::unsettimeZoneID()
{
    timeZoneIDIsSet_ = false;
}

int32_t RestScheduleConfDTO::getRecordType() const
{
    return recordType_;
}

void RestScheduleConfDTO::setRecordType(int32_t value)
{
    recordType_ = value;
    recordTypeIsSet_ = true;
}

bool RestScheduleConfDTO::recordTypeIsSet() const
{
    return recordTypeIsSet_;
}

void RestScheduleConfDTO::unsetrecordType()
{
    recordTypeIsSet_ = false;
}

std::string RestScheduleConfDTO::getLiveAddress() const
{
    return liveAddress_;
}

void RestScheduleConfDTO::setLiveAddress(const std::string& value)
{
    liveAddress_ = value;
    liveAddressIsSet_ = true;
}

bool RestScheduleConfDTO::liveAddressIsSet() const
{
    return liveAddressIsSet_;
}

void RestScheduleConfDTO::unsetliveAddress()
{
    liveAddressIsSet_ = false;
}

std::string RestScheduleConfDTO::getAuxAddress() const
{
    return auxAddress_;
}

void RestScheduleConfDTO::setAuxAddress(const std::string& value)
{
    auxAddress_ = value;
    auxAddressIsSet_ = true;
}

bool RestScheduleConfDTO::auxAddressIsSet() const
{
    return auxAddressIsSet_;
}

void RestScheduleConfDTO::unsetauxAddress()
{
    auxAddressIsSet_ = false;
}

int32_t RestScheduleConfDTO::getRecordAuxStream() const
{
    return recordAuxStream_;
}

void RestScheduleConfDTO::setRecordAuxStream(int32_t value)
{
    recordAuxStream_ = value;
    recordAuxStreamIsSet_ = true;
}

bool RestScheduleConfDTO::recordAuxStreamIsSet() const
{
    return recordAuxStreamIsSet_;
}

void RestScheduleConfDTO::unsetrecordAuxStream()
{
    recordAuxStreamIsSet_ = false;
}

RestConfConfigDTO RestScheduleConfDTO::getConfConfigInfo() const
{
    return confConfigInfo_;
}

void RestScheduleConfDTO::setConfConfigInfo(const RestConfConfigDTO& value)
{
    confConfigInfo_ = value;
    confConfigInfoIsSet_ = true;
}

bool RestScheduleConfDTO::confConfigInfoIsSet() const
{
    return confConfigInfoIsSet_;
}

void RestScheduleConfDTO::unsetconfConfigInfo()
{
    confConfigInfoIsSet_ = false;
}

int32_t RestScheduleConfDTO::getRecordAuthType() const
{
    return recordAuthType_;
}

void RestScheduleConfDTO::setRecordAuthType(int32_t value)
{
    recordAuthType_ = value;
    recordAuthTypeIsSet_ = true;
}

bool RestScheduleConfDTO::recordAuthTypeIsSet() const
{
    return recordAuthTypeIsSet_;
}

void RestScheduleConfDTO::unsetrecordAuthType()
{
    recordAuthTypeIsSet_ = false;
}

int32_t RestScheduleConfDTO::getVmrFlag() const
{
    return vmrFlag_;
}

void RestScheduleConfDTO::setVmrFlag(int32_t value)
{
    vmrFlag_ = value;
    vmrFlagIsSet_ = true;
}

bool RestScheduleConfDTO::vmrFlagIsSet() const
{
    return vmrFlagIsSet_;
}

void RestScheduleConfDTO::unsetvmrFlag()
{
    vmrFlagIsSet_ = false;
}

CycleParams RestScheduleConfDTO::getCycleParams() const
{
    return cycleParams_;
}

void RestScheduleConfDTO::setCycleParams(const CycleParams& value)
{
    cycleParams_ = value;
    cycleParamsIsSet_ = true;
}

bool RestScheduleConfDTO::cycleParamsIsSet() const
{
    return cycleParamsIsSet_;
}

void RestScheduleConfDTO::unsetcycleParams()
{
    cycleParamsIsSet_ = false;
}

std::string RestScheduleConfDTO::getVmrID() const
{
    return vmrID_;
}

void RestScheduleConfDTO::setVmrID(const std::string& value)
{
    vmrID_ = value;
    vmrIDIsSet_ = true;
}

bool RestScheduleConfDTO::vmrIDIsSet() const
{
    return vmrIDIsSet_;
}

void RestScheduleConfDTO::unsetvmrID()
{
    vmrIDIsSet_ = false;
}

int32_t RestScheduleConfDTO::getConcurrentParticipants() const
{
    return concurrentParticipants_;
}

void RestScheduleConfDTO::setConcurrentParticipants(int32_t value)
{
    concurrentParticipants_ = value;
    concurrentParticipantsIsSet_ = true;
}

bool RestScheduleConfDTO::concurrentParticipantsIsSet() const
{
    return concurrentParticipantsIsSet_;
}

void RestScheduleConfDTO::unsetconcurrentParticipants()
{
    concurrentParticipantsIsSet_ = false;
}

bool RestScheduleConfDTO::isSupportSimultaneousInterpretation() const
{
    return supportSimultaneousInterpretation_;
}

void RestScheduleConfDTO::setSupportSimultaneousInterpretation(bool value)
{
    supportSimultaneousInterpretation_ = value;
    supportSimultaneousInterpretationIsSet_ = true;
}

bool RestScheduleConfDTO::supportSimultaneousInterpretationIsSet() const
{
    return supportSimultaneousInterpretationIsSet_;
}

void RestScheduleConfDTO::unsetsupportSimultaneousInterpretation()
{
    supportSimultaneousInterpretationIsSet_ = false;
}

int32_t RestScheduleConfDTO::getConfResType() const
{
    return confResType_;
}

void RestScheduleConfDTO::setConfResType(int32_t value)
{
    confResType_ = value;
    confResTypeIsSet_ = true;
}

bool RestScheduleConfDTO::confResTypeIsSet() const
{
    return confResTypeIsSet_;
}

void RestScheduleConfDTO::unsetconfResType()
{
    confResTypeIsSet_ = false;
}

}
}
}
}
}


