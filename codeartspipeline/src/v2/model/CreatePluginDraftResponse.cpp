

#include "huaweicloud/codeartspipeline/v2/model/CreatePluginDraftResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePluginDraftResponse::CreatePluginDraftResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CreatePluginDraftResponse::~CreatePluginDraftResponse() = default;

void CreatePluginDraftResponse::validate()
{
}

web::json::value CreatePluginDraftResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreatePluginDraftResponse::fromJson(const web::json::value& val)
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


std::string CreatePluginDraftResponse::getBody() const
{
    return body_;
}

void CreatePluginDraftResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePluginDraftResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePluginDraftResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


