

#include "huaweicloud/codeartspipeline/v2/model/UpdatePluginDraftResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdatePluginDraftResponse::UpdatePluginDraftResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpdatePluginDraftResponse::~UpdatePluginDraftResponse() = default;

void UpdatePluginDraftResponse::validate()
{
}

web::json::value UpdatePluginDraftResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePluginDraftResponse::fromJson(const web::json::value& val)
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


std::string UpdatePluginDraftResponse::getBody() const
{
    return body_;
}

void UpdatePluginDraftResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePluginDraftResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePluginDraftResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


