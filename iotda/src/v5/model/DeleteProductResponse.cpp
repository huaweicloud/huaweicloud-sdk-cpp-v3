

#include "huaweicloud/iotda/v5/model/DeleteProductResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteProductResponse::DeleteProductResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteProductResponse::~DeleteProductResponse() = default;

void DeleteProductResponse::validate()
{
}

web::json::value DeleteProductResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteProductResponse::fromJson(const web::json::value& val)
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


std::string DeleteProductResponse::getBody() const
{
    return body_;
}

void DeleteProductResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteProductResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteProductResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


