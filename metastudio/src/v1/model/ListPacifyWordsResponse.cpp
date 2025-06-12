

#include "huaweicloud/metastudio/v1/model/ListPacifyWordsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListPacifyWordsResponse::ListPacifyWordsResponse()
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

ListPacifyWordsResponse::~ListPacifyWordsResponse() = default;

void ListPacifyWordsResponse::validate()
{
}

web::json::value ListPacifyWordsResponse::toJson() const
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
bool ListPacifyWordsResponse::fromJson(const web::json::value& val)
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
            std::vector<PacifyWordsInfo> refVal;
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


int32_t ListPacifyWordsResponse::getOffset() const
{
    return offset_;
}

void ListPacifyWordsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPacifyWordsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPacifyWordsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPacifyWordsResponse::getLimit() const
{
    return limit_;
}

void ListPacifyWordsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPacifyWordsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListPacifyWordsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListPacifyWordsResponse::getCount() const
{
    return count_;
}

void ListPacifyWordsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListPacifyWordsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListPacifyWordsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<PacifyWordsInfo>& ListPacifyWordsResponse::getData()
{
    return data_;
}

void ListPacifyWordsResponse::setData(const std::vector<PacifyWordsInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListPacifyWordsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListPacifyWordsResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ListPacifyWordsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListPacifyWordsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListPacifyWordsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListPacifyWordsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


