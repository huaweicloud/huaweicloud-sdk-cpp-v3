

#include "huaweicloud/codehub/v3/model/BranchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




BranchResponse::BranchResponse()
{
    branchesIsSet_ = false;
    total_ = 0.0;
    totalIsSet_ = false;
}

BranchResponse::~BranchResponse() = default;

void BranchResponse::validate()
{
}

web::json::value BranchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchesIsSet_) {
        val[utility::conversions::to_string_t("branches")] = ModelBase::toJson(branches_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool BranchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branches"));
        if(!fieldValue.is_null())
        {
            std::vector<BranchesItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<BranchesItem>& BranchResponse::getBranches()
{
    return branches_;
}

void BranchResponse::setBranches(const std::vector<BranchesItem>& value)
{
    branches_ = value;
    branchesIsSet_ = true;
}

bool BranchResponse::branchesIsSet() const
{
    return branchesIsSet_;
}

void BranchResponse::unsetbranches()
{
    branchesIsSet_ = false;
}

double BranchResponse::getTotal() const
{
    return total_;
}

void BranchResponse::setTotal(double value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BranchResponse::totalIsSet() const
{
    return totalIsSet_;
}

void BranchResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


