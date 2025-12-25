

#include "huaweicloud/codeartsartifact/v2/model/StandarBaseResponseV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




StandarBaseResponseV5::StandarBaseResponseV5()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
}

StandarBaseResponseV5::~StandarBaseResponseV5() = default;

void StandarBaseResponseV5::validate()
{
}

web::json::value StandarBaseResponseV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }

    return val;
}
bool StandarBaseResponseV5::fromJson(const web::json::value& val)
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
    return ok;
}


std::string StandarBaseResponseV5::getStatus() const
{
    return status_;
}

void StandarBaseResponseV5::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StandarBaseResponseV5::statusIsSet() const
{
    return statusIsSet_;
}

void StandarBaseResponseV5::unsetstatus()
{
    statusIsSet_ = false;
}

std::string StandarBaseResponseV5::getTraceId() const
{
    return traceId_;
}

void StandarBaseResponseV5::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool StandarBaseResponseV5::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void StandarBaseResponseV5::unsettraceId()
{
    traceIdIsSet_ = false;
}

}
}
}
}
}


