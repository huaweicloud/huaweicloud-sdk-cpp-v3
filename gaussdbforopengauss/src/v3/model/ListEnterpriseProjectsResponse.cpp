

#include "huaweicloud/gaussdbforopengauss/v3/model/ListEnterpriseProjectsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListEnterpriseProjectsResponse::ListEnterpriseProjectsResponse()
{
    enterpriseProjectsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListEnterpriseProjectsResponse::~ListEnterpriseProjectsResponse() = default;

void ListEnterpriseProjectsResponse::validate()
{
}

web::json::value ListEnterpriseProjectsResponse::toJson() const
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
bool ListEnterpriseProjectsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_projects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_projects"));
        if(!fieldValue.is_null())
        {
            std::vector<EnterpriseProjectInfoResult> refVal;
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


std::vector<EnterpriseProjectInfoResult>& ListEnterpriseProjectsResponse::getEnterpriseProjects()
{
    return enterpriseProjects_;
}

void ListEnterpriseProjectsResponse::setEnterpriseProjects(const std::vector<EnterpriseProjectInfoResult>& value)
{
    enterpriseProjects_ = value;
    enterpriseProjectsIsSet_ = true;
}

bool ListEnterpriseProjectsResponse::enterpriseProjectsIsSet() const
{
    return enterpriseProjectsIsSet_;
}

void ListEnterpriseProjectsResponse::unsetenterpriseProjects()
{
    enterpriseProjectsIsSet_ = false;
}

int32_t ListEnterpriseProjectsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListEnterpriseProjectsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListEnterpriseProjectsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListEnterpriseProjectsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


