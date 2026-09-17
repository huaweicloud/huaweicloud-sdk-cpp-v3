

#include "huaweicloud/projectman/v4/model/BatchDeleteScrumWorkitemRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeleteScrumWorkitemRequest::BatchDeleteScrumWorkitemRequest()
{
    bodyIsSet_ = false;
}

BatchDeleteScrumWorkitemRequest::~BatchDeleteScrumWorkitemRequest() = default;

void BatchDeleteScrumWorkitemRequest::validate()
{
}

web::json::value BatchDeleteScrumWorkitemRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteScrumWorkitemRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDeleteModuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchDeleteModuleRequestBody BatchDeleteScrumWorkitemRequest::getBody() const
{
    return body_;
}

void BatchDeleteScrumWorkitemRequest::setBody(const BatchDeleteModuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteScrumWorkitemRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteScrumWorkitemRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


