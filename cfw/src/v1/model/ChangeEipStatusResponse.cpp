

#include "huaweicloud/cfw/v1/model/ChangeEipStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeEipStatusResponse::ChangeEipStatusResponse()
{
    dataIsSet_ = false;
}

ChangeEipStatusResponse::~ChangeEipStatusResponse() = default;

void ChangeEipStatusResponse::validate()
{
}

web::json::value ChangeEipStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ChangeEipStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            EIPSwitchStatusVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


EIPSwitchStatusVO ChangeEipStatusResponse::getData() const
{
    return data_;
}

void ChangeEipStatusResponse::setData(const EIPSwitchStatusVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ChangeEipStatusResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ChangeEipStatusResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


