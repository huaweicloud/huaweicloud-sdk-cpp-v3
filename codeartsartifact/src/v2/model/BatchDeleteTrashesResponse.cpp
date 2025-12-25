

#include "huaweicloud/codeartsartifact/v2/model/BatchDeleteTrashesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




BatchDeleteTrashesResponse::BatchDeleteTrashesResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

BatchDeleteTrashesResponse::~BatchDeleteTrashesResponse() = default;

void BatchDeleteTrashesResponse::validate()
{
}

web::json::value BatchDeleteTrashesResponse::toJson() const
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
bool BatchDeleteTrashesResponse::fromJson(const web::json::value& val)
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
            TrashcanResultData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteTrashesResponse::getStatus() const
{
    return status_;
}

void BatchDeleteTrashesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchDeleteTrashesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchDeleteTrashesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BatchDeleteTrashesResponse::getTraceId() const
{
    return traceId_;
}

void BatchDeleteTrashesResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool BatchDeleteTrashesResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void BatchDeleteTrashesResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

TrashcanResultData BatchDeleteTrashesResponse::getResult() const
{
    return result_;
}

void BatchDeleteTrashesResponse::setResult(const TrashcanResultData& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchDeleteTrashesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchDeleteTrashesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


