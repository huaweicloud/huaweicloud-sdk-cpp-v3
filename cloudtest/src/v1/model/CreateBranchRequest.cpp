

#include "huaweicloud/cloudtest/v1/model/CreateBranchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateBranchRequest::CreateBranchRequest()
{
    bodyIsSet_ = false;
}

CreateBranchRequest::~CreateBranchRequest() = default;

void CreateBranchRequest::validate()
{
}

web::json::value CreateBranchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateBranchRequest::fromJson(const web::json::value& val)
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


BranchVersionInfo CreateBranchRequest::getBody() const
{
    return body_;
}

void CreateBranchRequest::setBody(const BranchVersionInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateBranchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateBranchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


