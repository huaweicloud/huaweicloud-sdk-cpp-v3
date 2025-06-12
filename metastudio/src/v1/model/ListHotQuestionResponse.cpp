

#include "huaweicloud/metastudio/v1/model/ListHotQuestionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListHotQuestionResponse::ListHotQuestionResponse()
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

ListHotQuestionResponse::~ListHotQuestionResponse() = default;

void ListHotQuestionResponse::validate()
{
}

web::json::value ListHotQuestionResponse::toJson() const
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
bool ListHotQuestionResponse::fromJson(const web::json::value& val)
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
            std::vector<HotQuestionInfo> refVal;
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


int32_t ListHotQuestionResponse::getOffset() const
{
    return offset_;
}

void ListHotQuestionResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHotQuestionResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHotQuestionResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListHotQuestionResponse::getLimit() const
{
    return limit_;
}

void ListHotQuestionResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHotQuestionResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListHotQuestionResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListHotQuestionResponse::getCount() const
{
    return count_;
}

void ListHotQuestionResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListHotQuestionResponse::countIsSet() const
{
    return countIsSet_;
}

void ListHotQuestionResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<HotQuestionInfo>& ListHotQuestionResponse::getData()
{
    return data_;
}

void ListHotQuestionResponse::setData(const std::vector<HotQuestionInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListHotQuestionResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListHotQuestionResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ListHotQuestionResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListHotQuestionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListHotQuestionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListHotQuestionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


