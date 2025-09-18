

#include "huaweicloud/ga/v1/model/RemoveIpGroupIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




RemoveIpGroupIpResponse::RemoveIpGroupIpResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

RemoveIpGroupIpResponse::~RemoveIpGroupIpResponse() = default;

void RemoveIpGroupIpResponse::validate()
{
}

web::json::value RemoveIpGroupIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool RemoveIpGroupIpResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::string RemoveIpGroupIpResponse::getRequestId() const
{
    return requestId_;
}

void RemoveIpGroupIpResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool RemoveIpGroupIpResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void RemoveIpGroupIpResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


