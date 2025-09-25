

#include "huaweicloud/codeartspipeline/v2/model/CreateBasicPluginResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreateBasicPluginResponse::CreateBasicPluginResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CreateBasicPluginResponse::~CreateBasicPluginResponse() = default;

void CreateBasicPluginResponse::validate()
{
}

web::json::value CreateBasicPluginResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateBasicPluginResponse::fromJson(const web::json::value& val)
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


std::string CreateBasicPluginResponse::getBody() const
{
    return body_;
}

void CreateBasicPluginResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateBasicPluginResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateBasicPluginResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


