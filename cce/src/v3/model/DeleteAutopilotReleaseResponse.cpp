

#include "huaweicloud/cce/v3/model/DeleteAutopilotReleaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteAutopilotReleaseResponse::DeleteAutopilotReleaseResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteAutopilotReleaseResponse::~DeleteAutopilotReleaseResponse() = default;

void DeleteAutopilotReleaseResponse::validate()
{
}

web::json::value DeleteAutopilotReleaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteAutopilotReleaseResponse::fromJson(const web::json::value& val)
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


std::string DeleteAutopilotReleaseResponse::getBody() const
{
    return body_;
}

void DeleteAutopilotReleaseResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAutopilotReleaseResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAutopilotReleaseResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


