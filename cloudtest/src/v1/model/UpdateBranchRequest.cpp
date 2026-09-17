

#include "huaweicloud/cloudtest/v1/model/UpdateBranchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateBranchRequest::UpdateBranchRequest()
{
    branchUri_ = "";
    branchUriIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateBranchRequest::~UpdateBranchRequest() = default;

void UpdateBranchRequest::validate()
{
}

web::json::value UpdateBranchRequest::toJson() const
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
bool UpdateBranchRequest::fromJson(const web::json::value& val)
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
            BranchVersionInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateBranchRequest::getBranchUri() const
{
    return branchUri_;
}

void UpdateBranchRequest::setBranchUri(const std::string& value)
{
    branchUri_ = value;
    branchUriIsSet_ = true;
}

bool UpdateBranchRequest::branchUriIsSet() const
{
    return branchUriIsSet_;
}

void UpdateBranchRequest::unsetbranchUri()
{
    branchUriIsSet_ = false;
}

BranchVersionInfo UpdateBranchRequest::getBody() const
{
    return body_;
}

void UpdateBranchRequest::setBody(const BranchVersionInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBranchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBranchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


