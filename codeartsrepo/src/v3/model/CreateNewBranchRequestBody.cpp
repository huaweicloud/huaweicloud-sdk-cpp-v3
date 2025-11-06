

#include "huaweicloud/codeartsrepo/v3/model/CreateNewBranchRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CreateNewBranchRequestBody::CreateNewBranchRequestBody()
{
    branchName_ = "";
    branchNameIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
}

CreateNewBranchRequestBody::~CreateNewBranchRequestBody() = default;

void CreateNewBranchRequestBody::validate()
{
}

web::json::value CreateNewBranchRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }

    return val;
}
bool CreateNewBranchRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
        }
    }
    return ok;
}


std::string CreateNewBranchRequestBody::getBranchName() const
{
    return branchName_;
}

void CreateNewBranchRequestBody::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool CreateNewBranchRequestBody::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void CreateNewBranchRequestBody::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::string CreateNewBranchRequestBody::getRef() const
{
    return ref_;
}

void CreateNewBranchRequestBody::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool CreateNewBranchRequestBody::refIsSet() const
{
    return refIsSet_;
}

void CreateNewBranchRequestBody::unsetref()
{
    refIsSet_ = false;
}

}
}
}
}
}


