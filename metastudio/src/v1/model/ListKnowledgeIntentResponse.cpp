

#include "huaweicloud/metastudio/v1/model/ListKnowledgeIntentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListKnowledgeIntentResponse::ListKnowledgeIntentResponse()
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

ListKnowledgeIntentResponse::~ListKnowledgeIntentResponse() = default;

void ListKnowledgeIntentResponse::validate()
{
}

web::json::value ListKnowledgeIntentResponse::toJson() const
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
bool ListKnowledgeIntentResponse::fromJson(const web::json::value& val)
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
            std::vector<KnowledgeIntentInfo> refVal;
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


int32_t ListKnowledgeIntentResponse::getOffset() const
{
    return offset_;
}

void ListKnowledgeIntentResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListKnowledgeIntentResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListKnowledgeIntentResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListKnowledgeIntentResponse::getLimit() const
{
    return limit_;
}

void ListKnowledgeIntentResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListKnowledgeIntentResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListKnowledgeIntentResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListKnowledgeIntentResponse::getCount() const
{
    return count_;
}

void ListKnowledgeIntentResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListKnowledgeIntentResponse::countIsSet() const
{
    return countIsSet_;
}

void ListKnowledgeIntentResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<KnowledgeIntentInfo>& ListKnowledgeIntentResponse::getData()
{
    return data_;
}

void ListKnowledgeIntentResponse::setData(const std::vector<KnowledgeIntentInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListKnowledgeIntentResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListKnowledgeIntentResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ListKnowledgeIntentResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListKnowledgeIntentResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListKnowledgeIntentResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListKnowledgeIntentResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


