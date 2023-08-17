

#include "huaweicloud/codeartsbuild/v3/model/ShowJobSuccessRatioResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobSuccessRatioResponse::ShowJobSuccessRatioResponse()
{
    successCount_ = 0;
    successCountIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    successRatio_ = 0.0;
    successRatioIsSet_ = false;
}

ShowJobSuccessRatioResponse::~ShowJobSuccessRatioResponse() = default;

void ShowJobSuccessRatioResponse::validate()
{
}

web::json::value ShowJobSuccessRatioResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successCountIsSet_) {
        val[utility::conversions::to_string_t("success_count")] = ModelBase::toJson(successCount_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(successRatioIsSet_) {
        val[utility::conversions::to_string_t("success_ratio")] = ModelBase::toJson(successRatio_);
    }

    return val;
}

bool ShowJobSuccessRatioResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_ratio"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessRatio(refVal);
        }
    }
    return ok;
}

int32_t ShowJobSuccessRatioResponse::getSuccessCount() const
{
    return successCount_;
}

void ShowJobSuccessRatioResponse::setSuccessCount(int32_t value)
{
    successCount_ = value;
    successCountIsSet_ = true;
}

bool ShowJobSuccessRatioResponse::successCountIsSet() const
{
    return successCountIsSet_;
}

void ShowJobSuccessRatioResponse::unsetsuccessCount()
{
    successCountIsSet_ = false;
}

int32_t ShowJobSuccessRatioResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowJobSuccessRatioResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowJobSuccessRatioResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowJobSuccessRatioResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

double ShowJobSuccessRatioResponse::getSuccessRatio() const
{
    return successRatio_;
}

void ShowJobSuccessRatioResponse::setSuccessRatio(double value)
{
    successRatio_ = value;
    successRatioIsSet_ = true;
}

bool ShowJobSuccessRatioResponse::successRatioIsSet() const
{
    return successRatioIsSet_;
}

void ShowJobSuccessRatioResponse::unsetsuccessRatio()
{
    successRatioIsSet_ = false;
}

}
}
}
}
}


