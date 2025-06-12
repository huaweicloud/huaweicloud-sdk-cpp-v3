

#include "huaweicloud/metastudio/v1/model/ListKnowledgeQuestionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListKnowledgeQuestionResponse::ListKnowledgeQuestionResponse()
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

ListKnowledgeQuestionResponse::~ListKnowledgeQuestionResponse() = default;

void ListKnowledgeQuestionResponse::validate()
{
}

web::json::value ListKnowledgeQuestionResponse::toJson() const
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
bool ListKnowledgeQuestionResponse::fromJson(const web::json::value& val)
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
            std::vector<KnowledgeQuestionInfo> refVal;
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


int32_t ListKnowledgeQuestionResponse::getOffset() const
{
    return offset_;
}

void ListKnowledgeQuestionResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListKnowledgeQuestionResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListKnowledgeQuestionResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListKnowledgeQuestionResponse::getLimit() const
{
    return limit_;
}

void ListKnowledgeQuestionResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListKnowledgeQuestionResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListKnowledgeQuestionResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListKnowledgeQuestionResponse::getCount() const
{
    return count_;
}

void ListKnowledgeQuestionResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListKnowledgeQuestionResponse::countIsSet() const
{
    return countIsSet_;
}

void ListKnowledgeQuestionResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<KnowledgeQuestionInfo>& ListKnowledgeQuestionResponse::getData()
{
    return data_;
}

void ListKnowledgeQuestionResponse::setData(const std::vector<KnowledgeQuestionInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListKnowledgeQuestionResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListKnowledgeQuestionResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ListKnowledgeQuestionResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListKnowledgeQuestionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListKnowledgeQuestionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListKnowledgeQuestionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


