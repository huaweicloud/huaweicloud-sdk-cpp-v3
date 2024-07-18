

#include "huaweicloud/live/v2/model/ListPlayDomainStreamInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListPlayDomainStreamInfoResponse::ListPlayDomainStreamInfoResponse()
{
    time_ = "";
    timeIsSet_ = false;
    dataListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListPlayDomainStreamInfoResponse::~ListPlayDomainStreamInfoResponse() = default;

void ListPlayDomainStreamInfoResponse::validate()
{
}

web::json::value ListPlayDomainStreamInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(dataListIsSet_) {
        val[utility::conversions::to_string_t("data_list")] = ModelBase::toJson(dataList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListPlayDomainStreamInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_list"));
        if(!fieldValue.is_null())
        {
            std::vector<PlayDomainStreamInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ListPlayDomainStreamInfoResponse::getTime() const
{
    return time_;
}

void ListPlayDomainStreamInfoResponse::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ListPlayDomainStreamInfoResponse::timeIsSet() const
{
    return timeIsSet_;
}

void ListPlayDomainStreamInfoResponse::unsettime()
{
    timeIsSet_ = false;
}

std::vector<PlayDomainStreamInfo>& ListPlayDomainStreamInfoResponse::getDataList()
{
    return dataList_;
}

void ListPlayDomainStreamInfoResponse::setDataList(const std::vector<PlayDomainStreamInfo>& value)
{
    dataList_ = value;
    dataListIsSet_ = true;
}

bool ListPlayDomainStreamInfoResponse::dataListIsSet() const
{
    return dataListIsSet_;
}

void ListPlayDomainStreamInfoResponse::unsetdataList()
{
    dataListIsSet_ = false;
}

std::string ListPlayDomainStreamInfoResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListPlayDomainStreamInfoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListPlayDomainStreamInfoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListPlayDomainStreamInfoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


