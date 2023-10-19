

#include "huaweicloud/cfw/v1/model/DeleteDomainsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteDomainsResponse::DeleteDomainsResponse()
{
    dataIsSet_ = false;
}

DeleteDomainsResponse::~DeleteDomainsResponse() = default;

void DeleteDomainsResponse::validate()
{
}

web::json::value DeleteDomainsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool DeleteDomainsResponse::fromJson(const web::json::value& val)
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


DomainSetResponseData DeleteDomainsResponse::getData() const
{
    return data_;
}

void DeleteDomainsResponse::setData(const DomainSetResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteDomainsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteDomainsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


