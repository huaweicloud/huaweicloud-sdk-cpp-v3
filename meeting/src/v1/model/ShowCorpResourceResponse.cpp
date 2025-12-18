

#include "huaweicloud/meeting/v1/model/ShowCorpResourceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowCorpResourceResponse::ShowCorpResourceResponse()
{
    te1080pHardCountIsSet_ = false;
    te720pHardCountIsSet_ = false;
    teSoftCountIsSet_ = false;
    roomCountIsSet_ = false;
    recordCapabilityIsSet_ = false;
    confCallCountIsSet_ = false;
    liveCountIsSet_ = false;
    thirdPartyHardCountIsSet_ = false;
    hwVisionCountIsSet_ = false;
    ideaHubCountIsSet_ = false;
    vmrIsSet_ = false;
    enablePstn_ = false;
    enablePstnIsSet_ = false;
    enableSMS_ = false;
    enableSMSIsSet_ = false;
    enableHybridCloud_ = false;
    enableHybridCloudIsSet_ = false;
    enableCloudDisk_ = false;
    enableCloudDiskIsSet_ = false;
    enableUc_ = false;
    enableUcIsSet_ = false;
    enableAiMinutes_ = false;
    enableAiMinutesIsSet_ = false;
    singleConfCallCount_ = 0;
    singleConfCallCountIsSet_ = false;
    confLength_ = 0;
    confLengthIsSet_ = false;
}

ShowCorpResourceResponse::~ShowCorpResourceResponse() = default;

void ShowCorpResourceResponse::validate()
{
}

web::json::value ShowCorpResourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(te1080pHardCountIsSet_) {
        val[utility::conversions::to_string_t("te1080pHardCount")] = ModelBase::toJson(te1080pHardCount_);
    }
    if(te720pHardCountIsSet_) {
        val[utility::conversions::to_string_t("te720pHardCount")] = ModelBase::toJson(te720pHardCount_);
    }
    if(teSoftCountIsSet_) {
        val[utility::conversions::to_string_t("teSoftCount")] = ModelBase::toJson(teSoftCount_);
    }
    if(roomCountIsSet_) {
        val[utility::conversions::to_string_t("roomCount")] = ModelBase::toJson(roomCount_);
    }
    if(recordCapabilityIsSet_) {
        val[utility::conversions::to_string_t("recordCapability")] = ModelBase::toJson(recordCapability_);
    }
    if(confCallCountIsSet_) {
        val[utility::conversions::to_string_t("confCallCount")] = ModelBase::toJson(confCallCount_);
    }
    if(liveCountIsSet_) {
        val[utility::conversions::to_string_t("liveCount")] = ModelBase::toJson(liveCount_);
    }
    if(thirdPartyHardCountIsSet_) {
        val[utility::conversions::to_string_t("thirdPartyHardCount")] = ModelBase::toJson(thirdPartyHardCount_);
    }
    if(hwVisionCountIsSet_) {
        val[utility::conversions::to_string_t("hwVisionCount")] = ModelBase::toJson(hwVisionCount_);
    }
    if(ideaHubCountIsSet_) {
        val[utility::conversions::to_string_t("ideaHubCount")] = ModelBase::toJson(ideaHubCount_);
    }
    if(vmrIsSet_) {
        val[utility::conversions::to_string_t("vmr")] = ModelBase::toJson(vmr_);
    }
    if(enablePstnIsSet_) {
        val[utility::conversions::to_string_t("enablePstn")] = ModelBase::toJson(enablePstn_);
    }
    if(enableSMSIsSet_) {
        val[utility::conversions::to_string_t("enableSMS")] = ModelBase::toJson(enableSMS_);
    }
    if(enableHybridCloudIsSet_) {
        val[utility::conversions::to_string_t("enableHybridCloud")] = ModelBase::toJson(enableHybridCloud_);
    }
    if(enableCloudDiskIsSet_) {
        val[utility::conversions::to_string_t("enableCloudDisk")] = ModelBase::toJson(enableCloudDisk_);
    }
    if(enableUcIsSet_) {
        val[utility::conversions::to_string_t("enableUc")] = ModelBase::toJson(enableUc_);
    }
    if(enableAiMinutesIsSet_) {
        val[utility::conversions::to_string_t("enableAiMinutes")] = ModelBase::toJson(enableAiMinutes_);
    }
    if(singleConfCallCountIsSet_) {
        val[utility::conversions::to_string_t("singleConfCallCount")] = ModelBase::toJson(singleConfCallCount_);
    }
    if(confLengthIsSet_) {
        val[utility::conversions::to_string_t("confLength")] = ModelBase::toJson(confLength_);
    }

    return val;
}
bool ShowCorpResourceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("te1080pHardCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("te1080pHardCount"));
        if(!fieldValue.is_null())
        {
            ResDetailDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTe1080pHardCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("te720pHardCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("te720pHardCount"));
        if(!fieldValue.is_null())
        {
            ResDetailDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTe720pHardCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("teSoftCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("teSoftCount"));
        if(!fieldValue.is_null())
        {
            ResDetailDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTeSoftCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roomCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roomCount"));
        if(!fieldValue.is_null())
        {
            ResDetailDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recordCapability"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordCapability"));
        if(!fieldValue.is_null())
        {
            ResDetailDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordCapability(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confCallCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confCallCount"));
        if(!fieldValue.is_null())
        {
            ResDetailDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfCallCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("liveCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("liveCount"));
        if(!fieldValue.is_null())
        {
            ResDetailDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thirdPartyHardCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thirdPartyHardCount"));
        if(!fieldValue.is_null())
        {
            ResDetailDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThirdPartyHardCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hwVisionCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hwVisionCount"));
        if(!fieldValue.is_null())
        {
            ResDetailDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwVisionCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ideaHubCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ideaHubCount"));
        if(!fieldValue.is_null())
        {
            ResDetailDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdeaHubCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmr"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryVmrPkgResResultDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enablePstn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enablePstn"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnablePstn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableSMS"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableSMS"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSMS(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableHybridCloud"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableHybridCloud"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableHybridCloud(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableCloudDisk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableCloudDisk"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableCloudDisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableUc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableUc"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableUc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableAiMinutes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableAiMinutes"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableAiMinutes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("singleConfCallCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("singleConfCallCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSingleConfCallCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confLength"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confLength"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfLength(refVal);
        }
    }
    return ok;
}


ResDetailDTO ShowCorpResourceResponse::getTe1080pHardCount() const
{
    return te1080pHardCount_;
}

void ShowCorpResourceResponse::setTe1080pHardCount(const ResDetailDTO& value)
{
    te1080pHardCount_ = value;
    te1080pHardCountIsSet_ = true;
}

bool ShowCorpResourceResponse::te1080pHardCountIsSet() const
{
    return te1080pHardCountIsSet_;
}

void ShowCorpResourceResponse::unsette1080pHardCount()
{
    te1080pHardCountIsSet_ = false;
}

ResDetailDTO ShowCorpResourceResponse::getTe720pHardCount() const
{
    return te720pHardCount_;
}

void ShowCorpResourceResponse::setTe720pHardCount(const ResDetailDTO& value)
{
    te720pHardCount_ = value;
    te720pHardCountIsSet_ = true;
}

bool ShowCorpResourceResponse::te720pHardCountIsSet() const
{
    return te720pHardCountIsSet_;
}

void ShowCorpResourceResponse::unsette720pHardCount()
{
    te720pHardCountIsSet_ = false;
}

ResDetailDTO ShowCorpResourceResponse::getTeSoftCount() const
{
    return teSoftCount_;
}

void ShowCorpResourceResponse::setTeSoftCount(const ResDetailDTO& value)
{
    teSoftCount_ = value;
    teSoftCountIsSet_ = true;
}

bool ShowCorpResourceResponse::teSoftCountIsSet() const
{
    return teSoftCountIsSet_;
}

void ShowCorpResourceResponse::unsetteSoftCount()
{
    teSoftCountIsSet_ = false;
}

ResDetailDTO ShowCorpResourceResponse::getRoomCount() const
{
    return roomCount_;
}

void ShowCorpResourceResponse::setRoomCount(const ResDetailDTO& value)
{
    roomCount_ = value;
    roomCountIsSet_ = true;
}

bool ShowCorpResourceResponse::roomCountIsSet() const
{
    return roomCountIsSet_;
}

void ShowCorpResourceResponse::unsetroomCount()
{
    roomCountIsSet_ = false;
}

ResDetailDTO ShowCorpResourceResponse::getRecordCapability() const
{
    return recordCapability_;
}

void ShowCorpResourceResponse::setRecordCapability(const ResDetailDTO& value)
{
    recordCapability_ = value;
    recordCapabilityIsSet_ = true;
}

bool ShowCorpResourceResponse::recordCapabilityIsSet() const
{
    return recordCapabilityIsSet_;
}

void ShowCorpResourceResponse::unsetrecordCapability()
{
    recordCapabilityIsSet_ = false;
}

ResDetailDTO ShowCorpResourceResponse::getConfCallCount() const
{
    return confCallCount_;
}

void ShowCorpResourceResponse::setConfCallCount(const ResDetailDTO& value)
{
    confCallCount_ = value;
    confCallCountIsSet_ = true;
}

bool ShowCorpResourceResponse::confCallCountIsSet() const
{
    return confCallCountIsSet_;
}

void ShowCorpResourceResponse::unsetconfCallCount()
{
    confCallCountIsSet_ = false;
}

ResDetailDTO ShowCorpResourceResponse::getLiveCount() const
{
    return liveCount_;
}

void ShowCorpResourceResponse::setLiveCount(const ResDetailDTO& value)
{
    liveCount_ = value;
    liveCountIsSet_ = true;
}

bool ShowCorpResourceResponse::liveCountIsSet() const
{
    return liveCountIsSet_;
}

void ShowCorpResourceResponse::unsetliveCount()
{
    liveCountIsSet_ = false;
}

ResDetailDTO ShowCorpResourceResponse::getThirdPartyHardCount() const
{
    return thirdPartyHardCount_;
}

void ShowCorpResourceResponse::setThirdPartyHardCount(const ResDetailDTO& value)
{
    thirdPartyHardCount_ = value;
    thirdPartyHardCountIsSet_ = true;
}

bool ShowCorpResourceResponse::thirdPartyHardCountIsSet() const
{
    return thirdPartyHardCountIsSet_;
}

void ShowCorpResourceResponse::unsetthirdPartyHardCount()
{
    thirdPartyHardCountIsSet_ = false;
}

ResDetailDTO ShowCorpResourceResponse::getHwVisionCount() const
{
    return hwVisionCount_;
}

void ShowCorpResourceResponse::setHwVisionCount(const ResDetailDTO& value)
{
    hwVisionCount_ = value;
    hwVisionCountIsSet_ = true;
}

bool ShowCorpResourceResponse::hwVisionCountIsSet() const
{
    return hwVisionCountIsSet_;
}

void ShowCorpResourceResponse::unsethwVisionCount()
{
    hwVisionCountIsSet_ = false;
}

ResDetailDTO ShowCorpResourceResponse::getIdeaHubCount() const
{
    return ideaHubCount_;
}

void ShowCorpResourceResponse::setIdeaHubCount(const ResDetailDTO& value)
{
    ideaHubCount_ = value;
    ideaHubCountIsSet_ = true;
}

bool ShowCorpResourceResponse::ideaHubCountIsSet() const
{
    return ideaHubCountIsSet_;
}

void ShowCorpResourceResponse::unsetideaHubCount()
{
    ideaHubCountIsSet_ = false;
}

std::vector<QueryVmrPkgResResultDTO>& ShowCorpResourceResponse::getVmr()
{
    return vmr_;
}

void ShowCorpResourceResponse::setVmr(const std::vector<QueryVmrPkgResResultDTO>& value)
{
    vmr_ = value;
    vmrIsSet_ = true;
}

bool ShowCorpResourceResponse::vmrIsSet() const
{
    return vmrIsSet_;
}

void ShowCorpResourceResponse::unsetvmr()
{
    vmrIsSet_ = false;
}

bool ShowCorpResourceResponse::isEnablePstn() const
{
    return enablePstn_;
}

void ShowCorpResourceResponse::setEnablePstn(bool value)
{
    enablePstn_ = value;
    enablePstnIsSet_ = true;
}

bool ShowCorpResourceResponse::enablePstnIsSet() const
{
    return enablePstnIsSet_;
}

void ShowCorpResourceResponse::unsetenablePstn()
{
    enablePstnIsSet_ = false;
}

bool ShowCorpResourceResponse::isEnableSMS() const
{
    return enableSMS_;
}

void ShowCorpResourceResponse::setEnableSMS(bool value)
{
    enableSMS_ = value;
    enableSMSIsSet_ = true;
}

bool ShowCorpResourceResponse::enableSMSIsSet() const
{
    return enableSMSIsSet_;
}

void ShowCorpResourceResponse::unsetenableSMS()
{
    enableSMSIsSet_ = false;
}

bool ShowCorpResourceResponse::isEnableHybridCloud() const
{
    return enableHybridCloud_;
}

void ShowCorpResourceResponse::setEnableHybridCloud(bool value)
{
    enableHybridCloud_ = value;
    enableHybridCloudIsSet_ = true;
}

bool ShowCorpResourceResponse::enableHybridCloudIsSet() const
{
    return enableHybridCloudIsSet_;
}

void ShowCorpResourceResponse::unsetenableHybridCloud()
{
    enableHybridCloudIsSet_ = false;
}

bool ShowCorpResourceResponse::isEnableCloudDisk() const
{
    return enableCloudDisk_;
}

void ShowCorpResourceResponse::setEnableCloudDisk(bool value)
{
    enableCloudDisk_ = value;
    enableCloudDiskIsSet_ = true;
}

bool ShowCorpResourceResponse::enableCloudDiskIsSet() const
{
    return enableCloudDiskIsSet_;
}

void ShowCorpResourceResponse::unsetenableCloudDisk()
{
    enableCloudDiskIsSet_ = false;
}

bool ShowCorpResourceResponse::isEnableUc() const
{
    return enableUc_;
}

void ShowCorpResourceResponse::setEnableUc(bool value)
{
    enableUc_ = value;
    enableUcIsSet_ = true;
}

bool ShowCorpResourceResponse::enableUcIsSet() const
{
    return enableUcIsSet_;
}

void ShowCorpResourceResponse::unsetenableUc()
{
    enableUcIsSet_ = false;
}

bool ShowCorpResourceResponse::isEnableAiMinutes() const
{
    return enableAiMinutes_;
}

void ShowCorpResourceResponse::setEnableAiMinutes(bool value)
{
    enableAiMinutes_ = value;
    enableAiMinutesIsSet_ = true;
}

bool ShowCorpResourceResponse::enableAiMinutesIsSet() const
{
    return enableAiMinutesIsSet_;
}

void ShowCorpResourceResponse::unsetenableAiMinutes()
{
    enableAiMinutesIsSet_ = false;
}

int32_t ShowCorpResourceResponse::getSingleConfCallCount() const
{
    return singleConfCallCount_;
}

void ShowCorpResourceResponse::setSingleConfCallCount(int32_t value)
{
    singleConfCallCount_ = value;
    singleConfCallCountIsSet_ = true;
}

bool ShowCorpResourceResponse::singleConfCallCountIsSet() const
{
    return singleConfCallCountIsSet_;
}

void ShowCorpResourceResponse::unsetsingleConfCallCount()
{
    singleConfCallCountIsSet_ = false;
}

int32_t ShowCorpResourceResponse::getConfLength() const
{
    return confLength_;
}

void ShowCorpResourceResponse::setConfLength(int32_t value)
{
    confLength_ = value;
    confLengthIsSet_ = true;
}

bool ShowCorpResourceResponse::confLengthIsSet() const
{
    return confLengthIsSet_;
}

void ShowCorpResourceResponse::unsetconfLength()
{
    confLengthIsSet_ = false;
}

}
}
}
}
}


