

#include "huaweicloud/codeartsdeploy/v2/model/ShowExecutionParamsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowExecutionParamsResponse::ShowExecutionParamsResponse()
{
    bodyIsSet_ = false;
}

ShowExecutionParamsResponse::~ShowExecutionParamsResponse() = default;

void ShowExecutionParamsResponse::validate()
{
}

web::json::value ShowExecutionParamsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowExecutionParamsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ConfigInfo>& ShowExecutionParamsResponse::getBody()
{
    return body_;
}

void ShowExecutionParamsResponse::setBody(const std::vector<ConfigInfo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowExecutionParamsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowExecutionParamsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


