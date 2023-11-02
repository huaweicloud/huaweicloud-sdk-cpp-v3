

#include "huaweicloud/dbss/v1/model/BatchDeleteResourceTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BatchDeleteResourceTagResponse::BatchDeleteResourceTagResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

BatchDeleteResourceTagResponse::~BatchDeleteResourceTagResponse() = default;

void BatchDeleteResourceTagResponse::validate()
{
}

web::json::value BatchDeleteResourceTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteResourceTagResponse::fromJson(const web::json::value& val)
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


std::string BatchDeleteResourceTagResponse::getBody() const
{
    return body_;
}

void BatchDeleteResourceTagResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteResourceTagResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteResourceTagResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


