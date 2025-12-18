

#include "huaweicloud/meeting/v1/model/PublicationRequestBase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




PublicationRequestBase::PublicationRequestBase()
{
    publishName_ = "";
    publishNameIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    deptListIsSet_ = false;
    deviceListIsSet_ = false;
}

PublicationRequestBase::~PublicationRequestBase() = default;

void PublicationRequestBase::validate()
{
}

web::json::value PublicationRequestBase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publishNameIsSet_) {
        val[utility::conversions::to_string_t("publishName")] = ModelBase::toJson(publishName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }
    if(deptListIsSet_) {
        val[utility::conversions::to_string_t("deptList")] = ModelBase::toJson(deptList_);
    }
    if(deviceListIsSet_) {
        val[utility::conversions::to_string_t("deviceList")] = ModelBase::toJson(deviceList_);
    }

    return val;
}
bool PublicationRequestBase::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publishName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publishName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptList"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deviceList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deviceList"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceList(refVal);
        }
    }
    return ok;
}


std::string PublicationRequestBase::getPublishName() const
{
    return publishName_;
}

void PublicationRequestBase::setPublishName(const std::string& value)
{
    publishName_ = value;
    publishNameIsSet_ = true;
}

bool PublicationRequestBase::publishNameIsSet() const
{
    return publishNameIsSet_;
}

void PublicationRequestBase::unsetpublishName()
{
    publishNameIsSet_ = false;
}

int64_t PublicationRequestBase::getStartTime() const
{
    return startTime_;
}

void PublicationRequestBase::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool PublicationRequestBase::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void PublicationRequestBase::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t PublicationRequestBase::getEndTime() const
{
    return endTime_;
}

void PublicationRequestBase::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool PublicationRequestBase::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void PublicationRequestBase::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& PublicationRequestBase::getDeptList()
{
    return deptList_;
}

void PublicationRequestBase::setDeptList(const std::vector<std::string>& value)
{
    deptList_ = value;
    deptListIsSet_ = true;
}

bool PublicationRequestBase::deptListIsSet() const
{
    return deptListIsSet_;
}

void PublicationRequestBase::unsetdeptList()
{
    deptListIsSet_ = false;
}

std::vector<std::string>& PublicationRequestBase::getDeviceList()
{
    return deviceList_;
}

void PublicationRequestBase::setDeviceList(const std::vector<std::string>& value)
{
    deviceList_ = value;
    deviceListIsSet_ = true;
}

bool PublicationRequestBase::deviceListIsSet() const
{
    return deviceListIsSet_;
}

void PublicationRequestBase::unsetdeviceList()
{
    deviceListIsSet_ = false;
}

}
}
}
}
}


