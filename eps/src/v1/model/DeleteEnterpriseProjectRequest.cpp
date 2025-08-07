

#include "huaweicloud/eps/v1/model/DeleteEnterpriseProjectRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




DeleteEnterpriseProjectRequest::DeleteEnterpriseProjectRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

DeleteEnterpriseProjectRequest::~DeleteEnterpriseProjectRequest() = default;

void DeleteEnterpriseProjectRequest::validate()
{
}

web::json::value DeleteEnterpriseProjectRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool DeleteEnterpriseProjectRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string DeleteEnterpriseProjectRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DeleteEnterpriseProjectRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DeleteEnterpriseProjectRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DeleteEnterpriseProjectRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


