

#include "huaweicloud/metastudio/v1/model/ListLlmConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListLlmConfigResponse::ListLlmConfigResponse()
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

ListLlmConfigResponse::~ListLlmConfigResponse() = default;

void ListLlmConfigResponse::validate()
{
}

web::json::value ListLlmConfigResponse::toJson() const
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
bool ListLlmConfigResponse::fromJson(const web::json::value& val)
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
            std::vector<LlmConfigInfo> refVal;
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


int32_t ListLlmConfigResponse::getOffset() const
{
    return offset_;
}

void ListLlmConfigResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLlmConfigResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLlmConfigResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListLlmConfigResponse::getLimit() const
{
    return limit_;
}

void ListLlmConfigResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLlmConfigResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListLlmConfigResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListLlmConfigResponse::getCount() const
{
    return count_;
}

void ListLlmConfigResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListLlmConfigResponse::countIsSet() const
{
    return countIsSet_;
}

void ListLlmConfigResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<LlmConfigInfo>& ListLlmConfigResponse::getData()
{
    return data_;
}

void ListLlmConfigResponse::setData(const std::vector<LlmConfigInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListLlmConfigResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListLlmConfigResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ListLlmConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListLlmConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListLlmConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListLlmConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


