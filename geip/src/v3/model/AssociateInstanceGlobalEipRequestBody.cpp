

#include "huaweicloud/geip/v3/model/AssociateInstanceGlobalEipRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AssociateInstanceGlobalEipRequestBody::AssociateInstanceGlobalEipRequestBody()
{
    dryRun_ = false;
    dryRunIsSet_ = false;
    globalEipIsSet_ = false;
}

AssociateInstanceGlobalEipRequestBody::~AssociateInstanceGlobalEipRequestBody() = default;

void AssociateInstanceGlobalEipRequestBody::validate()
{
}

web::json::value AssociateInstanceGlobalEipRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dryRunIsSet_) {
        val[utility::conversions::to_string_t("dry_run")] = ModelBase::toJson(dryRun_);
    }
    if(globalEipIsSet_) {
        val[utility::conversions::to_string_t("global_eip")] = ModelBase::toJson(globalEip_);
    }

    return val;
}
bool AssociateInstanceGlobalEipRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dry_run"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dry_run"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDryRun(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("global_eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip"));
        if(!fieldValue.is_null())
        {
            AssociateInstanceGlobalEipRequestBody_global_eip refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEip(refVal);
        }
    }
    return ok;
}


bool AssociateInstanceGlobalEipRequestBody::isDryRun() const
{
    return dryRun_;
}

void AssociateInstanceGlobalEipRequestBody::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void AssociateInstanceGlobalEipRequestBody::unsetdryRun()
{
    dryRunIsSet_ = false;
}

AssociateInstanceGlobalEipRequestBody_global_eip AssociateInstanceGlobalEipRequestBody::getGlobalEip() const
{
    return globalEip_;
}

void AssociateInstanceGlobalEipRequestBody::setGlobalEip(const AssociateInstanceGlobalEipRequestBody_global_eip& value)
{
    globalEip_ = value;
    globalEipIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody::globalEipIsSet() const
{
    return globalEipIsSet_;
}

void AssociateInstanceGlobalEipRequestBody::unsetglobalEip()
{
    globalEipIsSet_ = false;
}

}
}
}
}
}


