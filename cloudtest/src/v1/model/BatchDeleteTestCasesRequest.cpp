

#include "huaweicloud/cloudtest/v1/model/BatchDeleteTestCasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchDeleteTestCasesRequest::BatchDeleteTestCasesRequest()
{
    isAsync_ = false;
    isAsyncIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteTestCasesRequest::~BatchDeleteTestCasesRequest() = default;

void BatchDeleteTestCasesRequest::validate()
{
}

web::json::value BatchDeleteTestCasesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isAsyncIsSet_) {
        val[utility::conversions::to_string_t("is_async")] = ModelBase::toJson(isAsync_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteTestCasesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_async"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_async"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAsync(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteTestCaseInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


bool BatchDeleteTestCasesRequest::isIsAsync() const
{
    return isAsync_;
}

void BatchDeleteTestCasesRequest::setIsAsync(bool value)
{
    isAsync_ = value;
    isAsyncIsSet_ = true;
}

bool BatchDeleteTestCasesRequest::isAsyncIsSet() const
{
    return isAsyncIsSet_;
}

void BatchDeleteTestCasesRequest::unsetisAsync()
{
    isAsyncIsSet_ = false;
}

DeleteTestCaseInfo BatchDeleteTestCasesRequest::getBody() const
{
    return body_;
}

void BatchDeleteTestCasesRequest::setBody(const DeleteTestCaseInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteTestCasesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteTestCasesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


