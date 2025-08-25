

#include "huaweicloud/cce/v3/model/DeleteAutopilotAddonInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteAutopilotAddonInstanceResponse::DeleteAutopilotAddonInstanceResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteAutopilotAddonInstanceResponse::~DeleteAutopilotAddonInstanceResponse() = default;

void DeleteAutopilotAddonInstanceResponse::validate()
{
}

web::json::value DeleteAutopilotAddonInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteAutopilotAddonInstanceResponse::fromJson(const web::json::value& val)
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


std::string DeleteAutopilotAddonInstanceResponse::getBody() const
{
    return body_;
}

void DeleteAutopilotAddonInstanceResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAutopilotAddonInstanceResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAutopilotAddonInstanceResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


