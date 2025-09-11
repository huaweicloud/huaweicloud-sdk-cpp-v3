

#include "huaweicloud/functiongraph/v2/model/ShowTracingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowTracingResponse::ShowTracingResponse()
{
    tracingAk_ = "";
    tracingAkIsSet_ = false;
    tracingSk_ = "";
    tracingSkIsSet_ = false;
}

ShowTracingResponse::~ShowTracingResponse() = default;

void ShowTracingResponse::validate()
{
}

web::json::value ShowTracingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tracingAkIsSet_) {
        val[utility::conversions::to_string_t("tracing_ak")] = ModelBase::toJson(tracingAk_);
    }
    if(tracingSkIsSet_) {
        val[utility::conversions::to_string_t("tracing_sk")] = ModelBase::toJson(tracingSk_);
    }

    return val;
}
bool ShowTracingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tracing_ak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracing_ak"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTracingAk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracing_sk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracing_sk"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTracingSk(refVal);
        }
    }
    return ok;
}


std::string ShowTracingResponse::getTracingAk() const
{
    return tracingAk_;
}

void ShowTracingResponse::setTracingAk(const std::string& value)
{
    tracingAk_ = value;
    tracingAkIsSet_ = true;
}

bool ShowTracingResponse::tracingAkIsSet() const
{
    return tracingAkIsSet_;
}

void ShowTracingResponse::unsettracingAk()
{
    tracingAkIsSet_ = false;
}

std::string ShowTracingResponse::getTracingSk() const
{
    return tracingSk_;
}

void ShowTracingResponse::setTracingSk(const std::string& value)
{
    tracingSk_ = value;
    tracingSkIsSet_ = true;
}

bool ShowTracingResponse::tracingSkIsSet() const
{
    return tracingSkIsSet_;
}

void ShowTracingResponse::unsettracingSk()
{
    tracingSkIsSet_ = false;
}

}
}
}
}
}


