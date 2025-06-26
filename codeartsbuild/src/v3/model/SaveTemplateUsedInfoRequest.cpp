

#include "huaweicloud/codeartsbuild/v3/model/SaveTemplateUsedInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




SaveTemplateUsedInfoRequest::SaveTemplateUsedInfoRequest()
{
    bodyIsSet_ = false;
}

SaveTemplateUsedInfoRequest::~SaveTemplateUsedInfoRequest() = default;

void SaveTemplateUsedInfoRequest::validate()
{
}

web::json::value SaveTemplateUsedInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SaveTemplateUsedInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SaveTemplateUsedInfoRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SaveTemplateUsedInfoRequestBody SaveTemplateUsedInfoRequest::getBody() const
{
    return body_;
}

void SaveTemplateUsedInfoRequest::setBody(const SaveTemplateUsedInfoRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SaveTemplateUsedInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SaveTemplateUsedInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


