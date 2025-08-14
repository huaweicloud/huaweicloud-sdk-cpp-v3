

#include "huaweicloud/iotda/v5/model/DeleteDeviceGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteDeviceGroupResponse::DeleteDeviceGroupResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteDeviceGroupResponse::~DeleteDeviceGroupResponse() = default;

void DeleteDeviceGroupResponse::validate()
{
}

web::json::value DeleteDeviceGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteDeviceGroupResponse::fromJson(const web::json::value& val)
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


std::string DeleteDeviceGroupResponse::getBody() const
{
    return body_;
}

void DeleteDeviceGroupResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDeviceGroupResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDeviceGroupResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


