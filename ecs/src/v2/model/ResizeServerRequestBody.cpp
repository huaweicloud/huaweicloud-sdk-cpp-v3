

#include "huaweicloud/ecs/v2/model/ResizeServerRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ResizeServerRequestBody::ResizeServerRequestBody()
{
    resizeIsSet_ = false;
    dryRun_ = false;
    dryRunIsSet_ = false;
}

ResizeServerRequestBody::~ResizeServerRequestBody() = default;

void ResizeServerRequestBody::validate()
{
}

web::json::value ResizeServerRequestBody::toJson() const
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
bool ResizeServerRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resize"));
        if(!fieldValue.is_null())
        {
            ResizePrePaidServerOption refVal;
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


ResizePrePaidServerOption ResizeServerRequestBody::getResize() const
{
    return resize_;
}

void ResizeServerRequestBody::setResize(const ResizePrePaidServerOption& value)
{
    resize_ = value;
    resizeIsSet_ = true;
}

bool ResizeServerRequestBody::resizeIsSet() const
{
    return resizeIsSet_;
}

void ResizeServerRequestBody::unsetresize()
{
    resizeIsSet_ = false;
}

bool ResizeServerRequestBody::isDryRun() const
{
    return dryRun_;
}

void ResizeServerRequestBody::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool ResizeServerRequestBody::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void ResizeServerRequestBody::unsetdryRun()
{
    dryRunIsSet_ = false;
}

}
}
}
}
}


