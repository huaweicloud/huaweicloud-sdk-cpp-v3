

#include "huaweicloud/rgc/v1/model/OrganizationalPercentageDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




OrganizationalPercentageDetail::OrganizationalPercentageDetail()
{
    percentageName_ = "";
    percentageNameIsSet_ = false;
    percentageStatus_ = "";
    percentageStatusIsSet_ = false;
}

OrganizationalPercentageDetail::~OrganizationalPercentageDetail() = default;

void OrganizationalPercentageDetail::validate()
{
}

web::json::value OrganizationalPercentageDetail::toJson() const
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
bool OrganizationalPercentageDetail::fromJson(const web::json::value& val)
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


std::string OrganizationalPercentageDetail::getPercentageName() const
{
    return percentageName_;
}

void OrganizationalPercentageDetail::setPercentageName(const std::string& value)
{
    percentageName_ = value;
    percentageNameIsSet_ = true;
}

bool OrganizationalPercentageDetail::percentageNameIsSet() const
{
    return percentageNameIsSet_;
}

void OrganizationalPercentageDetail::unsetpercentageName()
{
    percentageNameIsSet_ = false;
}

std::string OrganizationalPercentageDetail::getPercentageStatus() const
{
    return percentageStatus_;
}

void OrganizationalPercentageDetail::setPercentageStatus(const std::string& value)
{
    percentageStatus_ = value;
    percentageStatusIsSet_ = true;
}

bool OrganizationalPercentageDetail::percentageStatusIsSet() const
{
    return percentageStatusIsSet_;
}

void OrganizationalPercentageDetail::unsetpercentageStatus()
{
    percentageStatusIsSet_ = false;
}

}
}
}
}
}


