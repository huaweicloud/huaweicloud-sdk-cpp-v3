

#include "huaweicloud/sis/v1/model/CreateVoiceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




CreateVoiceResponse::CreateVoiceResponse()
{
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

CreateVoiceResponse::~CreateVoiceResponse() = default;

void CreateVoiceResponse::validate()
{
}

web::json::value CreateVoiceResponse::toJson() const
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
bool CreateVoiceResponse::fromJson(const web::json::value& val)
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
            RegisterVoiceResponseBody_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string CreateVoiceResponse::getTraceId() const
{
    return traceId_;
}

void CreateVoiceResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool CreateVoiceResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void CreateVoiceResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

RegisterVoiceResponseBody_result CreateVoiceResponse::getResult() const
{
    return result_;
}

void CreateVoiceResponse::setResult(const RegisterVoiceResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateVoiceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateVoiceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


