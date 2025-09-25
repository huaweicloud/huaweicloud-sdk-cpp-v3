

#include "huaweicloud/codeartspipeline/v2/model/UploadBasicPluginResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UploadBasicPluginResponse::UploadBasicPluginResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UploadBasicPluginResponse::~UploadBasicPluginResponse() = default;

void UploadBasicPluginResponse::validate()
{
}

web::json::value UploadBasicPluginResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UploadBasicPluginResponse::fromJson(const web::json::value& val)
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


std::string UploadBasicPluginResponse::getBody() const
{
    return body_;
}

void UploadBasicPluginResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadBasicPluginResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadBasicPluginResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


