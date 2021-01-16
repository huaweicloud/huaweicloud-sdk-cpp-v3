

#include "huaweicloud/ims/v2/model/ImportImageQuickRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ImportImageQuickRequest::ImportImageQuickRequest()
{
    bodyIsSet_ = false;
}

ImportImageQuickRequest::~ImportImageQuickRequest() = default;

void ImportImageQuickRequest::validate()
{
}

web::json::value ImportImageQuickRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ImportImageQuickRequest::fromJson(const web::json::value& val)
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


QuickImportImageByFileRequestBody ImportImageQuickRequest::getBody() const
{
    return body_;
}

void ImportImageQuickRequest::setBody(const QuickImportImageByFileRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportImageQuickRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportImageQuickRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


