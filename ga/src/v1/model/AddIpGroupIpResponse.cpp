

#include "huaweicloud/ga/v1/model/AddIpGroupIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




AddIpGroupIpResponse::AddIpGroupIpResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

AddIpGroupIpResponse::~AddIpGroupIpResponse() = default;

void AddIpGroupIpResponse::validate()
{
}

web::json::value AddIpGroupIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool AddIpGroupIpResponse::fromJson(const web::json::value& val)
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


std::string AddIpGroupIpResponse::getRequestId() const
{
    return requestId_;
}

void AddIpGroupIpResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool AddIpGroupIpResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void AddIpGroupIpResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


