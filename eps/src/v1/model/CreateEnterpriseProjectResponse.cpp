

#include "huaweicloud/eps/v1/model/CreateEnterpriseProjectResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




CreateEnterpriseProjectResponse::CreateEnterpriseProjectResponse()
{
    enterpriseProjectIsSet_ = false;
}

CreateEnterpriseProjectResponse::~CreateEnterpriseProjectResponse() = default;

void CreateEnterpriseProjectResponse::validate()
{
}

web::json::value CreateEnterpriseProjectResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project")] = ModelBase::toJson(enterpriseProject_);
    }

    return val;
}

bool CreateEnterpriseProjectResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project"));
        if(!fieldValue.is_null())
        {
            EpDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProject(refVal);
        }
    }
    return ok;
}

EpDetail CreateEnterpriseProjectResponse::getEnterpriseProject() const
{
    return enterpriseProject_;
}

void CreateEnterpriseProjectResponse::setEnterpriseProject(const EpDetail& value)
{
    enterpriseProject_ = value;
    enterpriseProjectIsSet_ = true;
}

bool CreateEnterpriseProjectResponse::enterpriseProjectIsSet() const
{
    return enterpriseProjectIsSet_;
}

void CreateEnterpriseProjectResponse::unsetenterpriseProject()
{
    enterpriseProjectIsSet_ = false;
}

}
}
}
}
}


