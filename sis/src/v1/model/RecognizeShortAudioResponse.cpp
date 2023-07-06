

#include "huaweicloud/sis/v1/model/RecognizeShortAudioResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




RecognizeShortAudioResponse::RecognizeShortAudioResponse()
{
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

RecognizeShortAudioResponse::~RecognizeShortAudioResponse() = default;

void RecognizeShortAudioResponse::validate()
{
}

web::json::value RecognizeShortAudioResponse::toJson() const
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

bool RecognizeShortAudioResponse::fromJson(const web::json::value& val)
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
            Result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

std::string RecognizeShortAudioResponse::getTraceId() const
{
    return traceId_;
}

void RecognizeShortAudioResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool RecognizeShortAudioResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void RecognizeShortAudioResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

Result RecognizeShortAudioResponse::getResult() const
{
    return result_;
}

void RecognizeShortAudioResponse::setResult(const Result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeShortAudioResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeShortAudioResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


