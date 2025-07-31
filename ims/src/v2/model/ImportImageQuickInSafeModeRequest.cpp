

#include "huaweicloud/ims/v2/model/ImportImageQuickInSafeModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ImportImageQuickInSafeModeRequest::ImportImageQuickInSafeModeRequest()
{
    bodyIsSet_ = false;
}

ImportImageQuickInSafeModeRequest::~ImportImageQuickInSafeModeRequest() = default;

void ImportImageQuickInSafeModeRequest::validate()
{
}

web::json::value ImportImageQuickInSafeModeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ImportImageQuickInSafeModeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            QuickImportImageByFileRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


QuickImportImageByFileRequestBody ImportImageQuickInSafeModeRequest::getBody() const
{
    return body_;
}

void ImportImageQuickInSafeModeRequest::setBody(const QuickImportImageByFileRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportImageQuickInSafeModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportImageQuickInSafeModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


