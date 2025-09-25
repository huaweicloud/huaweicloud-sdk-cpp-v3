

#include "huaweicloud/codehub/v3/model/ShowRepositoryStatisticsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowRepositoryStatisticsRequestBody::ShowRepositoryStatisticsRequestBody()
{
    branchName_ = "";
    branchNameIsSet_ = false;
}

ShowRepositoryStatisticsRequestBody::~ShowRepositoryStatisticsRequestBody() = default;

void ShowRepositoryStatisticsRequestBody::validate()
{
}

web::json::value ShowRepositoryStatisticsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }

    return val;
}
bool ShowRepositoryStatisticsRequestBody::fromJson(const web::json::value& val)
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


std::string ShowRepositoryStatisticsRequestBody::getBranchName() const
{
    return branchName_;
}

void ShowRepositoryStatisticsRequestBody::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool ShowRepositoryStatisticsRequestBody::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void ShowRepositoryStatisticsRequestBody::unsetbranchName()
{
    branchNameIsSet_ = false;
}

}
}
}
}
}


