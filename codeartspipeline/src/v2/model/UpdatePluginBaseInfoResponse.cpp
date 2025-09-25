

#include "huaweicloud/codeartspipeline/v2/model/UpdatePluginBaseInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdatePluginBaseInfoResponse::UpdatePluginBaseInfoResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpdatePluginBaseInfoResponse::~UpdatePluginBaseInfoResponse() = default;

void UpdatePluginBaseInfoResponse::validate()
{
}

web::json::value UpdatePluginBaseInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePluginBaseInfoResponse::fromJson(const web::json::value& val)
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


std::string UpdatePluginBaseInfoResponse::getBody() const
{
    return body_;
}

void UpdatePluginBaseInfoResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePluginBaseInfoResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePluginBaseInfoResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


