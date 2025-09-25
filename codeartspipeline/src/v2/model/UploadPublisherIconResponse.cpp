

#include "huaweicloud/codeartspipeline/v2/model/UploadPublisherIconResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UploadPublisherIconResponse::UploadPublisherIconResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UploadPublisherIconResponse::~UploadPublisherIconResponse() = default;

void UploadPublisherIconResponse::validate()
{
}

web::json::value UploadPublisherIconResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UploadPublisherIconResponse::fromJson(const web::json::value& val)
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


std::string UploadPublisherIconResponse::getBody() const
{
    return body_;
}

void UploadPublisherIconResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadPublisherIconResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadPublisherIconResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


