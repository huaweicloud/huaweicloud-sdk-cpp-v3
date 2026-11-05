

#include "huaweicloud/modelarts/v1/model/ExecuteOptions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ExecuteOptions::ExecuteOptions()
{
    serialNumber_ = "";
    serialNumberIsSet_ = false;
}

ExecuteOptions::~ExecuteOptions() = default;

void ExecuteOptions::validate()
{
}

web::json::value ExecuteOptions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serialNumberIsSet_) {
        val[utility::conversions::to_string_t("serialNumber")] = ModelBase::toJson(serialNumber_);
    }

    return val;
}
bool ExecuteOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("serialNumber"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serialNumber"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSerialNumber(refVal);
        }
    }
    return ok;
}


std::string ExecuteOptions::getSerialNumber() const
{
    return serialNumber_;
}

void ExecuteOptions::setSerialNumber(const std::string& value)
{
    serialNumber_ = value;
    serialNumberIsSet_ = true;
}

bool ExecuteOptions::serialNumberIsSet() const
{
    return serialNumberIsSet_;
}

void ExecuteOptions::unsetserialNumber()
{
    serialNumberIsSet_ = false;
}

}
}
}
}
}


