

#include "huaweicloud/cloudtest/v1/model/CreateTestIteratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateTestIteratorRequest::CreateTestIteratorRequest()
{
    branchUri_ = "";
    branchUriIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTestIteratorRequest::~CreateTestIteratorRequest() = default;

void CreateTestIteratorRequest::validate()
{
}

web::json::value CreateTestIteratorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchUriIsSet_) {
        val[utility::conversions::to_string_t("branch_uri")] = ModelBase::toJson(branchUri_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateTestIteratorRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branch_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IteratorVersionInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTestIteratorRequest::getBranchUri() const
{
    return branchUri_;
}

void CreateTestIteratorRequest::setBranchUri(const std::string& value)
{
    branchUri_ = value;
    branchUriIsSet_ = true;
}

bool CreateTestIteratorRequest::branchUriIsSet() const
{
    return branchUriIsSet_;
}

void CreateTestIteratorRequest::unsetbranchUri()
{
    branchUriIsSet_ = false;
}

IteratorVersionInfo CreateTestIteratorRequest::getBody() const
{
    return body_;
}

void CreateTestIteratorRequest::setBody(const IteratorVersionInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTestIteratorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTestIteratorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


