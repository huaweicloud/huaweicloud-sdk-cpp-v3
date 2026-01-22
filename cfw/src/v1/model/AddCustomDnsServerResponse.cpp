

#include "huaweicloud/cfw/v1/model/AddCustomDnsServerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddCustomDnsServerResponse::AddCustomDnsServerResponse()
{
    data_ = "";
    dataIsSet_ = false;
}

AddCustomDnsServerResponse::~AddCustomDnsServerResponse() = default;

void AddCustomDnsServerResponse::validate()
{
}

web::json::value AddCustomDnsServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool AddCustomDnsServerResponse::fromJson(const web::json::value& val)
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


std::string AddCustomDnsServerResponse::getData() const
{
    return data_;
}

void AddCustomDnsServerResponse::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool AddCustomDnsServerResponse::dataIsSet() const
{
    return dataIsSet_;
}

void AddCustomDnsServerResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


