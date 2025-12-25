

#include "huaweicloud/codeartsartifact/v2/model/ListCapacityMessageSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListCapacityMessageSettingResponse::ListCapacityMessageSettingResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListCapacityMessageSettingResponse::~ListCapacityMessageSettingResponse() = default;

void ListCapacityMessageSettingResponse::validate()
{
}

web::json::value ListCapacityMessageSettingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ListCapacityMessageSettingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            CapacitySettingVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListCapacityMessageSettingResponse::getStatus() const
{
    return status_;
}

void ListCapacityMessageSettingResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListCapacityMessageSettingResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListCapacityMessageSettingResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListCapacityMessageSettingResponse::getTraceId() const
{
    return traceId_;
}

void ListCapacityMessageSettingResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListCapacityMessageSettingResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListCapacityMessageSettingResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

CapacitySettingVO ListCapacityMessageSettingResponse::getResult() const
{
    return result_;
}

void ListCapacityMessageSettingResponse::setResult(const CapacitySettingVO& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListCapacityMessageSettingResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListCapacityMessageSettingResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


