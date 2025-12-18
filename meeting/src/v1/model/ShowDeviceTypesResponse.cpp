

#include "huaweicloud/meeting/v1/model/ShowDeviceTypesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowDeviceTypesResponse::ShowDeviceTypesResponse()
{
    bodyIsSet_ = false;
}

ShowDeviceTypesResponse::~ShowDeviceTypesResponse() = default;

void ShowDeviceTypesResponse::validate()
{
}

web::json::value ShowDeviceTypesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowDeviceTypesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryDeviceTypeResultDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<QueryDeviceTypeResultDTO>& ShowDeviceTypesResponse::getBody()
{
    return body_;
}

void ShowDeviceTypesResponse::setBody(const std::vector<QueryDeviceTypeResultDTO>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowDeviceTypesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowDeviceTypesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


