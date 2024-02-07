

#include "huaweicloud/geip/v3/model/ListGlobalEipCountFilterTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGlobalEipCountFilterTagsResponse::ListGlobalEipCountFilterTagsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListGlobalEipCountFilterTagsResponse::~ListGlobalEipCountFilterTagsResponse() = default;

void ListGlobalEipCountFilterTagsResponse::validate()
{
}

web::json::value ListGlobalEipCountFilterTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListGlobalEipCountFilterTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
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


std::string ListGlobalEipCountFilterTagsResponse::getRequestId() const
{
    return requestId_;
}

void ListGlobalEipCountFilterTagsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListGlobalEipCountFilterTagsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListGlobalEipCountFilterTagsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

int32_t ListGlobalEipCountFilterTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListGlobalEipCountFilterTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListGlobalEipCountFilterTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListGlobalEipCountFilterTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::string ListGlobalEipCountFilterTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListGlobalEipCountFilterTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListGlobalEipCountFilterTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListGlobalEipCountFilterTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


