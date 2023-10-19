

#include "huaweicloud/cfw/v1/model/ChangeEastWestFirewallStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeEastWestFirewallStatusResponse::ChangeEastWestFirewallStatusResponse()
{
    dataIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
}

ChangeEastWestFirewallStatusResponse::~ChangeEastWestFirewallStatusResponse() = default;

void ChangeEastWestFirewallStatusResponse::validate()
{
}

web::json::value ChangeEastWestFirewallStatusResponse::toJson() const
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
bool ChangeEastWestFirewallStatusResponse::fromJson(const web::json::value& val)
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


SuccessRsp_data ChangeEastWestFirewallStatusResponse::getData() const
{
    return data_;
}

void ChangeEastWestFirewallStatusResponse::setData(const SuccessRsp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ChangeEastWestFirewallStatusResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ChangeEastWestFirewallStatusResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ChangeEastWestFirewallStatusResponse::getTraceId() const
{
    return traceId_;
}

void ChangeEastWestFirewallStatusResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ChangeEastWestFirewallStatusResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ChangeEastWestFirewallStatusResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

}
}
}
}
}


