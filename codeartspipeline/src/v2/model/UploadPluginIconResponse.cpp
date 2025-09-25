

#include "huaweicloud/codeartspipeline/v2/model/UploadPluginIconResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UploadPluginIconResponse::UploadPluginIconResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UploadPluginIconResponse::~UploadPluginIconResponse() = default;

void UploadPluginIconResponse::validate()
{
}

web::json::value UploadPluginIconResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UploadPluginIconResponse::fromJson(const web::json::value& val)
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


std::string UploadPluginIconResponse::getBody() const
{
    return body_;
}

void UploadPluginIconResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadPluginIconResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadPluginIconResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


