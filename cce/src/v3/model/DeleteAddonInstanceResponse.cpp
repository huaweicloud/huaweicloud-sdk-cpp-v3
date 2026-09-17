

#include "huaweicloud/cce/v3/model/DeleteAddonInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteAddonInstanceResponse::DeleteAddonInstanceResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteAddonInstanceResponse::~DeleteAddonInstanceResponse() = default;

void DeleteAddonInstanceResponse::validate()
{
}

web::json::value DeleteAddonInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteAddonInstanceResponse::fromJson(const web::json::value& val)
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


std::string DeleteAddonInstanceResponse::getBody() const
{
    return body_;
}

void DeleteAddonInstanceResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAddonInstanceResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAddonInstanceResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


