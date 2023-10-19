

#include "huaweicloud/cfw/v1/model/ListDomainParseDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListDomainParseDetailResponse::ListDomainParseDetailResponse()
{
    dataIsSet_ = false;
}

ListDomainParseDetailResponse::~ListDomainParseDetailResponse() = default;

void ListDomainParseDetailResponse::validate()
{
}

web::json::value ListDomainParseDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListDomainParseDetailResponse::fromJson(const web::json::value& val)
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


std::vector<std::string>& ListDomainParseDetailResponse::getData()
{
    return data_;
}

void ListDomainParseDetailResponse::setData(const std::vector<std::string>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListDomainParseDetailResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListDomainParseDetailResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


