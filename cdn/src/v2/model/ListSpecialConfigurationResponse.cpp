

#include "huaweicloud/cdn/v2/model/ListSpecialConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListSpecialConfigurationResponse::ListSpecialConfigurationResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    specialConfigurationsIsSet_ = false;
}

ListSpecialConfigurationResponse::~ListSpecialConfigurationResponse() = default;

void ListSpecialConfigurationResponse::validate()
{
}

web::json::value ListSpecialConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(specialConfigurationsIsSet_) {
        val[utility::conversions::to_string_t("specialConfigurations")] = ModelBase::toJson(specialConfigurations_);
    }

    return val;
}
bool ListSpecialConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("specialConfigurations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("specialConfigurations"));
        if(!fieldValue.is_null())
        {
            std::vector<SpeicialConfiguration> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecialConfigurations(refVal);
        }
    }
    return ok;
}


int32_t ListSpecialConfigurationResponse::getTotal() const
{
    return total_;
}

void ListSpecialConfigurationResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSpecialConfigurationResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSpecialConfigurationResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<SpeicialConfiguration>& ListSpecialConfigurationResponse::getSpecialConfigurations()
{
    return specialConfigurations_;
}

void ListSpecialConfigurationResponse::setSpecialConfigurations(const std::vector<SpeicialConfiguration>& value)
{
    specialConfigurations_ = value;
    specialConfigurationsIsSet_ = true;
}

bool ListSpecialConfigurationResponse::specialConfigurationsIsSet() const
{
    return specialConfigurationsIsSet_;
}

void ListSpecialConfigurationResponse::unsetspecialConfigurations()
{
    specialConfigurationsIsSet_ = false;
}

}
}
}
}
}


