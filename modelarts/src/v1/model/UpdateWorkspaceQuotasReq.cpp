

#include "huaweicloud/modelarts/v1/model/UpdateWorkspaceQuotasReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateWorkspaceQuotasReq::UpdateWorkspaceQuotasReq()
{
    quotasIsSet_ = false;
}

UpdateWorkspaceQuotasReq::~UpdateWorkspaceQuotasReq() = default;

void UpdateWorkspaceQuotasReq::validate()
{
}

web::json::value UpdateWorkspaceQuotasReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool UpdateWorkspaceQuotasReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateWorkspaceQuotasReq_quotas> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


std::vector<UpdateWorkspaceQuotasReq_quotas>& UpdateWorkspaceQuotasReq::getQuotas()
{
    return quotas_;
}

void UpdateWorkspaceQuotasReq::setQuotas(const std::vector<UpdateWorkspaceQuotasReq_quotas>& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool UpdateWorkspaceQuotasReq::quotasIsSet() const
{
    return quotasIsSet_;
}

void UpdateWorkspaceQuotasReq::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


