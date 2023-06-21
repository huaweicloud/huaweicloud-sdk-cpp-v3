

#include "huaweicloud/cfw/v1/model/ListParseDomainDetailsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListParseDomainDetailsResponse::ListParseDomainDetailsResponse()
{
    dataIsSet_ = false;
}

ListParseDomainDetailsResponse::~ListParseDomainDetailsResponse() = default;

void ListParseDomainDetailsResponse::validate()
{
}

web::json::value ListParseDomainDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListParseDomainDetailsResponse::fromJson(const web::json::value& val)
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


std::vector<std::string>& ListParseDomainDetailsResponse::getData()
{
    return data_;
}

void ListParseDomainDetailsResponse::setData(const std::vector<std::string>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListParseDomainDetailsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListParseDomainDetailsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


