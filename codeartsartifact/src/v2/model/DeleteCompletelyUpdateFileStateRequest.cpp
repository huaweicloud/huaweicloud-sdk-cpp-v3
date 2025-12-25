

#include "huaweicloud/codeartsartifact/v2/model/DeleteCompletelyUpdateFileStateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




DeleteCompletelyUpdateFileStateRequest::DeleteCompletelyUpdateFileStateRequest()
{
    bodyIsSet_ = false;
}

DeleteCompletelyUpdateFileStateRequest::~DeleteCompletelyUpdateFileStateRequest() = default;

void DeleteCompletelyUpdateFileStateRequest::validate()
{
}

web::json::value DeleteCompletelyUpdateFileStateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteCompletelyUpdateFileStateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeleteCompletelyUpdateFileStateRequest::getBody()
{
    return body_;
}

void DeleteCompletelyUpdateFileStateRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteCompletelyUpdateFileStateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteCompletelyUpdateFileStateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


