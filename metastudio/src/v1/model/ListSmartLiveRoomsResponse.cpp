

#include "huaweicloud/metastudio/v1/model/ListSmartLiveRoomsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListSmartLiveRoomsResponse::ListSmartLiveRoomsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    smartLiveRoomsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListSmartLiveRoomsResponse::~ListSmartLiveRoomsResponse() = default;

void ListSmartLiveRoomsResponse::validate()
{
}

web::json::value ListSmartLiveRoomsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(smartLiveRoomsIsSet_) {
        val[utility::conversions::to_string_t("smart_live_rooms")] = ModelBase::toJson(smartLiveRooms_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListSmartLiveRoomsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("smart_live_rooms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smart_live_rooms"));
        if(!fieldValue.is_null())
        {
            std::vector<SmartLiveRoomBaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmartLiveRooms(refVal);
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


int32_t ListSmartLiveRoomsResponse::getCount() const
{
    return count_;
}

void ListSmartLiveRoomsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListSmartLiveRoomsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListSmartLiveRoomsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<SmartLiveRoomBaseInfo>& ListSmartLiveRoomsResponse::getSmartLiveRooms()
{
    return smartLiveRooms_;
}

void ListSmartLiveRoomsResponse::setSmartLiveRooms(const std::vector<SmartLiveRoomBaseInfo>& value)
{
    smartLiveRooms_ = value;
    smartLiveRoomsIsSet_ = true;
}

bool ListSmartLiveRoomsResponse::smartLiveRoomsIsSet() const
{
    return smartLiveRoomsIsSet_;
}

void ListSmartLiveRoomsResponse::unsetsmartLiveRooms()
{
    smartLiveRoomsIsSet_ = false;
}

std::string ListSmartLiveRoomsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListSmartLiveRoomsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListSmartLiveRoomsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListSmartLiveRoomsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


