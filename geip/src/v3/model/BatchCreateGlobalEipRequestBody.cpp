

#include "huaweicloud/geip/v3/model/BatchCreateGlobalEipRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateGlobalEipRequestBody::BatchCreateGlobalEipRequestBody()
{
    dryRun_ = false;
    dryRunIsSet_ = false;
    globalEipIsSet_ = false;
}

BatchCreateGlobalEipRequestBody::~BatchCreateGlobalEipRequestBody() = default;

void BatchCreateGlobalEipRequestBody::validate()
{
}

web::json::value BatchCreateGlobalEipRequestBody::toJson() const
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
bool BatchCreateGlobalEipRequestBody::fromJson(const web::json::value& val)
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
            BatchCreateGlobalEipRequestBody_global_eip refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEip(refVal);
        }
    }
    return ok;
}


bool BatchCreateGlobalEipRequestBody::isDryRun() const
{
    return dryRun_;
}

void BatchCreateGlobalEipRequestBody::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void BatchCreateGlobalEipRequestBody::unsetdryRun()
{
    dryRunIsSet_ = false;
}

BatchCreateGlobalEipRequestBody_global_eip BatchCreateGlobalEipRequestBody::getGlobalEip() const
{
    return globalEip_;
}

void BatchCreateGlobalEipRequestBody::setGlobalEip(const BatchCreateGlobalEipRequestBody_global_eip& value)
{
    globalEip_ = value;
    globalEipIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody::globalEipIsSet() const
{
    return globalEipIsSet_;
}

void BatchCreateGlobalEipRequestBody::unsetglobalEip()
{
    globalEipIsSet_ = false;
}

}
}
}
}
}


