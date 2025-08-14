

#include "huaweicloud/iotda/v5/model/CreateOrDeleteDeviceInGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateOrDeleteDeviceInGroupResponse::CreateOrDeleteDeviceInGroupResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CreateOrDeleteDeviceInGroupResponse::~CreateOrDeleteDeviceInGroupResponse() = default;

void CreateOrDeleteDeviceInGroupResponse::validate()
{
}

web::json::value CreateOrDeleteDeviceInGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateOrDeleteDeviceInGroupResponse::fromJson(const web::json::value& val)
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


std::string CreateOrDeleteDeviceInGroupResponse::getBody() const
{
    return body_;
}

void CreateOrDeleteDeviceInGroupResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateOrDeleteDeviceInGroupResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateOrDeleteDeviceInGroupResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


