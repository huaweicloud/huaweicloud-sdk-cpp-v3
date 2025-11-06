

#include "huaweicloud/codeartsrepo/v4/model/UpdateBranchDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateBranchDto::UpdateBranchDto()
{
    newBranch_ = "";
    newBranchIsSet_ = false;
    oldBranch_ = "";
    oldBranchIsSet_ = false;
}

UpdateBranchDto::~UpdateBranchDto() = default;

void UpdateBranchDto::validate()
{
}

web::json::value UpdateBranchDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(newBranchIsSet_) {
        val[utility::conversions::to_string_t("new_branch")] = ModelBase::toJson(newBranch_);
    }
    if(oldBranchIsSet_) {
        val[utility::conversions::to_string_t("old_branch")] = ModelBase::toJson(oldBranch_);
    }

    return val;
}
bool UpdateBranchDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("new_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldBranch(refVal);
        }
    }
    return ok;
}


std::string UpdateBranchDto::getNewBranch() const
{
    return newBranch_;
}

void UpdateBranchDto::setNewBranch(const std::string& value)
{
    newBranch_ = value;
    newBranchIsSet_ = true;
}

bool UpdateBranchDto::newBranchIsSet() const
{
    return newBranchIsSet_;
}

void UpdateBranchDto::unsetnewBranch()
{
    newBranchIsSet_ = false;
}

std::string UpdateBranchDto::getOldBranch() const
{
    return oldBranch_;
}

void UpdateBranchDto::setOldBranch(const std::string& value)
{
    oldBranch_ = value;
    oldBranchIsSet_ = true;
}

bool UpdateBranchDto::oldBranchIsSet() const
{
    return oldBranchIsSet_;
}

void UpdateBranchDto::unsetoldBranch()
{
    oldBranchIsSet_ = false;
}

}
}
}
}
}


