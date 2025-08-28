

#include "huaweicloud/metastudio/v1/model/ListInstructionLibraryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListInstructionLibraryResponse::ListInstructionLibraryResponse()
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

ListInstructionLibraryResponse::~ListInstructionLibraryResponse() = default;

void ListInstructionLibraryResponse::validate()
{
}

web::json::value ListInstructionLibraryResponse::toJson() const
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
bool ListInstructionLibraryResponse::fromJson(const web::json::value& val)
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
            std::vector<InstructionLibraryInfo> refVal;
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


int32_t ListInstructionLibraryResponse::getOffset() const
{
    return offset_;
}

void ListInstructionLibraryResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstructionLibraryResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstructionLibraryResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstructionLibraryResponse::getLimit() const
{
    return limit_;
}

void ListInstructionLibraryResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstructionLibraryResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstructionLibraryResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInstructionLibraryResponse::getCount() const
{
    return count_;
}

void ListInstructionLibraryResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListInstructionLibraryResponse::countIsSet() const
{
    return countIsSet_;
}

void ListInstructionLibraryResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<InstructionLibraryInfo>& ListInstructionLibraryResponse::getData()
{
    return data_;
}

void ListInstructionLibraryResponse::setData(const std::vector<InstructionLibraryInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListInstructionLibraryResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListInstructionLibraryResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ListInstructionLibraryResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListInstructionLibraryResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListInstructionLibraryResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListInstructionLibraryResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


