

#include "huaweicloud/live/v2/model/ListHistoryStreamsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListHistoryStreamsResponse::ListHistoryStreamsResponse()
{
    historyStreamListIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListHistoryStreamsResponse::~ListHistoryStreamsResponse() = default;

void ListHistoryStreamsResponse::validate()
{
}

web::json::value ListHistoryStreamsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(historyStreamListIsSet_) {
        val[utility::conversions::to_string_t("history_stream_list")] = ModelBase::toJson(historyStreamList_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}

bool ListHistoryStreamsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("history_stream_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("history_stream_list"));
        if(!fieldValue.is_null())
        {
            std::vector<HistoryStreamInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistoryStreamList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
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

std::vector<HistoryStreamInfo>& ListHistoryStreamsResponse::getHistoryStreamList()
{
    return historyStreamList_;
}

void ListHistoryStreamsResponse::setHistoryStreamList(const std::vector<HistoryStreamInfo>& value)
{
    historyStreamList_ = value;
    historyStreamListIsSet_ = true;
}

bool ListHistoryStreamsResponse::historyStreamListIsSet() const
{
    return historyStreamListIsSet_;
}

void ListHistoryStreamsResponse::unsethistoryStreamList()
{
    historyStreamListIsSet_ = false;
}

int32_t ListHistoryStreamsResponse::getTotal() const
{
    return total_;
}

void ListHistoryStreamsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListHistoryStreamsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListHistoryStreamsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::string ListHistoryStreamsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListHistoryStreamsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListHistoryStreamsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListHistoryStreamsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


