

#include "huaweicloud/cloudtest/v1/model/CreateProjectBranchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateProjectBranchRequest::CreateProjectBranchRequest()
{
    bodyIsSet_ = false;
}

CreateProjectBranchRequest::~CreateProjectBranchRequest() = default;

void CreateProjectBranchRequest::validate()
{
}

web::json::value CreateProjectBranchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateProjectBranchRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BranchVersionInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BranchVersionInfo CreateProjectBranchRequest::getBody() const
{
    return body_;
}

void CreateProjectBranchRequest::setBody(const BranchVersionInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProjectBranchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProjectBranchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


