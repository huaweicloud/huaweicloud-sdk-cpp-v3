

#include "huaweicloud/cce/v3/model/DeleteReleaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteReleaseResponse::DeleteReleaseResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteReleaseResponse::~DeleteReleaseResponse() = default;

void DeleteReleaseResponse::validate()
{
}

web::json::value DeleteReleaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteReleaseResponse::fromJson(const web::json::value& val)
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


std::string DeleteReleaseResponse::getBody() const
{
    return body_;
}

void DeleteReleaseResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteReleaseResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteReleaseResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


