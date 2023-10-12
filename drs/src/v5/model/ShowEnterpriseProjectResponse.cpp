

#include "huaweicloud/drs/v5/model/ShowEnterpriseProjectResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowEnterpriseProjectResponse::ShowEnterpriseProjectResponse()
{
    count_ = 0;
    countIsSet_ = false;
    enterpriseProjectListIsSet_ = false;
}

ShowEnterpriseProjectResponse::~ShowEnterpriseProjectResponse() = default;

void ShowEnterpriseProjectResponse::validate()
{
}

web::json::value ShowEnterpriseProjectResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(enterpriseProjectListIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_list")] = ModelBase::toJson(enterpriseProjectList_);
    }

    return val;
}
bool ShowEnterpriseProjectResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_list"));
        if(!fieldValue.is_null())
        {
            std::vector<EnterpriseProject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectList(refVal);
        }
    }
    return ok;
}


int32_t ShowEnterpriseProjectResponse::getCount() const
{
    return count_;
}

void ShowEnterpriseProjectResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowEnterpriseProjectResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowEnterpriseProjectResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<EnterpriseProject>& ShowEnterpriseProjectResponse::getEnterpriseProjectList()
{
    return enterpriseProjectList_;
}

void ShowEnterpriseProjectResponse::setEnterpriseProjectList(const std::vector<EnterpriseProject>& value)
{
    enterpriseProjectList_ = value;
    enterpriseProjectListIsSet_ = true;
}

bool ShowEnterpriseProjectResponse::enterpriseProjectListIsSet() const
{
    return enterpriseProjectListIsSet_;
}

void ShowEnterpriseProjectResponse::unsetenterpriseProjectList()
{
    enterpriseProjectListIsSet_ = false;
}

}
}
}
}
}


