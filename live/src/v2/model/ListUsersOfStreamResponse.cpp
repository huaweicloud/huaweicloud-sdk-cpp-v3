

#include "huaweicloud/live/v2/model/ListUsersOfStreamResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListUsersOfStreamResponse::ListUsersOfStreamResponse()
{
    dataListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListUsersOfStreamResponse::~ListUsersOfStreamResponse() = default;

void ListUsersOfStreamResponse::validate()
{
}

web::json::value ListUsersOfStreamResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataListIsSet_) {
        val[utility::conversions::to_string_t("data_list")] = ModelBase::toJson(dataList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}

bool ListUsersOfStreamResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_list"));
        if(!fieldValue.is_null())
        {
            std::vector<V2UserData> refVal;
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

std::vector<V2UserData>& ListUsersOfStreamResponse::getDataList()
{
    return dataList_;
}

void ListUsersOfStreamResponse::setDataList(const std::vector<V2UserData>& value)
{
    dataList_ = value;
    dataListIsSet_ = true;
}

bool ListUsersOfStreamResponse::dataListIsSet() const
{
    return dataListIsSet_;
}

void ListUsersOfStreamResponse::unsetdataList()
{
    dataListIsSet_ = false;
}

std::string ListUsersOfStreamResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListUsersOfStreamResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListUsersOfStreamResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListUsersOfStreamResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


