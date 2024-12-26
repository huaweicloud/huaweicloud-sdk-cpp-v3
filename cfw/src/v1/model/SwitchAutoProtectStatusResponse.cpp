

#include "huaweicloud/cfw/v1/model/SwitchAutoProtectStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




SwitchAutoProtectStatusResponse::SwitchAutoProtectStatusResponse()
{
    data_ = "";
    dataIsSet_ = false;
}

SwitchAutoProtectStatusResponse::~SwitchAutoProtectStatusResponse() = default;

void SwitchAutoProtectStatusResponse::validate()
{
}

web::json::value SwitchAutoProtectStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool SwitchAutoProtectStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string SwitchAutoProtectStatusResponse::getData() const
{
    return data_;
}

void SwitchAutoProtectStatusResponse::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SwitchAutoProtectStatusResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SwitchAutoProtectStatusResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


