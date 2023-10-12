

#include "huaweicloud/gaussdbforopengauss/v3/model/Storage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




Storage::Storage()
{
    name_ = "";
    nameIsSet_ = false;
    azStatusIsSet_ = false;
    supportComputeGroupTypeIsSet_ = false;
}

Storage::~Storage() = default;

void Storage::validate()
{
}

web::json::value Storage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }
    if(supportComputeGroupTypeIsSet_) {
        val[utility::conversions::to_string_t("support_compute_group_type")] = ModelBase::toJson(supportComputeGroupType_);
    }

    return val;
}
bool Storage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_status"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_compute_group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_compute_group_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportComputeGroupType(refVal);
        }
    }
    return ok;
}


std::string Storage::getName() const
{
    return name_;
}

void Storage::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Storage::nameIsSet() const
{
    return nameIsSet_;
}

void Storage::unsetname()
{
    nameIsSet_ = false;
}

std::map<std::string, std::string>& Storage::getAzStatus()
{
    return azStatus_;
}

void Storage::setAzStatus(const std::map<std::string, std::string>& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool Storage::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void Storage::unsetazStatus()
{
    azStatusIsSet_ = false;
}

std::vector<std::string>& Storage::getSupportComputeGroupType()
{
    return supportComputeGroupType_;
}

void Storage::setSupportComputeGroupType(const std::vector<std::string>& value)
{
    supportComputeGroupType_ = value;
    supportComputeGroupTypeIsSet_ = true;
}

bool Storage::supportComputeGroupTypeIsSet() const
{
    return supportComputeGroupTypeIsSet_;
}

void Storage::unsetsupportComputeGroupType()
{
    supportComputeGroupTypeIsSet_ = false;
}

}
}
}
}
}


