

#include "huaweicloud/iotda/v5/model/CreateSyncHarmonySoftBusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateSyncHarmonySoftBusResponse::CreateSyncHarmonySoftBusResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CreateSyncHarmonySoftBusResponse::~CreateSyncHarmonySoftBusResponse() = default;

void CreateSyncHarmonySoftBusResponse::validate()
{
}

web::json::value CreateSyncHarmonySoftBusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateSyncHarmonySoftBusResponse::fromJson(const web::json::value& val)
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


std::string CreateSyncHarmonySoftBusResponse::getBody() const
{
    return body_;
}

void CreateSyncHarmonySoftBusResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSyncHarmonySoftBusResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSyncHarmonySoftBusResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


