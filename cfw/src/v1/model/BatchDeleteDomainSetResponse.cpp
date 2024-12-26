

#include "huaweicloud/cfw/v1/model/BatchDeleteDomainSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteDomainSetResponse::BatchDeleteDomainSetResponse()
{
    dataIsSet_ = false;
}

BatchDeleteDomainSetResponse::~BatchDeleteDomainSetResponse() = default;

void BatchDeleteDomainSetResponse::validate()
{
}

web::json::value BatchDeleteDomainSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchDeleteDomainSetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<Mapstringstring>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::vector<Mapstringstring>>& BatchDeleteDomainSetResponse::getData()
{
    return data_;
}

void BatchDeleteDomainSetResponse::setData(const std::map<std::string, std::vector<Mapstringstring>>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchDeleteDomainSetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchDeleteDomainSetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


