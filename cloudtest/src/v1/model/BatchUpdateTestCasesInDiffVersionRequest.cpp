

#include "huaweicloud/cloudtest/v1/model/BatchUpdateTestCasesInDiffVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchUpdateTestCasesInDiffVersionRequest::BatchUpdateTestCasesInDiffVersionRequest()
{
    bodyIsSet_ = false;
}

BatchUpdateTestCasesInDiffVersionRequest::~BatchUpdateTestCasesInDiffVersionRequest() = default;

void BatchUpdateTestCasesInDiffVersionRequest::validate()
{
}

web::json::value BatchUpdateTestCasesInDiffVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdateTestCasesInDiffVersionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<TestCaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<TestCaseInfo>& BatchUpdateTestCasesInDiffVersionRequest::getBody()
{
    return body_;
}

void BatchUpdateTestCasesInDiffVersionRequest::setBody(const std::vector<TestCaseInfo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateTestCasesInDiffVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateTestCasesInDiffVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


