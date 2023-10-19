

#include "huaweicloud/cfw/v1/model/AddDomainsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddDomainsResponse::AddDomainsResponse()
{
    dataIsSet_ = false;
}

AddDomainsResponse::~AddDomainsResponse() = default;

void AddDomainsResponse::validate()
{
}

web::json::value AddDomainsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool AddDomainsResponse::fromJson(const web::json::value& val)
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


DomainSetResponseData AddDomainsResponse::getData() const
{
    return data_;
}

void AddDomainsResponse::setData(const DomainSetResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AddDomainsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void AddDomainsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


