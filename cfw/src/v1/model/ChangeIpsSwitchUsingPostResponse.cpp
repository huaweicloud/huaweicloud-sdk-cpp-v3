

#include "huaweicloud/cfw/v1/model/ChangeIpsSwitchUsingPostResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeIpsSwitchUsingPostResponse::ChangeIpsSwitchUsingPostResponse()
{
    traceId_ = "";
    traceIdIsSet_ = false;
    dataIsSet_ = false;
}

ChangeIpsSwitchUsingPostResponse::~ChangeIpsSwitchUsingPostResponse() = default;

void ChangeIpsSwitchUsingPostResponse::validate()
{
}

web::json::value ChangeIpsSwitchUsingPostResponse::toJson() const
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
bool ChangeIpsSwitchUsingPostResponse::fromJson(const web::json::value& val)
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


std::string ChangeIpsSwitchUsingPostResponse::getTraceId() const
{
    return traceId_;
}

void ChangeIpsSwitchUsingPostResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ChangeIpsSwitchUsingPostResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ChangeIpsSwitchUsingPostResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

CommonResponseDTO_data ChangeIpsSwitchUsingPostResponse::getData() const
{
    return data_;
}

void ChangeIpsSwitchUsingPostResponse::setData(const CommonResponseDTO_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ChangeIpsSwitchUsingPostResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ChangeIpsSwitchUsingPostResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


