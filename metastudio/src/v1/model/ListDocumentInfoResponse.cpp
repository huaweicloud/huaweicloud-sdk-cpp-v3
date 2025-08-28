

#include "huaweicloud/metastudio/v1/model/ListDocumentInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListDocumentInfoResponse::ListDocumentInfoResponse()
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

ListDocumentInfoResponse::~ListDocumentInfoResponse() = default;

void ListDocumentInfoResponse::validate()
{
}

web::json::value ListDocumentInfoResponse::toJson() const
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
bool ListDocumentInfoResponse::fromJson(const web::json::value& val)
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
            std::vector<DocumentInfo> refVal;
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


int32_t ListDocumentInfoResponse::getOffset() const
{
    return offset_;
}

void ListDocumentInfoResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDocumentInfoResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDocumentInfoResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDocumentInfoResponse::getLimit() const
{
    return limit_;
}

void ListDocumentInfoResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDocumentInfoResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListDocumentInfoResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListDocumentInfoResponse::getCount() const
{
    return count_;
}

void ListDocumentInfoResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListDocumentInfoResponse::countIsSet() const
{
    return countIsSet_;
}

void ListDocumentInfoResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<DocumentInfo>& ListDocumentInfoResponse::getData()
{
    return data_;
}

void ListDocumentInfoResponse::setData(const std::vector<DocumentInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListDocumentInfoResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListDocumentInfoResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ListDocumentInfoResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListDocumentInfoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListDocumentInfoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListDocumentInfoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


