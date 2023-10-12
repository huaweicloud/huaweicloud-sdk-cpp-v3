

#include "huaweicloud/eps/v1/model/UpdateEnterpriseProjectResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




UpdateEnterpriseProjectResponse::UpdateEnterpriseProjectResponse()
{
    enterpriseProjectIsSet_ = false;
}

UpdateEnterpriseProjectResponse::~UpdateEnterpriseProjectResponse() = default;

void UpdateEnterpriseProjectResponse::validate()
{
}

web::json::value UpdateEnterpriseProjectResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project")] = ModelBase::toJson(enterpriseProject_);
    }

    return val;
}
bool UpdateEnterpriseProjectResponse::fromJson(const web::json::value& val)
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


EpDetail UpdateEnterpriseProjectResponse::getEnterpriseProject() const
{
    return enterpriseProject_;
}

void UpdateEnterpriseProjectResponse::setEnterpriseProject(const EpDetail& value)
{
    enterpriseProject_ = value;
    enterpriseProjectIsSet_ = true;
}

bool UpdateEnterpriseProjectResponse::enterpriseProjectIsSet() const
{
    return enterpriseProjectIsSet_;
}

void UpdateEnterpriseProjectResponse::unsetenterpriseProject()
{
    enterpriseProjectIsSet_ = false;
}

}
}
}
}
}


