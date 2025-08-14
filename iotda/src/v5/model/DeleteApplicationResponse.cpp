

#include "huaweicloud/iotda/v5/model/DeleteApplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteApplicationResponse::DeleteApplicationResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteApplicationResponse::~DeleteApplicationResponse() = default;

void DeleteApplicationResponse::validate()
{
}

web::json::value DeleteApplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteApplicationResponse::fromJson(const web::json::value& val)
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


std::string DeleteApplicationResponse::getBody() const
{
    return body_;
}

void DeleteApplicationResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteApplicationResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteApplicationResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


