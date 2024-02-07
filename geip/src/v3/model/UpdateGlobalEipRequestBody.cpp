

#include "huaweicloud/geip/v3/model/UpdateGlobalEipRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




UpdateGlobalEipRequestBody::UpdateGlobalEipRequestBody()
{
    dryRun_ = false;
    dryRunIsSet_ = false;
    globalEipIsSet_ = false;
}

UpdateGlobalEipRequestBody::~UpdateGlobalEipRequestBody() = default;

void UpdateGlobalEipRequestBody::validate()
{
}

web::json::value UpdateGlobalEipRequestBody::toJson() const
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
bool UpdateGlobalEipRequestBody::fromJson(const web::json::value& val)
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
            UpdateGlobalEipRequestBody_global_eip refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEip(refVal);
        }
    }
    return ok;
}


bool UpdateGlobalEipRequestBody::isDryRun() const
{
    return dryRun_;
}

void UpdateGlobalEipRequestBody::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool UpdateGlobalEipRequestBody::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void UpdateGlobalEipRequestBody::unsetdryRun()
{
    dryRunIsSet_ = false;
}

UpdateGlobalEipRequestBody_global_eip UpdateGlobalEipRequestBody::getGlobalEip() const
{
    return globalEip_;
}

void UpdateGlobalEipRequestBody::setGlobalEip(const UpdateGlobalEipRequestBody_global_eip& value)
{
    globalEip_ = value;
    globalEipIsSet_ = true;
}

bool UpdateGlobalEipRequestBody::globalEipIsSet() const
{
    return globalEipIsSet_;
}

void UpdateGlobalEipRequestBody::unsetglobalEip()
{
    globalEipIsSet_ = false;
}

}
}
}
}
}


