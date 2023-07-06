

#include "huaweicloud/live/v1/model/ListRecordContentsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListRecordContentsResponse::ListRecordContentsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    recordContentsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListRecordContentsResponse::~ListRecordContentsResponse() = default;

void ListRecordContentsResponse::validate()
{
}

web::json::value ListRecordContentsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(recordContentsIsSet_) {
        val[utility::conversions::to_string_t("record_contents")] = ModelBase::toJson(recordContents_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}

bool ListRecordContentsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_contents"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_contents"));
        if(!fieldValue.is_null())
        {
            std::vector<RecordContentInfoV2> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordContents(refVal);
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

int32_t ListRecordContentsResponse::getTotal() const
{
    return total_;
}

void ListRecordContentsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListRecordContentsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListRecordContentsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<RecordContentInfoV2>& ListRecordContentsResponse::getRecordContents()
{
    return recordContents_;
}

void ListRecordContentsResponse::setRecordContents(const std::vector<RecordContentInfoV2>& value)
{
    recordContents_ = value;
    recordContentsIsSet_ = true;
}

bool ListRecordContentsResponse::recordContentsIsSet() const
{
    return recordContentsIsSet_;
}

void ListRecordContentsResponse::unsetrecordContents()
{
    recordContentsIsSet_ = false;
}

std::string ListRecordContentsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListRecordContentsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListRecordContentsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListRecordContentsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


