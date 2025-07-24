

#include "huaweicloud/cloudtest/v1/model/CreateIteratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateIteratorRequest::CreateIteratorRequest()
{
    branchUri_ = "";
    branchUriIsSet_ = false;
    bodyIsSet_ = false;
}

CreateIteratorRequest::~CreateIteratorRequest() = default;

void CreateIteratorRequest::validate()
{
}

web::json::value CreateIteratorRequest::toJson() const
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
bool CreateIteratorRequest::fromJson(const web::json::value& val)
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


std::string CreateIteratorRequest::getBranchUri() const
{
    return branchUri_;
}

void CreateIteratorRequest::setBranchUri(const std::string& value)
{
    branchUri_ = value;
    branchUriIsSet_ = true;
}

bool CreateIteratorRequest::branchUriIsSet() const
{
    return branchUriIsSet_;
}

void CreateIteratorRequest::unsetbranchUri()
{
    branchUriIsSet_ = false;
}

IteratorVersionInfo CreateIteratorRequest::getBody() const
{
    return body_;
}

void CreateIteratorRequest::setBody(const IteratorVersionInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateIteratorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateIteratorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


