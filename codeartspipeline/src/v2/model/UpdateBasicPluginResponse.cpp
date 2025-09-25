

#include "huaweicloud/codeartspipeline/v2/model/UpdateBasicPluginResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdateBasicPluginResponse::UpdateBasicPluginResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpdateBasicPluginResponse::~UpdateBasicPluginResponse() = default;

void UpdateBasicPluginResponse::validate()
{
}

web::json::value UpdateBasicPluginResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateBasicPluginResponse::fromJson(const web::json::value& val)
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


std::string UpdateBasicPluginResponse::getBody() const
{
    return body_;
}

void UpdateBasicPluginResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBasicPluginResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBasicPluginResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


