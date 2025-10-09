

#include "huaweicloud/cce/v3/model/GetAvaliableZoneResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetAvaliableZoneResponse::GetAvaliableZoneResponse()
{
    bodyIsSet_ = false;
}

GetAvaliableZoneResponse::~GetAvaliableZoneResponse() = default;

void GetAvaliableZoneResponse::validate()
{
}

web::json::value GetAvaliableZoneResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool GetAvaliableZoneResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<GetAvailableZoneResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<GetAvailableZoneResponseBody>& GetAvaliableZoneResponse::getBody()
{
    return body_;
}

void GetAvaliableZoneResponse::setBody(const std::vector<GetAvailableZoneResponseBody>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool GetAvaliableZoneResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void GetAvaliableZoneResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


