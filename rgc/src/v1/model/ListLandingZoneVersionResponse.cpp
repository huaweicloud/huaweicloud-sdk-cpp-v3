

#include "huaweicloud/rgc/v1/model/ListLandingZoneVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListLandingZoneVersionResponse::ListLandingZoneVersionResponse()
{
    bodyIsSet_ = false;
}

ListLandingZoneVersionResponse::~ListLandingZoneVersionResponse() = default;

void ListLandingZoneVersionResponse::validate()
{
}

web::json::value ListLandingZoneVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListLandingZoneVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<LandingZoneVersionDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<LandingZoneVersionDetail>& ListLandingZoneVersionResponse::getBody()
{
    return body_;
}

void ListLandingZoneVersionResponse::setBody(const std::vector<LandingZoneVersionDetail>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListLandingZoneVersionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListLandingZoneVersionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


