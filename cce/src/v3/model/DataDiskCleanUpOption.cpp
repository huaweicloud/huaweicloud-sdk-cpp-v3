

#include "huaweicloud/cce/v3/model/DataDiskCleanUpOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DataDiskCleanUpOption::DataDiskCleanUpOption()
{
    enable_ = false;
    enableIsSet_ = false;
    onFailure_ = "";
    onFailureIsSet_ = false;
}

DataDiskCleanUpOption::~DataDiskCleanUpOption() = default;

void DataDiskCleanUpOption::validate()
{
}

web::json::value DataDiskCleanUpOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(onFailureIsSet_) {
        val[utility::conversions::to_string_t("onFailure")] = ModelBase::toJson(onFailure_);
    }

    return val;
}
bool DataDiskCleanUpOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("onFailure"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("onFailure"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnFailure(refVal);
        }
    }
    return ok;
}


bool DataDiskCleanUpOption::isEnable() const
{
    return enable_;
}

void DataDiskCleanUpOption::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool DataDiskCleanUpOption::enableIsSet() const
{
    return enableIsSet_;
}

void DataDiskCleanUpOption::unsetenable()
{
    enableIsSet_ = false;
}

std::string DataDiskCleanUpOption::getOnFailure() const
{
    return onFailure_;
}

void DataDiskCleanUpOption::setOnFailure(const std::string& value)
{
    onFailure_ = value;
    onFailureIsSet_ = true;
}

bool DataDiskCleanUpOption::onFailureIsSet() const
{
    return onFailureIsSet_;
}

void DataDiskCleanUpOption::unsetonFailure()
{
    onFailureIsSet_ = false;
}

}
}
}
}
}


