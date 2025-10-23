

#include "huaweicloud/codehub/v4/model/BatchDeleteBranchDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchDeleteBranchDto::BatchDeleteBranchDto()
{
    branchesIsSet_ = false;
}

BatchDeleteBranchDto::~BatchDeleteBranchDto() = default;

void BatchDeleteBranchDto::validate()
{
}

web::json::value BatchDeleteBranchDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchesIsSet_) {
        val[utility::conversions::to_string_t("branches")] = ModelBase::toJson(branches_);
    }

    return val;
}
bool BatchDeleteBranchDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branches"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranches(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchDeleteBranchDto::getBranches()
{
    return branches_;
}

void BatchDeleteBranchDto::setBranches(const std::vector<std::string>& value)
{
    branches_ = value;
    branchesIsSet_ = true;
}

bool BatchDeleteBranchDto::branchesIsSet() const
{
    return branchesIsSet_;
}

void BatchDeleteBranchDto::unsetbranches()
{
    branchesIsSet_ = false;
}

}
}
}
}
}


