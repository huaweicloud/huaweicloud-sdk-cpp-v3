

#include "huaweicloud/dbss/v1/model/BatchAddResourceTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BatchAddResourceTagResponse::BatchAddResourceTagResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

BatchAddResourceTagResponse::~BatchAddResourceTagResponse() = default;

void BatchAddResourceTagResponse::validate()
{
}

web::json::value BatchAddResourceTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchAddResourceTagResponse::fromJson(const web::json::value& val)
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


std::string BatchAddResourceTagResponse::getBody() const
{
    return body_;
}

void BatchAddResourceTagResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAddResourceTagResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAddResourceTagResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


