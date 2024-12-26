

#include "huaweicloud/cfw/v1/model/ShowAntiVirusSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAntiVirusSwitchResponse::ShowAntiVirusSwitchResponse()
{
    dataIsSet_ = false;
}

ShowAntiVirusSwitchResponse::~ShowAntiVirusSwitchResponse() = default;

void ShowAntiVirusSwitchResponse::validate()
{
}

web::json::value ShowAntiVirusSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowAntiVirusSwitchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            AntiVirusVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


AntiVirusVO ShowAntiVirusSwitchResponse::getData() const
{
    return data_;
}

void ShowAntiVirusSwitchResponse::setData(const AntiVirusVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowAntiVirusSwitchResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowAntiVirusSwitchResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


