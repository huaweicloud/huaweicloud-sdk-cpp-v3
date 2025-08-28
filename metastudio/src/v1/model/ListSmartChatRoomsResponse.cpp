

#include "huaweicloud/metastudio/v1/model/ListSmartChatRoomsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListSmartChatRoomsResponse::ListSmartChatRoomsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    countConcurrency_ = 0;
    countConcurrencyIsSet_ = false;
    countClientNums_ = 0;
    countClientNumsIsSet_ = false;
    countClientNumsToken_ = 0;
    countClientNumsTokenIsSet_ = false;
    smartChatRoomsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListSmartChatRoomsResponse::~ListSmartChatRoomsResponse() = default;

void ListSmartChatRoomsResponse::validate()
{
}

web::json::value ListSmartChatRoomsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(countConcurrencyIsSet_) {
        val[utility::conversions::to_string_t("count_concurrency")] = ModelBase::toJson(countConcurrency_);
    }
    if(countClientNumsIsSet_) {
        val[utility::conversions::to_string_t("count_client_nums")] = ModelBase::toJson(countClientNums_);
    }
    if(countClientNumsTokenIsSet_) {
        val[utility::conversions::to_string_t("count_client_nums_token")] = ModelBase::toJson(countClientNumsToken_);
    }
    if(smartChatRoomsIsSet_) {
        val[utility::conversions::to_string_t("smart_chat_rooms")] = ModelBase::toJson(smartChatRooms_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListSmartChatRoomsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count_concurrency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count_concurrency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountConcurrency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count_client_nums"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count_client_nums"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountClientNums(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count_client_nums_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count_client_nums_token"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountClientNumsToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smart_chat_rooms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smart_chat_rooms"));
        if(!fieldValue.is_null())
        {
            std::vector<SmartChatRoomBaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmartChatRooms(refVal);
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


int32_t ListSmartChatRoomsResponse::getCount() const
{
    return count_;
}

void ListSmartChatRoomsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListSmartChatRoomsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListSmartChatRoomsResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ListSmartChatRoomsResponse::getCountConcurrency() const
{
    return countConcurrency_;
}

void ListSmartChatRoomsResponse::setCountConcurrency(int32_t value)
{
    countConcurrency_ = value;
    countConcurrencyIsSet_ = true;
}

bool ListSmartChatRoomsResponse::countConcurrencyIsSet() const
{
    return countConcurrencyIsSet_;
}

void ListSmartChatRoomsResponse::unsetcountConcurrency()
{
    countConcurrencyIsSet_ = false;
}

int32_t ListSmartChatRoomsResponse::getCountClientNums() const
{
    return countClientNums_;
}

void ListSmartChatRoomsResponse::setCountClientNums(int32_t value)
{
    countClientNums_ = value;
    countClientNumsIsSet_ = true;
}

bool ListSmartChatRoomsResponse::countClientNumsIsSet() const
{
    return countClientNumsIsSet_;
}

void ListSmartChatRoomsResponse::unsetcountClientNums()
{
    countClientNumsIsSet_ = false;
}

int32_t ListSmartChatRoomsResponse::getCountClientNumsToken() const
{
    return countClientNumsToken_;
}

void ListSmartChatRoomsResponse::setCountClientNumsToken(int32_t value)
{
    countClientNumsToken_ = value;
    countClientNumsTokenIsSet_ = true;
}

bool ListSmartChatRoomsResponse::countClientNumsTokenIsSet() const
{
    return countClientNumsTokenIsSet_;
}

void ListSmartChatRoomsResponse::unsetcountClientNumsToken()
{
    countClientNumsTokenIsSet_ = false;
}

std::vector<SmartChatRoomBaseInfo>& ListSmartChatRoomsResponse::getSmartChatRooms()
{
    return smartChatRooms_;
}

void ListSmartChatRoomsResponse::setSmartChatRooms(const std::vector<SmartChatRoomBaseInfo>& value)
{
    smartChatRooms_ = value;
    smartChatRoomsIsSet_ = true;
}

bool ListSmartChatRoomsResponse::smartChatRoomsIsSet() const
{
    return smartChatRoomsIsSet_;
}

void ListSmartChatRoomsResponse::unsetsmartChatRooms()
{
    smartChatRoomsIsSet_ = false;
}

std::string ListSmartChatRoomsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListSmartChatRoomsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListSmartChatRoomsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListSmartChatRoomsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


