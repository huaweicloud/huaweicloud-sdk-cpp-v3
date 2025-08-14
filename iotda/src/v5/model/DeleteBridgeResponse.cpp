

#include "huaweicloud/iotda/v5/model/DeleteBridgeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteBridgeResponse::DeleteBridgeResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteBridgeResponse::~DeleteBridgeResponse() = default;

void DeleteBridgeResponse::validate()
{
}

web::json::value DeleteBridgeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteBridgeResponse::fromJson(const web::json::value& val)
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


std::string DeleteBridgeResponse::getBody() const
{
    return body_;
}

void DeleteBridgeResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteBridgeResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteBridgeResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


