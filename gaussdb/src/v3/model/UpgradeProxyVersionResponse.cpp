

#include "huaweicloud/gaussdb/v3/model/UpgradeProxyVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpgradeProxyVersionResponse::UpgradeProxyVersionResponse()
{
    updateResultIsSet_ = false;
}

UpgradeProxyVersionResponse::~UpgradeProxyVersionResponse() = default;

void UpgradeProxyVersionResponse::validate()
{
}

web::json::value UpgradeProxyVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(updateResultIsSet_) {
        val[utility::conversions::to_string_t("update_result")] = ModelBase::toJson(updateResult_);
    }

    return val;
}
bool UpgradeProxyVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("update_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_result"));
        if(!fieldValue.is_null())
        {
            std::vector<ProxyUpgradeVersionDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateResult(refVal);
        }
    }
    return ok;
}


std::vector<ProxyUpgradeVersionDetail>& UpgradeProxyVersionResponse::getUpdateResult()
{
    return updateResult_;
}

void UpgradeProxyVersionResponse::setUpdateResult(const std::vector<ProxyUpgradeVersionDetail>& value)
{
    updateResult_ = value;
    updateResultIsSet_ = true;
}

bool UpgradeProxyVersionResponse::updateResultIsSet() const
{
    return updateResultIsSet_;
}

void UpgradeProxyVersionResponse::unsetupdateResult()
{
    updateResultIsSet_ = false;
}

}
}
}
}
}


