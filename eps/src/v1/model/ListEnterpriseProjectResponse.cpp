

#include "huaweicloud/eps/v1/model/ListEnterpriseProjectResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ListEnterpriseProjectResponse::ListEnterpriseProjectResponse()
{
    enterpriseProjectsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListEnterpriseProjectResponse::~ListEnterpriseProjectResponse() = default;

void ListEnterpriseProjectResponse::validate()
{
}

web::json::value ListEnterpriseProjectResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectsIsSet_) {
        val[utility::conversions::to_string_t("enterprise_projects")] = ModelBase::toJson(enterpriseProjects_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ListEnterpriseProjectResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_projects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_projects"));
        if(!fieldValue.is_null())
        {
            std::vector<EpDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjects(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}

std::vector<EpDetail>& ListEnterpriseProjectResponse::getEnterpriseProjects()
{
    return enterpriseProjects_;
}

void ListEnterpriseProjectResponse::setEnterpriseProjects(const std::vector<EpDetail>& value)
{
    enterpriseProjects_ = value;
    enterpriseProjectsIsSet_ = true;
}

bool ListEnterpriseProjectResponse::enterpriseProjectsIsSet() const
{
    return enterpriseProjectsIsSet_;
}

void ListEnterpriseProjectResponse::unsetenterpriseProjects()
{
    enterpriseProjectsIsSet_ = false;
}

int32_t ListEnterpriseProjectResponse::getTotalCount() const
{
    return totalCount_;
}

void ListEnterpriseProjectResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListEnterpriseProjectResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListEnterpriseProjectResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


