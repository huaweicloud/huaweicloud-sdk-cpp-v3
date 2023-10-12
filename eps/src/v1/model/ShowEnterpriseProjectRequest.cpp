

#include "huaweicloud/eps/v1/model/ShowEnterpriseProjectRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ShowEnterpriseProjectRequest::ShowEnterpriseProjectRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ShowEnterpriseProjectRequest::~ShowEnterpriseProjectRequest() = default;

void ShowEnterpriseProjectRequest::validate()
{
}

web::json::value ShowEnterpriseProjectRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ShowEnterpriseProjectRequest::fromJson(const web::json::value& val)
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


std::string ShowEnterpriseProjectRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowEnterpriseProjectRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowEnterpriseProjectRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowEnterpriseProjectRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


