

#include "huaweicloud/cfw/v1/model/UpdateDomainSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateDomainSetResponse::UpdateDomainSetResponse()
{
    dataIsSet_ = false;
}

UpdateDomainSetResponse::~UpdateDomainSetResponse() = default;

void UpdateDomainSetResponse::validate()
{
}

web::json::value UpdateDomainSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateDomainSetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            DomainSetResponseData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


DomainSetResponseData UpdateDomainSetResponse::getData() const
{
    return data_;
}

void UpdateDomainSetResponse::setData(const DomainSetResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateDomainSetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateDomainSetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


