

#include "huaweicloud/codehub/v4/model/BatchDeleteProtectedBranchesBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchDeleteProtectedBranchesBodyDto::BatchDeleteProtectedBranchesBodyDto()
{
    namesIsSet_ = false;
}

BatchDeleteProtectedBranchesBodyDto::~BatchDeleteProtectedBranchesBodyDto() = default;

void BatchDeleteProtectedBranchesBodyDto::validate()
{
}

web::json::value BatchDeleteProtectedBranchesBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(namesIsSet_) {
        val[utility::conversions::to_string_t("names")] = ModelBase::toJson(names_);
    }

    return val;
}
bool BatchDeleteProtectedBranchesBodyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNames(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchDeleteProtectedBranchesBodyDto::getNames()
{
    return names_;
}

void BatchDeleteProtectedBranchesBodyDto::setNames(const std::vector<std::string>& value)
{
    names_ = value;
    namesIsSet_ = true;
}

bool BatchDeleteProtectedBranchesBodyDto::namesIsSet() const
{
    return namesIsSet_;
}

void BatchDeleteProtectedBranchesBodyDto::unsetnames()
{
    namesIsSet_ = false;
}

}
}
}
}
}


