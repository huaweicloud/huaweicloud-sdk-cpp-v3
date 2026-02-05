

#include "huaweicloud/sis/v1/model/ListVoicesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




ListVoicesResponse::ListVoicesResponse()
{
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListVoicesResponse::~ListVoicesResponse() = default;

void ListVoicesResponse::validate()
{
}

web::json::value ListVoicesResponse::toJson() const
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
bool ListVoicesResponse::fromJson(const web::json::value& val)
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
            VoiceList_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListVoicesResponse::getTraceId() const
{
    return traceId_;
}

void ListVoicesResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListVoicesResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListVoicesResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

VoiceList_result ListVoicesResponse::getResult() const
{
    return result_;
}

void ListVoicesResponse::setResult(const VoiceList_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListVoicesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListVoicesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


