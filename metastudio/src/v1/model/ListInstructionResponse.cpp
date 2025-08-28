

#include "huaweicloud/metastudio/v1/model/ListInstructionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListInstructionResponse::ListInstructionResponse()
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

ListInstructionResponse::~ListInstructionResponse() = default;

void ListInstructionResponse::validate()
{
}

web::json::value ListInstructionResponse::toJson() const
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
bool ListInstructionResponse::fromJson(const web::json::value& val)
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
            std::vector<InstructionInfo> refVal;
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


int32_t ListInstructionResponse::getOffset() const
{
    return offset_;
}

void ListInstructionResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstructionResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstructionResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstructionResponse::getLimit() const
{
    return limit_;
}

void ListInstructionResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstructionResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstructionResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInstructionResponse::getCount() const
{
    return count_;
}

void ListInstructionResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListInstructionResponse::countIsSet() const
{
    return countIsSet_;
}

void ListInstructionResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<InstructionInfo>& ListInstructionResponse::getData()
{
    return data_;
}

void ListInstructionResponse::setData(const std::vector<InstructionInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListInstructionResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListInstructionResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ListInstructionResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListInstructionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListInstructionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListInstructionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


