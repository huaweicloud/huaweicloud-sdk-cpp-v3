

#include "huaweicloud/functiongraph/v2/model/UpdateTracingRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateTracingRequestBody::UpdateTracingRequestBody()
{
    tracingAk_ = "";
    tracingAkIsSet_ = false;
    tracingSk_ = "";
    tracingSkIsSet_ = false;
}

UpdateTracingRequestBody::~UpdateTracingRequestBody() = default;

void UpdateTracingRequestBody::validate()
{
}

web::json::value UpdateTracingRequestBody::toJson() const
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
bool UpdateTracingRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateTracingRequestBody::getTracingAk() const
{
    return tracingAk_;
}

void UpdateTracingRequestBody::setTracingAk(const std::string& value)
{
    tracingAk_ = value;
    tracingAkIsSet_ = true;
}

bool UpdateTracingRequestBody::tracingAkIsSet() const
{
    return tracingAkIsSet_;
}

void UpdateTracingRequestBody::unsettracingAk()
{
    tracingAkIsSet_ = false;
}

std::string UpdateTracingRequestBody::getTracingSk() const
{
    return tracingSk_;
}

void UpdateTracingRequestBody::setTracingSk(const std::string& value)
{
    tracingSk_ = value;
    tracingSkIsSet_ = true;
}

bool UpdateTracingRequestBody::tracingSkIsSet() const
{
    return tracingSkIsSet_;
}

void UpdateTracingRequestBody::unsettracingSk()
{
    tracingSkIsSet_ = false;
}

}
}
}
}
}


