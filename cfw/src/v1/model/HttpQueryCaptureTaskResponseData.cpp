

#include "huaweicloud/cfw/v1/model/HttpQueryCaptureTaskResponseData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




HttpQueryCaptureTaskResponseData::HttpQueryCaptureTaskResponseData()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
    recordsIsSet_ = false;
}

HttpQueryCaptureTaskResponseData::~HttpQueryCaptureTaskResponseData() = default;

void HttpQueryCaptureTaskResponseData::validate()
{
}

web::json::value HttpQueryCaptureTaskResponseData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }

    return val;
}
bool HttpQueryCaptureTaskResponseData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<CaptureTaskVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


int32_t HttpQueryCaptureTaskResponseData::getLimit() const
{
    return limit_;
}

void HttpQueryCaptureTaskResponseData::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool HttpQueryCaptureTaskResponseData::limitIsSet() const
{
    return limitIsSet_;
}

void HttpQueryCaptureTaskResponseData::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t HttpQueryCaptureTaskResponseData::getOffset() const
{
    return offset_;
}

void HttpQueryCaptureTaskResponseData::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool HttpQueryCaptureTaskResponseData::offsetIsSet() const
{
    return offsetIsSet_;
}

void HttpQueryCaptureTaskResponseData::unsetoffset()
{
    offsetIsSet_ = false;
}

int64_t HttpQueryCaptureTaskResponseData::getTotal() const
{
    return total_;
}

void HttpQueryCaptureTaskResponseData::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool HttpQueryCaptureTaskResponseData::totalIsSet() const
{
    return totalIsSet_;
}

void HttpQueryCaptureTaskResponseData::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<CaptureTaskVO>& HttpQueryCaptureTaskResponseData::getRecords()
{
    return records_;
}

void HttpQueryCaptureTaskResponseData::setRecords(const std::vector<CaptureTaskVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool HttpQueryCaptureTaskResponseData::recordsIsSet() const
{
    return recordsIsSet_;
}

void HttpQueryCaptureTaskResponseData::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}


