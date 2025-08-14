

#include "huaweicloud/iotda/v5/model/DeleteDeviceProxyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteDeviceProxyResponse::DeleteDeviceProxyResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteDeviceProxyResponse::~DeleteDeviceProxyResponse() = default;

void DeleteDeviceProxyResponse::validate()
{
}

web::json::value DeleteDeviceProxyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteDeviceProxyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteDeviceProxyResponse::getBody() const
{
    return body_;
}

void DeleteDeviceProxyResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDeviceProxyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDeviceProxyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


