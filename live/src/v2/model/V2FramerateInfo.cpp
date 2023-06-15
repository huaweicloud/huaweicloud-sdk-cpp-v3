

#include "huaweicloud/live/v2/model/V2FramerateInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




V2FramerateInfo::V2FramerateInfo()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    dataListIsSet_ = false;
}

V2FramerateInfo::~V2FramerateInfo() = default;

void V2FramerateInfo::validate()
{
}

web::json::value V2FramerateInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(dataListIsSet_) {
        val[utility::conversions::to_string_t("data_list")] = ModelBase::toJson(dataList_);
    }

    return val;
}

bool V2FramerateInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publish_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStream(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_list"));
        if(!fieldValue.is_null())
        {
            std::vector<int64_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataList(refVal);
        }
    }
    return ok;
}


std::string V2FramerateInfo::getPublishDomain() const
{
    return publishDomain_;
}

void V2FramerateInfo::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool V2FramerateInfo::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void V2FramerateInfo::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string V2FramerateInfo::getApp() const
{
    return app_;
}

void V2FramerateInfo::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool V2FramerateInfo::appIsSet() const
{
    return appIsSet_;
}

void V2FramerateInfo::unsetapp()
{
    appIsSet_ = false;
}

std::string V2FramerateInfo::getStream() const
{
    return stream_;
}

void V2FramerateInfo::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool V2FramerateInfo::streamIsSet() const
{
    return streamIsSet_;
}

void V2FramerateInfo::unsetstream()
{
    streamIsSet_ = false;
}

std::string V2FramerateInfo::getStartTime() const
{
    return startTime_;
}

void V2FramerateInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool V2FramerateInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void V2FramerateInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string V2FramerateInfo::getEndTime() const
{
    return endTime_;
}

void V2FramerateInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool V2FramerateInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void V2FramerateInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<int64_t>& V2FramerateInfo::getDataList()
{
    return dataList_;
}

void V2FramerateInfo::setDataList(std::vector<int64_t> value)
{
    dataList_ = value;
    dataListIsSet_ = true;
}

bool V2FramerateInfo::dataListIsSet() const
{
    return dataListIsSet_;
}

void V2FramerateInfo::unsetdataList()
{
    dataListIsSet_ = false;
}

}
}
}
}
}


