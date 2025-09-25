

#include "huaweicloud/codeartspipeline/v2/model/CreatePluginVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePluginVersionResponse::CreatePluginVersionResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CreatePluginVersionResponse::~CreatePluginVersionResponse() = default;

void CreatePluginVersionResponse::validate()
{
}

web::json::value CreatePluginVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreatePluginVersionResponse::fromJson(const web::json::value& val)
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


std::string CreatePluginVersionResponse::getBody() const
{
    return body_;
}

void CreatePluginVersionResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePluginVersionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePluginVersionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


