

#include "huaweicloud/meeting/v1/model/ShowSpResourceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowSpResourceResponse::ShowSpResourceResponse()
{
    te1080pHardCountIsSet_ = false;
    te720pHardCountIsSet_ = false;
    teSoftCountIsSet_ = false;
    roomCountIsSet_ = false;
    recordCapabilityIsSet_ = false;
    confCallCountIsSet_ = false;
    liveCountIsSet_ = false;
    corpCountIsSet_ = false;
    thirdPartyHardCountIsSet_ = false;
    hwVisionCountIsSet_ = false;
    ideaHubCountIsSet_ = false;
    enablePstn_ = false;
    enablePstnIsSet_ = false;
    enableSMS_ = false;
    enableSMSIsSet_ = false;
    groupListIsSet_ = false;
}

ShowSpResourceResponse::~ShowSpResourceResponse() = default;

void ShowSpResourceResponse::validate()
{
}

web::json::value ShowSpResourceResponse::toJson() const
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
    if(corpCountIsSet_) {
        val[utility::conversions::to_string_t("corpCount")] = ModelBase::toJson(corpCount_);
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
    if(enablePstnIsSet_) {
        val[utility::conversions::to_string_t("enablePstn")] = ModelBase::toJson(enablePstn_);
    }
    if(enableSMSIsSet_) {
        val[utility::conversions::to_string_t("enableSMS")] = ModelBase::toJson(enableSMS_);
    }
    if(groupListIsSet_) {
        val[utility::conversions::to_string_t("groupList")] = ModelBase::toJson(groupList_);
    }

    return val;
}
bool ShowSpResourceResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("corpCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("corpCount"));
        if(!fieldValue.is_null())
        {
            ResDetailDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCorpCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("groupList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groupList"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryCorpGroupDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupList(refVal);
        }
    }
    return ok;
}


ResDetailDTO ShowSpResourceResponse::getTe1080pHardCount() const
{
    return te1080pHardCount_;
}

void ShowSpResourceResponse::setTe1080pHardCount(const ResDetailDTO& value)
{
    te1080pHardCount_ = value;
    te1080pHardCountIsSet_ = true;
}

bool ShowSpResourceResponse::te1080pHardCountIsSet() const
{
    return te1080pHardCountIsSet_;
}

void ShowSpResourceResponse::unsette1080pHardCount()
{
    te1080pHardCountIsSet_ = false;
}

ResDetailDTO ShowSpResourceResponse::getTe720pHardCount() const
{
    return te720pHardCount_;
}

void ShowSpResourceResponse::setTe720pHardCount(const ResDetailDTO& value)
{
    te720pHardCount_ = value;
    te720pHardCountIsSet_ = true;
}

bool ShowSpResourceResponse::te720pHardCountIsSet() const
{
    return te720pHardCountIsSet_;
}

void ShowSpResourceResponse::unsette720pHardCount()
{
    te720pHardCountIsSet_ = false;
}

ResDetailDTO ShowSpResourceResponse::getTeSoftCount() const
{
    return teSoftCount_;
}

void ShowSpResourceResponse::setTeSoftCount(const ResDetailDTO& value)
{
    teSoftCount_ = value;
    teSoftCountIsSet_ = true;
}

bool ShowSpResourceResponse::teSoftCountIsSet() const
{
    return teSoftCountIsSet_;
}

void ShowSpResourceResponse::unsetteSoftCount()
{
    teSoftCountIsSet_ = false;
}

ResDetailDTO ShowSpResourceResponse::getRoomCount() const
{
    return roomCount_;
}

void ShowSpResourceResponse::setRoomCount(const ResDetailDTO& value)
{
    roomCount_ = value;
    roomCountIsSet_ = true;
}

bool ShowSpResourceResponse::roomCountIsSet() const
{
    return roomCountIsSet_;
}

void ShowSpResourceResponse::unsetroomCount()
{
    roomCountIsSet_ = false;
}

ResDetailDTO ShowSpResourceResponse::getRecordCapability() const
{
    return recordCapability_;
}

void ShowSpResourceResponse::setRecordCapability(const ResDetailDTO& value)
{
    recordCapability_ = value;
    recordCapabilityIsSet_ = true;
}

bool ShowSpResourceResponse::recordCapabilityIsSet() const
{
    return recordCapabilityIsSet_;
}

void ShowSpResourceResponse::unsetrecordCapability()
{
    recordCapabilityIsSet_ = false;
}

ResDetailDTO ShowSpResourceResponse::getConfCallCount() const
{
    return confCallCount_;
}

void ShowSpResourceResponse::setConfCallCount(const ResDetailDTO& value)
{
    confCallCount_ = value;
    confCallCountIsSet_ = true;
}

bool ShowSpResourceResponse::confCallCountIsSet() const
{
    return confCallCountIsSet_;
}

void ShowSpResourceResponse::unsetconfCallCount()
{
    confCallCountIsSet_ = false;
}

ResDetailDTO ShowSpResourceResponse::getLiveCount() const
{
    return liveCount_;
}

void ShowSpResourceResponse::setLiveCount(const ResDetailDTO& value)
{
    liveCount_ = value;
    liveCountIsSet_ = true;
}

bool ShowSpResourceResponse::liveCountIsSet() const
{
    return liveCountIsSet_;
}

void ShowSpResourceResponse::unsetliveCount()
{
    liveCountIsSet_ = false;
}

ResDetailDTO ShowSpResourceResponse::getCorpCount() const
{
    return corpCount_;
}

void ShowSpResourceResponse::setCorpCount(const ResDetailDTO& value)
{
    corpCount_ = value;
    corpCountIsSet_ = true;
}

bool ShowSpResourceResponse::corpCountIsSet() const
{
    return corpCountIsSet_;
}

void ShowSpResourceResponse::unsetcorpCount()
{
    corpCountIsSet_ = false;
}

ResDetailDTO ShowSpResourceResponse::getThirdPartyHardCount() const
{
    return thirdPartyHardCount_;
}

void ShowSpResourceResponse::setThirdPartyHardCount(const ResDetailDTO& value)
{
    thirdPartyHardCount_ = value;
    thirdPartyHardCountIsSet_ = true;
}

bool ShowSpResourceResponse::thirdPartyHardCountIsSet() const
{
    return thirdPartyHardCountIsSet_;
}

void ShowSpResourceResponse::unsetthirdPartyHardCount()
{
    thirdPartyHardCountIsSet_ = false;
}

ResDetailDTO ShowSpResourceResponse::getHwVisionCount() const
{
    return hwVisionCount_;
}

void ShowSpResourceResponse::setHwVisionCount(const ResDetailDTO& value)
{
    hwVisionCount_ = value;
    hwVisionCountIsSet_ = true;
}

bool ShowSpResourceResponse::hwVisionCountIsSet() const
{
    return hwVisionCountIsSet_;
}

void ShowSpResourceResponse::unsethwVisionCount()
{
    hwVisionCountIsSet_ = false;
}

ResDetailDTO ShowSpResourceResponse::getIdeaHubCount() const
{
    return ideaHubCount_;
}

void ShowSpResourceResponse::setIdeaHubCount(const ResDetailDTO& value)
{
    ideaHubCount_ = value;
    ideaHubCountIsSet_ = true;
}

bool ShowSpResourceResponse::ideaHubCountIsSet() const
{
    return ideaHubCountIsSet_;
}

void ShowSpResourceResponse::unsetideaHubCount()
{
    ideaHubCountIsSet_ = false;
}

bool ShowSpResourceResponse::isEnablePstn() const
{
    return enablePstn_;
}

void ShowSpResourceResponse::setEnablePstn(bool value)
{
    enablePstn_ = value;
    enablePstnIsSet_ = true;
}

bool ShowSpResourceResponse::enablePstnIsSet() const
{
    return enablePstnIsSet_;
}

void ShowSpResourceResponse::unsetenablePstn()
{
    enablePstnIsSet_ = false;
}

bool ShowSpResourceResponse::isEnableSMS() const
{
    return enableSMS_;
}

void ShowSpResourceResponse::setEnableSMS(bool value)
{
    enableSMS_ = value;
    enableSMSIsSet_ = true;
}

bool ShowSpResourceResponse::enableSMSIsSet() const
{
    return enableSMSIsSet_;
}

void ShowSpResourceResponse::unsetenableSMS()
{
    enableSMSIsSet_ = false;
}

std::vector<QueryCorpGroupDTO>& ShowSpResourceResponse::getGroupList()
{
    return groupList_;
}

void ShowSpResourceResponse::setGroupList(const std::vector<QueryCorpGroupDTO>& value)
{
    groupList_ = value;
    groupListIsSet_ = true;
}

bool ShowSpResourceResponse::groupListIsSet() const
{
    return groupListIsSet_;
}

void ShowSpResourceResponse::unsetgroupList()
{
    groupListIsSet_ = false;
}

}
}
}
}
}


