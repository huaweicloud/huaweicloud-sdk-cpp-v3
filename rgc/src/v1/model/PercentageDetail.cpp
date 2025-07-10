

#include "huaweicloud/rgc/v1/model/PercentageDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




PercentageDetail::PercentageDetail()
{
    percentageName_ = "";
    percentageNameIsSet_ = false;
    percentageStatus_ = "";
    percentageStatusIsSet_ = false;
}

PercentageDetail::~PercentageDetail() = default;

void PercentageDetail::validate()
{
}

web::json::value PercentageDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(percentageNameIsSet_) {
        val[utility::conversions::to_string_t("percentage_name")] = ModelBase::toJson(percentageName_);
    }
    if(percentageStatusIsSet_) {
        val[utility::conversions::to_string_t("percentage_status")] = ModelBase::toJson(percentageStatus_);
    }

    return val;
}
bool PercentageDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("percentage_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percentage_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercentageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("percentage_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percentage_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercentageStatus(refVal);
        }
    }
    return ok;
}


std::string PercentageDetail::getPercentageName() const
{
    return percentageName_;
}

void PercentageDetail::setPercentageName(const std::string& value)
{
    percentageName_ = value;
    percentageNameIsSet_ = true;
}

bool PercentageDetail::percentageNameIsSet() const
{
    return percentageNameIsSet_;
}

void PercentageDetail::unsetpercentageName()
{
    percentageNameIsSet_ = false;
}

std::string PercentageDetail::getPercentageStatus() const
{
    return percentageStatus_;
}

void PercentageDetail::setPercentageStatus(const std::string& value)
{
    percentageStatus_ = value;
    percentageStatusIsSet_ = true;
}

bool PercentageDetail::percentageStatusIsSet() const
{
    return percentageStatusIsSet_;
}

void PercentageDetail::unsetpercentageStatus()
{
    percentageStatusIsSet_ = false;
}

}
}
}
}
}


