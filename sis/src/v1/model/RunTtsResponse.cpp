

#include "huaweicloud/sis/v1/model/RunTtsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




RunTtsResponse::RunTtsResponse()
{
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

RunTtsResponse::~RunTtsResponse() = default;

void RunTtsResponse::validate()
{
}

web::json::value RunTtsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RunTtsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            CustomResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string RunTtsResponse::getTraceId() const
{
    return traceId_;
}

void RunTtsResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool RunTtsResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void RunTtsResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

CustomResult RunTtsResponse::getResult() const
{
    return result_;
}

void RunTtsResponse::setResult(const CustomResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RunTtsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RunTtsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


