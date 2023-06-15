

#include "huaweicloud/live/v1/model/ListLiveStreamsOnlineResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListLiveStreamsOnlineResponse::ListLiveStreamsOnlineResponse()
{
    totalPage_ = 0L;
    totalPageIsSet_ = false;
    totalNum_ = 0L;
    totalNumIsSet_ = false;
    offset_ = 0L;
    offsetIsSet_ = false;
    limit_ = 0L;
    limitIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    streamsIsSet_ = false;
}

ListLiveStreamsOnlineResponse::~ListLiveStreamsOnlineResponse() = default;

void ListLiveStreamsOnlineResponse::validate()
{
}

web::json::value ListLiveStreamsOnlineResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalPageIsSet_) {
        val[utility::conversions::to_string_t("total_page")] = ModelBase::toJson(totalPage_);
    }
    if(totalNumIsSet_) {
        val[utility::conversions::to_string_t("total_num")] = ModelBase::toJson(totalNum_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(streamsIsSet_) {
        val[utility::conversions::to_string_t("streams")] = ModelBase::toJson(streams_);
    }

    return val;
}

bool ListLiveStreamsOnlineResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_page"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("streams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("streams"));
        if(!fieldValue.is_null())
        {
            std::vector<OnlineInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreams(refVal);
        }
    }
    return ok;
}


int64_t ListLiveStreamsOnlineResponse::getTotalPage() const
{
    return totalPage_;
}

void ListLiveStreamsOnlineResponse::setTotalPage(int64_t value)
{
    totalPage_ = value;
    totalPageIsSet_ = true;
}

bool ListLiveStreamsOnlineResponse::totalPageIsSet() const
{
    return totalPageIsSet_;
}

void ListLiveStreamsOnlineResponse::unsettotalPage()
{
    totalPageIsSet_ = false;
}

int64_t ListLiveStreamsOnlineResponse::getTotalNum() const
{
    return totalNum_;
}

void ListLiveStreamsOnlineResponse::setTotalNum(int64_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ListLiveStreamsOnlineResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ListLiveStreamsOnlineResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

int64_t ListLiveStreamsOnlineResponse::getOffset() const
{
    return offset_;
}

void ListLiveStreamsOnlineResponse::setOffset(int64_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLiveStreamsOnlineResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLiveStreamsOnlineResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int64_t ListLiveStreamsOnlineResponse::getLimit() const
{
    return limit_;
}

void ListLiveStreamsOnlineResponse::setLimit(int64_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLiveStreamsOnlineResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListLiveStreamsOnlineResponse::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListLiveStreamsOnlineResponse::getRequestId() const
{
    return requestId_;
}

void ListLiveStreamsOnlineResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListLiveStreamsOnlineResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListLiveStreamsOnlineResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<OnlineInfo>& ListLiveStreamsOnlineResponse::getStreams()
{
    return streams_;
}

void ListLiveStreamsOnlineResponse::setStreams(const std::vector<OnlineInfo>& value)
{
    streams_ = value;
    streamsIsSet_ = true;
}

bool ListLiveStreamsOnlineResponse::streamsIsSet() const
{
    return streamsIsSet_;
}

void ListLiveStreamsOnlineResponse::unsetstreams()
{
    streamsIsSet_ = false;
}

}
}
}
}
}


