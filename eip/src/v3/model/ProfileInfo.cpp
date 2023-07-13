

#include "huaweicloud/eip/v3/model/ProfileInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ProfileInfo::ProfileInfo()
{
    localNetworkPort_ = "";
    localNetworkPortIsSet_ = false;
    standalone_ = false;
    standaloneIsSet_ = false;
    notifyStatus_ = "";
    notifyStatusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    fakeNetworkType_ = false;
    fakeNetworkTypeIsSet_ = false;
    createSource_ = "";
    createSourceIsSet_ = false;
    ecsId_ = "";
    ecsIdIsSet_ = false;
    lockStatus_ = "";
    lockStatusIsSet_ = false;
    freezedStatus_ = "";
    freezedStatusIsSet_ = false;
    bandwithInfoIsSet_ = false;
}

ProfileInfo::~ProfileInfo() = default;

void ProfileInfo::validate()
{
}

web::json::value ProfileInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(localNetworkPortIsSet_) {
        val[utility::conversions::to_string_t("local_network_port")] = ModelBase::toJson(localNetworkPort_);
    }
    if(standaloneIsSet_) {
        val[utility::conversions::to_string_t("standalone")] = ModelBase::toJson(standalone_);
    }
    if(notifyStatusIsSet_) {
        val[utility::conversions::to_string_t("notify_status")] = ModelBase::toJson(notifyStatus_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(fakeNetworkTypeIsSet_) {
        val[utility::conversions::to_string_t("fake_network_type")] = ModelBase::toJson(fakeNetworkType_);
    }
    if(createSourceIsSet_) {
        val[utility::conversions::to_string_t("create_source")] = ModelBase::toJson(createSource_);
    }
    if(ecsIdIsSet_) {
        val[utility::conversions::to_string_t("ecs_id")] = ModelBase::toJson(ecsId_);
    }
    if(lockStatusIsSet_) {
        val[utility::conversions::to_string_t("lock_status")] = ModelBase::toJson(lockStatus_);
    }
    if(freezedStatusIsSet_) {
        val[utility::conversions::to_string_t("freezed_status")] = ModelBase::toJson(freezedStatus_);
    }
    if(bandwithInfoIsSet_) {
        val[utility::conversions::to_string_t("bandwith_info")] = ModelBase::toJson(bandwithInfo_);
    }

    return val;
}

bool ProfileInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("local_network_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("local_network_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalNetworkPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("standalone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("standalone"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStandalone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notify_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notify_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotifyStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fake_network_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fake_network_type"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFakeNetworkType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ecs_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ecs_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEcsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freezed_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freezed_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreezedStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwith_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwith_info"));
        if(!fieldValue.is_null())
        {
            BandwidthInfoResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwithInfo(refVal);
        }
    }
    return ok;
}

std::string ProfileInfo::getLocalNetworkPort() const
{
    return localNetworkPort_;
}

void ProfileInfo::setLocalNetworkPort(const std::string& value)
{
    localNetworkPort_ = value;
    localNetworkPortIsSet_ = true;
}

bool ProfileInfo::localNetworkPortIsSet() const
{
    return localNetworkPortIsSet_;
}

void ProfileInfo::unsetlocalNetworkPort()
{
    localNetworkPortIsSet_ = false;
}

bool ProfileInfo::isStandalone() const
{
    return standalone_;
}

void ProfileInfo::setStandalone(bool value)
{
    standalone_ = value;
    standaloneIsSet_ = true;
}

bool ProfileInfo::standaloneIsSet() const
{
    return standaloneIsSet_;
}

void ProfileInfo::unsetstandalone()
{
    standaloneIsSet_ = false;
}

std::string ProfileInfo::getNotifyStatus() const
{
    return notifyStatus_;
}

void ProfileInfo::setNotifyStatus(const std::string& value)
{
    notifyStatus_ = value;
    notifyStatusIsSet_ = true;
}

bool ProfileInfo::notifyStatusIsSet() const
{
    return notifyStatusIsSet_;
}

void ProfileInfo::unsetnotifyStatus()
{
    notifyStatusIsSet_ = false;
}

std::string ProfileInfo::getCreateTime() const
{
    return createTime_;
}

void ProfileInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ProfileInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ProfileInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

bool ProfileInfo::isFakeNetworkType() const
{
    return fakeNetworkType_;
}

void ProfileInfo::setFakeNetworkType(bool value)
{
    fakeNetworkType_ = value;
    fakeNetworkTypeIsSet_ = true;
}

bool ProfileInfo::fakeNetworkTypeIsSet() const
{
    return fakeNetworkTypeIsSet_;
}

void ProfileInfo::unsetfakeNetworkType()
{
    fakeNetworkTypeIsSet_ = false;
}

std::string ProfileInfo::getCreateSource() const
{
    return createSource_;
}

void ProfileInfo::setCreateSource(const std::string& value)
{
    createSource_ = value;
    createSourceIsSet_ = true;
}

bool ProfileInfo::createSourceIsSet() const
{
    return createSourceIsSet_;
}

void ProfileInfo::unsetcreateSource()
{
    createSourceIsSet_ = false;
}

std::string ProfileInfo::getEcsId() const
{
    return ecsId_;
}

void ProfileInfo::setEcsId(const std::string& value)
{
    ecsId_ = value;
    ecsIdIsSet_ = true;
}

bool ProfileInfo::ecsIdIsSet() const
{
    return ecsIdIsSet_;
}

void ProfileInfo::unsetecsId()
{
    ecsIdIsSet_ = false;
}

std::string ProfileInfo::getLockStatus() const
{
    return lockStatus_;
}

void ProfileInfo::setLockStatus(const std::string& value)
{
    lockStatus_ = value;
    lockStatusIsSet_ = true;
}

bool ProfileInfo::lockStatusIsSet() const
{
    return lockStatusIsSet_;
}

void ProfileInfo::unsetlockStatus()
{
    lockStatusIsSet_ = false;
}

std::string ProfileInfo::getFreezedStatus() const
{
    return freezedStatus_;
}

void ProfileInfo::setFreezedStatus(const std::string& value)
{
    freezedStatus_ = value;
    freezedStatusIsSet_ = true;
}

bool ProfileInfo::freezedStatusIsSet() const
{
    return freezedStatusIsSet_;
}

void ProfileInfo::unsetfreezedStatus()
{
    freezedStatusIsSet_ = false;
}

BandwidthInfoResp ProfileInfo::getBandwithInfo() const
{
    return bandwithInfo_;
}

void ProfileInfo::setBandwithInfo(const BandwidthInfoResp& value)
{
    bandwithInfo_ = value;
    bandwithInfoIsSet_ = true;
}

bool ProfileInfo::bandwithInfoIsSet() const
{
    return bandwithInfoIsSet_;
}

void ProfileInfo::unsetbandwithInfo()
{
    bandwithInfoIsSet_ = false;
}

}
}
}
}
}


