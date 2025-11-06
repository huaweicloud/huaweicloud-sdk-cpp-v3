

#include "huaweicloud/codeartsrepo/v4/model/StatisticsParamsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




StatisticsParamsDto::StatisticsParamsDto()
{
    branchName_ = "";
    branchNameIsSet_ = false;
}

StatisticsParamsDto::~StatisticsParamsDto() = default;

void StatisticsParamsDto::validate()
{
}

web::json::value StatisticsParamsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }

    return val;
}
bool StatisticsParamsDto::fromJson(const web::json::value& val)
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
    return ok;
}


std::string StatisticsParamsDto::getBranchName() const
{
    return branchName_;
}

void StatisticsParamsDto::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool StatisticsParamsDto::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void StatisticsParamsDto::unsetbranchName()
{
    branchNameIsSet_ = false;
}

}
}
}
}
}


