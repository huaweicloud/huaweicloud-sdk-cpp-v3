

#include "huaweicloud/rds/v3/model/BatchStopInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchStopInstanceResponse::BatchStopInstanceResponse()
{
    recordsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchStopInstanceResponse::~BatchStopInstanceResponse() = default;

void BatchStopInstanceResponse::validate()
{
}

web::json::value BatchStopInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchStopInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<ShutdownInstanceRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<ShutdownInstanceRecord>& BatchStopInstanceResponse::getRecords()
{
    return records_;
}

void BatchStopInstanceResponse::setRecords(const std::vector<ShutdownInstanceRecord>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool BatchStopInstanceResponse::recordsIsSet() const
{
    return recordsIsSet_;
}

void BatchStopInstanceResponse::unsetrecords()
{
    recordsIsSet_ = false;
}

std::string BatchStopInstanceResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchStopInstanceResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchStopInstanceResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchStopInstanceResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


