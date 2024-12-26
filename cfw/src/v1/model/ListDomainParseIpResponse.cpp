

#include "huaweicloud/cfw/v1/model/ListDomainParseIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListDomainParseIpResponse::ListDomainParseIpResponse()
{
    dataIsSet_ = false;
}

ListDomainParseIpResponse::~ListDomainParseIpResponse() = default;

void ListDomainParseIpResponse::validate()
{
}

web::json::value ListDomainParseIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListDomainParseIpResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListDomainParseIpResponse::getData()
{
    return data_;
}

void ListDomainParseIpResponse::setData(const std::vector<std::string>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListDomainParseIpResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListDomainParseIpResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


