

#include "huaweicloud/ecs/v2/model/ResizePostPaidServerRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ResizePostPaidServerRequestBody::ResizePostPaidServerRequestBody()
{
    resizeIsSet_ = false;
    dryRun_ = false;
    dryRunIsSet_ = false;
}

ResizePostPaidServerRequestBody::~ResizePostPaidServerRequestBody() = default;

void ResizePostPaidServerRequestBody::validate()
{
}

web::json::value ResizePostPaidServerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resizeIsSet_) {
        val[utility::conversions::to_string_t("resize")] = ModelBase::toJson(resize_);
    }
    if(dryRunIsSet_) {
        val[utility::conversions::to_string_t("dry_run")] = ModelBase::toJson(dryRun_);
    }

    return val;
}
bool ResizePostPaidServerRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resize"));
        if(!fieldValue.is_null())
        {
            ResizePostPaidServerOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dry_run"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dry_run"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDryRun(refVal);
        }
    }
    return ok;
}


ResizePostPaidServerOption ResizePostPaidServerRequestBody::getResize() const
{
    return resize_;
}

void ResizePostPaidServerRequestBody::setResize(const ResizePostPaidServerOption& value)
{
    resize_ = value;
    resizeIsSet_ = true;
}

bool ResizePostPaidServerRequestBody::resizeIsSet() const
{
    return resizeIsSet_;
}

void ResizePostPaidServerRequestBody::unsetresize()
{
    resizeIsSet_ = false;
}

bool ResizePostPaidServerRequestBody::isDryRun() const
{
    return dryRun_;
}

void ResizePostPaidServerRequestBody::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool ResizePostPaidServerRequestBody::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void ResizePostPaidServerRequestBody::unsetdryRun()
{
    dryRunIsSet_ = false;
}

}
}
}
}
}


