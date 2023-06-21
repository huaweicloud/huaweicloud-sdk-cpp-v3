

#include "huaweicloud/cfw/v1/model/ChangeEwProtectStatusResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeEwProtectStatusResponse::ChangeEwProtectStatusResponse()
{
    dataIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
}

ChangeEwProtectStatusResponse::~ChangeEwProtectStatusResponse() = default;

void ChangeEwProtectStatusResponse::validate()
{
}

web::json::value ChangeEwProtectStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }

    return val;
}

bool ChangeEwProtectStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            SuccessRsp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
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


SuccessRsp_data ChangeEwProtectStatusResponse::getData() const
{
    return data_;
}

void ChangeEwProtectStatusResponse::setData(const SuccessRsp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ChangeEwProtectStatusResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ChangeEwProtectStatusResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ChangeEwProtectStatusResponse::getTraceId() const
{
    return traceId_;
}

void ChangeEwProtectStatusResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ChangeEwProtectStatusResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ChangeEwProtectStatusResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

}
}
}
}
}


