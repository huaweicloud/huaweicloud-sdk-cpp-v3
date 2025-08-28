

#include "huaweicloud/metastudio/v1/model/ListKnowledgeLibraryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListKnowledgeLibraryResponse::ListKnowledgeLibraryResponse()
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

ListKnowledgeLibraryResponse::~ListKnowledgeLibraryResponse() = default;

void ListKnowledgeLibraryResponse::validate()
{
}

web::json::value ListKnowledgeLibraryResponse::toJson() const
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
bool ListKnowledgeLibraryResponse::fromJson(const web::json::value& val)
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
            std::vector<KnowledgeLibraryInfo> refVal;
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


int32_t ListKnowledgeLibraryResponse::getOffset() const
{
    return offset_;
}

void ListKnowledgeLibraryResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListKnowledgeLibraryResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListKnowledgeLibraryResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListKnowledgeLibraryResponse::getLimit() const
{
    return limit_;
}

void ListKnowledgeLibraryResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListKnowledgeLibraryResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListKnowledgeLibraryResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListKnowledgeLibraryResponse::getCount() const
{
    return count_;
}

void ListKnowledgeLibraryResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListKnowledgeLibraryResponse::countIsSet() const
{
    return countIsSet_;
}

void ListKnowledgeLibraryResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<KnowledgeLibraryInfo>& ListKnowledgeLibraryResponse::getData()
{
    return data_;
}

void ListKnowledgeLibraryResponse::setData(const std::vector<KnowledgeLibraryInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListKnowledgeLibraryResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListKnowledgeLibraryResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ListKnowledgeLibraryResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListKnowledgeLibraryResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListKnowledgeLibraryResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListKnowledgeLibraryResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


