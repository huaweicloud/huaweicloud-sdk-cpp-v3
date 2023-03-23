

#include "huaweicloud/eps/v1/model/ShowEnterpriseProjectResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ShowEnterpriseProjectResponse::ShowEnterpriseProjectResponse()
{
    enterpriseProjectIsSet_ = false;
}

ShowEnterpriseProjectResponse::~ShowEnterpriseProjectResponse() = default;

void ShowEnterpriseProjectResponse::validate()
{
}

web::json::value ShowEnterpriseProjectResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project")] = ModelBase::toJson(enterpriseProject_);
    }

    return val;
}

bool ShowEnterpriseProjectResponse::fromJson(const web::json::value& val)
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


EpDetail ShowEnterpriseProjectResponse::getEnterpriseProject() const
{
    return enterpriseProject_;
}

void ShowEnterpriseProjectResponse::setEnterpriseProject(const EpDetail& value)
{
    enterpriseProject_ = value;
    enterpriseProjectIsSet_ = true;
}

bool ShowEnterpriseProjectResponse::enterpriseProjectIsSet() const
{
    return enterpriseProjectIsSet_;
}

void ShowEnterpriseProjectResponse::unsetenterpriseProject()
{
    enterpriseProjectIsSet_ = false;
}

}
}
}
}
}


