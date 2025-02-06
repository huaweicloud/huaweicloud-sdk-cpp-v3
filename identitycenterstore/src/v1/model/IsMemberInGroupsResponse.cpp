

#include "huaweicloud/identitycenterstore/v1/model/IsMemberInGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




IsMemberInGroupsResponse::IsMemberInGroupsResponse()
{
    resultsIsSet_ = false;
}

IsMemberInGroupsResponse::~IsMemberInGroupsResponse() = default;

void IsMemberInGroupsResponse::validate()
{
}

web::json::value IsMemberInGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}
bool IsMemberInGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<GroupMembershipExistenceResultDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}


std::vector<GroupMembershipExistenceResultDto>& IsMemberInGroupsResponse::getResults()
{
    return results_;
}

void IsMemberInGroupsResponse::setResults(const std::vector<GroupMembershipExistenceResultDto>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool IsMemberInGroupsResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void IsMemberInGroupsResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


