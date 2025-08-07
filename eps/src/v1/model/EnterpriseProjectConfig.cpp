

#include "huaweicloud/eps/v1/model/EnterpriseProjectConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




EnterpriseProjectConfig::EnterpriseProjectConfig()
{
    deleteEpSupport_ = "";
    deleteEpSupportIsSet_ = false;
}

EnterpriseProjectConfig::~EnterpriseProjectConfig() = default;

void EnterpriseProjectConfig::validate()
{
}

web::json::value EnterpriseProjectConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deleteEpSupportIsSet_) {
        val[utility::conversions::to_string_t("delete_ep_support")] = ModelBase::toJson(deleteEpSupport_);
    }

    return val;
}
bool EnterpriseProjectConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delete_ep_support"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_ep_support"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteEpSupport(refVal);
        }
    }
    return ok;
}


std::string EnterpriseProjectConfig::getDeleteEpSupport() const
{
    return deleteEpSupport_;
}

void EnterpriseProjectConfig::setDeleteEpSupport(const std::string& value)
{
    deleteEpSupport_ = value;
    deleteEpSupportIsSet_ = true;
}

bool EnterpriseProjectConfig::deleteEpSupportIsSet() const
{
    return deleteEpSupportIsSet_;
}

void EnterpriseProjectConfig::unsetdeleteEpSupport()
{
    deleteEpSupportIsSet_ = false;
}

}
}
}
}
}


