

#include "huaweicloud/modelarts/v1/model/ShowWorkspaceQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkspaceQuotasResponse::ShowWorkspaceQuotasResponse()
{
    quotasIsSet_ = false;
}

ShowWorkspaceQuotasResponse::~ShowWorkspaceQuotasResponse() = default;

void ShowWorkspaceQuotasResponse::validate()
{
}

web::json::value ShowWorkspaceQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool ShowWorkspaceQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkspaceQuotasResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


std::vector<WorkspaceQuotasResponse>& ShowWorkspaceQuotasResponse::getQuotas()
{
    return quotas_;
}

void ShowWorkspaceQuotasResponse::setQuotas(const std::vector<WorkspaceQuotasResponse>& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ShowWorkspaceQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ShowWorkspaceQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


