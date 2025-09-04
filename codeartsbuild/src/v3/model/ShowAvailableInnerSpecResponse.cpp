

#include "huaweicloud/codeartsbuild/v3/model/ShowAvailableInnerSpecResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowAvailableInnerSpecResponse::ShowAvailableInnerSpecResponse()
{
    bodyIsSet_ = false;
}

ShowAvailableInnerSpecResponse::~ShowAvailableInnerSpecResponse() = default;

void ShowAvailableInnerSpecResponse::validate()
{
}

web::json::value ShowAvailableInnerSpecResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowAvailableInnerSpecResponse::fromJson(const web::json::value& val)
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


std::vector<std::string>& ShowAvailableInnerSpecResponse::getBody()
{
    return body_;
}

void ShowAvailableInnerSpecResponse::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowAvailableInnerSpecResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowAvailableInnerSpecResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


