

#include "huaweicloud/metastudio/v1/model/ListMcpServerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListMcpServerResponse::ListMcpServerResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListMcpServerResponse::~ListMcpServerResponse() = default;

void ListMcpServerResponse::validate()
{
}

web::json::value ListMcpServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListMcpServerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<McpServerInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
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


int32_t ListMcpServerResponse::getOffset() const
{
    return offset_;
}

void ListMcpServerResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMcpServerResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMcpServerResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMcpServerResponse::getLimit() const
{
    return limit_;
}

void ListMcpServerResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMcpServerResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListMcpServerResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListMcpServerResponse::getCount() const
{
    return count_;
}

void ListMcpServerResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListMcpServerResponse::countIsSet() const
{
    return countIsSet_;
}

void ListMcpServerResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<McpServerInfo>& ListMcpServerResponse::getData()
{
    return data_;
}

void ListMcpServerResponse::setData(const std::vector<McpServerInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListMcpServerResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListMcpServerResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ListMcpServerResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListMcpServerResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListMcpServerResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListMcpServerResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


