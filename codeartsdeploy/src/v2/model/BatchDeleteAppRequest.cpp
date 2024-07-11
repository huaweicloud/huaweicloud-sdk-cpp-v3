

#include "huaweicloud/codeartsdeploy/v2/model/BatchDeleteAppRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




BatchDeleteAppRequest::BatchDeleteAppRequest()
{
    bodyIsSet_ = false;
}

BatchDeleteAppRequest::~BatchDeleteAppRequest() = default;

void BatchDeleteAppRequest::validate()
{
}

web::json::value BatchDeleteAppRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteAppRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AppBatchDeleteRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AppBatchDeleteRequest BatchDeleteAppRequest::getBody() const
{
    return body_;
}

void BatchDeleteAppRequest::setBody(const AppBatchDeleteRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteAppRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteAppRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


