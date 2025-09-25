

#include "huaweicloud/codeartspipeline/v2/model/PublishPluginResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PublishPluginResponse::PublishPluginResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

PublishPluginResponse::~PublishPluginResponse() = default;

void PublishPluginResponse::validate()
{
}

web::json::value PublishPluginResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool PublishPluginResponse::fromJson(const web::json::value& val)
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


std::string PublishPluginResponse::getBody() const
{
    return body_;
}

void PublishPluginResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PublishPluginResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void PublishPluginResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


