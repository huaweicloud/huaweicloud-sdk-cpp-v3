

#include "huaweicloud/modelarts/v1/model/UpdateWorkspaceQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateWorkspaceQuotasResponse::UpdateWorkspaceQuotasResponse()
{
    quotasIsSet_ = false;
}

UpdateWorkspaceQuotasResponse::~UpdateWorkspaceQuotasResponse() = default;

void UpdateWorkspaceQuotasResponse::validate()
{
}

web::json::value UpdateWorkspaceQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool UpdateWorkspaceQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkspaceQuotasUpdateResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


std::vector<WorkspaceQuotasUpdateResponse>& UpdateWorkspaceQuotasResponse::getQuotas()
{
    return quotas_;
}

void UpdateWorkspaceQuotasResponse::setQuotas(const std::vector<WorkspaceQuotasUpdateResponse>& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool UpdateWorkspaceQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void UpdateWorkspaceQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


