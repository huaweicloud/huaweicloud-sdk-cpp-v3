

#include "huaweicloud/cfw/v1/model/ChangeIpsSwitchStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeIpsSwitchStatusResponse::ChangeIpsSwitchStatusResponse()
{
    traceId_ = "";
    traceIdIsSet_ = false;
    dataIsSet_ = false;
}

ChangeIpsSwitchStatusResponse::~ChangeIpsSwitchStatusResponse() = default;

void ChangeIpsSwitchStatusResponse::validate()
{
}

web::json::value ChangeIpsSwitchStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ChangeIpsSwitchStatusResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            CommonResponseDTO_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string ChangeIpsSwitchStatusResponse::getTraceId() const
{
    return traceId_;
}

void ChangeIpsSwitchStatusResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ChangeIpsSwitchStatusResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ChangeIpsSwitchStatusResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

CommonResponseDTO_data ChangeIpsSwitchStatusResponse::getData() const
{
    return data_;
}

void ChangeIpsSwitchStatusResponse::setData(const CommonResponseDTO_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ChangeIpsSwitchStatusResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ChangeIpsSwitchStatusResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


