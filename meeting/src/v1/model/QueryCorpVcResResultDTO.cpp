

#include "huaweicloud/meeting/v1/model/QueryCorpVcResResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryCorpVcResResultDTO::QueryCorpVcResResultDTO()
{
    vmrPkgListIsSet_ = false;
    te1080pHardCount_ = 0;
    te1080pHardCountIsSet_ = false;
    te720pHardCount_ = 0;
    te720pHardCountIsSet_ = false;
    teSoftCount_ = 0;
    teSoftCountIsSet_ = false;
    roomCount_ = 0;
    roomCountIsSet_ = false;
    recordCapability_ = 0;
    recordCapabilityIsSet_ = false;
    confCallCount_ = 0;
    confCallCountIsSet_ = false;
    liveCount_ = 0;
    liveCountIsSet_ = false;
    thirdPartyHardCount_ = 0;
    thirdPartyHardCountIsSet_ = false;
    hwVisionCount_ = 0;
    hwVisionCountIsSet_ = false;
    ideaHubCount_ = 0;
    ideaHubCountIsSet_ = false;
}

QueryCorpVcResResultDTO::~QueryCorpVcResResultDTO() = default;

void QueryCorpVcResResultDTO::validate()
{
}

web::json::value QueryCorpVcResResultDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vmrPkgListIsSet_) {
        val[utility::conversions::to_string_t("vmrPkgList")] = ModelBase::toJson(vmrPkgList_);
    }
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

    return val;
}
bool QueryCorpVcResResultDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vmrPkgList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrPkgList"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryVmrPkgResResultDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrPkgList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("te1080pHardCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("te1080pHardCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTe1080pHardCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("te720pHardCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("te720pHardCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTe720pHardCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("teSoftCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("teSoftCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTeSoftCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roomCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roomCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recordCapability"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordCapability"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordCapability(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confCallCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confCallCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfCallCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("liveCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("liveCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thirdPartyHardCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thirdPartyHardCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThirdPartyHardCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hwVisionCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hwVisionCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwVisionCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ideaHubCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ideaHubCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdeaHubCount(refVal);
        }
    }
    return ok;
}


std::vector<QueryVmrPkgResResultDTO>& QueryCorpVcResResultDTO::getVmrPkgList()
{
    return vmrPkgList_;
}

void QueryCorpVcResResultDTO::setVmrPkgList(const std::vector<QueryVmrPkgResResultDTO>& value)
{
    vmrPkgList_ = value;
    vmrPkgListIsSet_ = true;
}

bool QueryCorpVcResResultDTO::vmrPkgListIsSet() const
{
    return vmrPkgListIsSet_;
}

void QueryCorpVcResResultDTO::unsetvmrPkgList()
{
    vmrPkgListIsSet_ = false;
}

int32_t QueryCorpVcResResultDTO::getTe1080pHardCount() const
{
    return te1080pHardCount_;
}

void QueryCorpVcResResultDTO::setTe1080pHardCount(int32_t value)
{
    te1080pHardCount_ = value;
    te1080pHardCountIsSet_ = true;
}

bool QueryCorpVcResResultDTO::te1080pHardCountIsSet() const
{
    return te1080pHardCountIsSet_;
}

void QueryCorpVcResResultDTO::unsette1080pHardCount()
{
    te1080pHardCountIsSet_ = false;
}

int32_t QueryCorpVcResResultDTO::getTe720pHardCount() const
{
    return te720pHardCount_;
}

void QueryCorpVcResResultDTO::setTe720pHardCount(int32_t value)
{
    te720pHardCount_ = value;
    te720pHardCountIsSet_ = true;
}

bool QueryCorpVcResResultDTO::te720pHardCountIsSet() const
{
    return te720pHardCountIsSet_;
}

void QueryCorpVcResResultDTO::unsette720pHardCount()
{
    te720pHardCountIsSet_ = false;
}

int32_t QueryCorpVcResResultDTO::getTeSoftCount() const
{
    return teSoftCount_;
}

void QueryCorpVcResResultDTO::setTeSoftCount(int32_t value)
{
    teSoftCount_ = value;
    teSoftCountIsSet_ = true;
}

bool QueryCorpVcResResultDTO::teSoftCountIsSet() const
{
    return teSoftCountIsSet_;
}

void QueryCorpVcResResultDTO::unsetteSoftCount()
{
    teSoftCountIsSet_ = false;
}

int32_t QueryCorpVcResResultDTO::getRoomCount() const
{
    return roomCount_;
}

void QueryCorpVcResResultDTO::setRoomCount(int32_t value)
{
    roomCount_ = value;
    roomCountIsSet_ = true;
}

bool QueryCorpVcResResultDTO::roomCountIsSet() const
{
    return roomCountIsSet_;
}

void QueryCorpVcResResultDTO::unsetroomCount()
{
    roomCountIsSet_ = false;
}

int32_t QueryCorpVcResResultDTO::getRecordCapability() const
{
    return recordCapability_;
}

void QueryCorpVcResResultDTO::setRecordCapability(int32_t value)
{
    recordCapability_ = value;
    recordCapabilityIsSet_ = true;
}

bool QueryCorpVcResResultDTO::recordCapabilityIsSet() const
{
    return recordCapabilityIsSet_;
}

void QueryCorpVcResResultDTO::unsetrecordCapability()
{
    recordCapabilityIsSet_ = false;
}

int32_t QueryCorpVcResResultDTO::getConfCallCount() const
{
    return confCallCount_;
}

void QueryCorpVcResResultDTO::setConfCallCount(int32_t value)
{
    confCallCount_ = value;
    confCallCountIsSet_ = true;
}

bool QueryCorpVcResResultDTO::confCallCountIsSet() const
{
    return confCallCountIsSet_;
}

void QueryCorpVcResResultDTO::unsetconfCallCount()
{
    confCallCountIsSet_ = false;
}

int32_t QueryCorpVcResResultDTO::getLiveCount() const
{
    return liveCount_;
}

void QueryCorpVcResResultDTO::setLiveCount(int32_t value)
{
    liveCount_ = value;
    liveCountIsSet_ = true;
}

bool QueryCorpVcResResultDTO::liveCountIsSet() const
{
    return liveCountIsSet_;
}

void QueryCorpVcResResultDTO::unsetliveCount()
{
    liveCountIsSet_ = false;
}

int32_t QueryCorpVcResResultDTO::getThirdPartyHardCount() const
{
    return thirdPartyHardCount_;
}

void QueryCorpVcResResultDTO::setThirdPartyHardCount(int32_t value)
{
    thirdPartyHardCount_ = value;
    thirdPartyHardCountIsSet_ = true;
}

bool QueryCorpVcResResultDTO::thirdPartyHardCountIsSet() const
{
    return thirdPartyHardCountIsSet_;
}

void QueryCorpVcResResultDTO::unsetthirdPartyHardCount()
{
    thirdPartyHardCountIsSet_ = false;
}

int32_t QueryCorpVcResResultDTO::getHwVisionCount() const
{
    return hwVisionCount_;
}

void QueryCorpVcResResultDTO::setHwVisionCount(int32_t value)
{
    hwVisionCount_ = value;
    hwVisionCountIsSet_ = true;
}

bool QueryCorpVcResResultDTO::hwVisionCountIsSet() const
{
    return hwVisionCountIsSet_;
}

void QueryCorpVcResResultDTO::unsethwVisionCount()
{
    hwVisionCountIsSet_ = false;
}

int32_t QueryCorpVcResResultDTO::getIdeaHubCount() const
{
    return ideaHubCount_;
}

void QueryCorpVcResResultDTO::setIdeaHubCount(int32_t value)
{
    ideaHubCount_ = value;
    ideaHubCountIsSet_ = true;
}

bool QueryCorpVcResResultDTO::ideaHubCountIsSet() const
{
    return ideaHubCountIsSet_;
}

void QueryCorpVcResResultDTO::unsetideaHubCount()
{
    ideaHubCountIsSet_ = false;
}

}
}
}
}
}


