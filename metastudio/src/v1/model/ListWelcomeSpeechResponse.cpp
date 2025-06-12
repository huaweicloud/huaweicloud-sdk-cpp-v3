

#include "huaweicloud/metastudio/v1/model/ListWelcomeSpeechResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListWelcomeSpeechResponse::ListWelcomeSpeechResponse()
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

ListWelcomeSpeechResponse::~ListWelcomeSpeechResponse() = default;

void ListWelcomeSpeechResponse::validate()
{
}

web::json::value ListWelcomeSpeechResponse::toJson() const
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
bool ListWelcomeSpeechResponse::fromJson(const web::json::value& val)
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
            std::vector<WelcomeSpeechInfo> refVal;
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


int32_t ListWelcomeSpeechResponse::getOffset() const
{
    return offset_;
}

void ListWelcomeSpeechResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWelcomeSpeechResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWelcomeSpeechResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListWelcomeSpeechResponse::getLimit() const
{
    return limit_;
}

void ListWelcomeSpeechResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWelcomeSpeechResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListWelcomeSpeechResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListWelcomeSpeechResponse::getCount() const
{
    return count_;
}

void ListWelcomeSpeechResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListWelcomeSpeechResponse::countIsSet() const
{
    return countIsSet_;
}

void ListWelcomeSpeechResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<WelcomeSpeechInfo>& ListWelcomeSpeechResponse::getData()
{
    return data_;
}

void ListWelcomeSpeechResponse::setData(const std::vector<WelcomeSpeechInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListWelcomeSpeechResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListWelcomeSpeechResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ListWelcomeSpeechResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListWelcomeSpeechResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListWelcomeSpeechResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListWelcomeSpeechResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


