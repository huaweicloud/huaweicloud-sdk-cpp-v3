

#include "huaweicloud/sis/v1/model/GenerateSpeechResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




GenerateSpeechResponse::GenerateSpeechResponse()
{
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

GenerateSpeechResponse::~GenerateSpeechResponse() = default;

void GenerateSpeechResponse::validate()
{
}

web::json::value GenerateSpeechResponse::toJson() const
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
bool GenerateSpeechResponse::fromJson(const web::json::value& val)
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
            GenerateSpeechRsp_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string GenerateSpeechResponse::getTraceId() const
{
    return traceId_;
}

void GenerateSpeechResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool GenerateSpeechResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void GenerateSpeechResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

GenerateSpeechRsp_result GenerateSpeechResponse::getResult() const
{
    return result_;
}

void GenerateSpeechResponse::setResult(const GenerateSpeechRsp_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool GenerateSpeechResponse::resultIsSet() const
{
    return resultIsSet_;
}

void GenerateSpeechResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


