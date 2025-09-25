

#include "huaweicloud/codeartspipeline/v2/model/PublishPluginDraftResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PublishPluginDraftResponse::PublishPluginDraftResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

PublishPluginDraftResponse::~PublishPluginDraftResponse() = default;

void PublishPluginDraftResponse::validate()
{
}

web::json::value PublishPluginDraftResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool PublishPluginDraftResponse::fromJson(const web::json::value& val)
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


std::string PublishPluginDraftResponse::getBody() const
{
    return body_;
}

void PublishPluginDraftResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PublishPluginDraftResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void PublishPluginDraftResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


