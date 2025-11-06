

#include "huaweicloud/codeartsrepo/v3/model/BranchList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




BranchList::BranchList()
{
    branchesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

BranchList::~BranchList() = default;

void BranchList::validate()
{
}

web::json::value BranchList::toJson() const
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
bool BranchList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branches"));
        if(!fieldValue.is_null())
        {
            std::vector<Branch> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<Branch>& BranchList::getBranches()
{
    return branches_;
}

void BranchList::setBranches(const std::vector<Branch>& value)
{
    branches_ = value;
    branchesIsSet_ = true;
}

bool BranchList::branchesIsSet() const
{
    return branchesIsSet_;
}

void BranchList::unsetbranches()
{
    branchesIsSet_ = false;
}

int32_t BranchList::getTotal() const
{
    return total_;
}

void BranchList::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BranchList::totalIsSet() const
{
    return totalIsSet_;
}

void BranchList::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


