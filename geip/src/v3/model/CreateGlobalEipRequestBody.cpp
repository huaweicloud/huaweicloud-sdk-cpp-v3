

#include "huaweicloud/geip/v3/model/CreateGlobalEipRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateGlobalEipRequestBody::CreateGlobalEipRequestBody()
{
    dryRun_ = false;
    dryRunIsSet_ = false;
    globalEipIsSet_ = false;
}

CreateGlobalEipRequestBody::~CreateGlobalEipRequestBody() = default;

void CreateGlobalEipRequestBody::validate()
{
}

web::json::value CreateGlobalEipRequestBody::toJson() const
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
bool CreateGlobalEipRequestBody::fromJson(const web::json::value& val)
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
            CreateGlobalEipRequestBody_global_eip refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEip(refVal);
        }
    }
    return ok;
}


bool CreateGlobalEipRequestBody::isDryRun() const
{
    return dryRun_;
}

void CreateGlobalEipRequestBody::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool CreateGlobalEipRequestBody::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void CreateGlobalEipRequestBody::unsetdryRun()
{
    dryRunIsSet_ = false;
}

CreateGlobalEipRequestBody_global_eip CreateGlobalEipRequestBody::getGlobalEip() const
{
    return globalEip_;
}

void CreateGlobalEipRequestBody::setGlobalEip(const CreateGlobalEipRequestBody_global_eip& value)
{
    globalEip_ = value;
    globalEipIsSet_ = true;
}

bool CreateGlobalEipRequestBody::globalEipIsSet() const
{
    return globalEipIsSet_;
}

void CreateGlobalEipRequestBody::unsetglobalEip()
{
    globalEipIsSet_ = false;
}

}
}
}
}
}


