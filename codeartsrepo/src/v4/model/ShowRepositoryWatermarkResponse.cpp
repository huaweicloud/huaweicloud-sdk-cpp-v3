

#include "huaweicloud/codeartsrepo/v4/model/ShowRepositoryWatermarkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepositoryWatermarkResponse::ShowRepositoryWatermarkResponse()
{
    watermark_ = false;
    watermarkIsSet_ = false;
    viewWatermark_ = false;
    viewWatermarkIsSet_ = false;
}

ShowRepositoryWatermarkResponse::~ShowRepositoryWatermarkResponse() = default;

void ShowRepositoryWatermarkResponse::validate()
{
}

web::json::value ShowRepositoryWatermarkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(watermarkIsSet_) {
        val[utility::conversions::to_string_t("watermark")] = ModelBase::toJson(watermark_);
    }
    if(viewWatermarkIsSet_) {
        val[utility::conversions::to_string_t("view_watermark")] = ModelBase::toJson(viewWatermark_);
    }

    return val;
}
bool ShowRepositoryWatermarkResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("watermark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("watermark"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWatermark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("view_watermark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view_watermark"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setViewWatermark(refVal);
        }
    }
    return ok;
}


bool ShowRepositoryWatermarkResponse::isWatermark() const
{
    return watermark_;
}

void ShowRepositoryWatermarkResponse::setWatermark(bool value)
{
    watermark_ = value;
    watermarkIsSet_ = true;
}

bool ShowRepositoryWatermarkResponse::watermarkIsSet() const
{
    return watermarkIsSet_;
}

void ShowRepositoryWatermarkResponse::unsetwatermark()
{
    watermarkIsSet_ = false;
}

bool ShowRepositoryWatermarkResponse::isViewWatermark() const
{
    return viewWatermark_;
}

void ShowRepositoryWatermarkResponse::setViewWatermark(bool value)
{
    viewWatermark_ = value;
    viewWatermarkIsSet_ = true;
}

bool ShowRepositoryWatermarkResponse::viewWatermarkIsSet() const
{
    return viewWatermarkIsSet_;
}

void ShowRepositoryWatermarkResponse::unsetviewWatermark()
{
    viewWatermarkIsSet_ = false;
}

}
}
}
}
}


