

#include "huaweicloud/cbr/v1/model/ShowSummaryResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowSummaryResponse::ShowSummaryResponse()
{
    size_ = 0;
    sizeIsSet_ = false;
    usedSize_ = 0;
    usedSizeIsSet_ = false;
}

ShowSummaryResponse::~ShowSummaryResponse() = default;

void ShowSummaryResponse::validate()
{
}

web::json::value ShowSummaryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(usedSizeIsSet_) {
        val[utility::conversions::to_string_t("used_size")] = ModelBase::toJson(usedSize_);
    }

    return val;
}

bool ShowSummaryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedSize(refVal);
        }
    }
    return ok;
}

int32_t ShowSummaryResponse::getSize() const
{
    return size_;
}

void ShowSummaryResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ShowSummaryResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ShowSummaryResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t ShowSummaryResponse::getUsedSize() const
{
    return usedSize_;
}

void ShowSummaryResponse::setUsedSize(int32_t value)
{
    usedSize_ = value;
    usedSizeIsSet_ = true;
}

bool ShowSummaryResponse::usedSizeIsSet() const
{
    return usedSizeIsSet_;
}

void ShowSummaryResponse::unsetusedSize()
{
    usedSizeIsSet_ = false;
}

}
}
}
}
}


