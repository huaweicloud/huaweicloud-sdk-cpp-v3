

#include "huaweicloud/cdn/v2/model/ListDomainClientStatsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListDomainClientStatsResponse::ListDomainClientStatsResponse()
{
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    resultIsSet_ = false;
}

ListDomainClientStatsResponse::~ListDomainClientStatsResponse() = default;

void ListDomainClientStatsResponse::validate()
{
}

web::json::value ListDomainClientStatsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ListDomainClientStatsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceArea(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, Object>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListDomainClientStatsResponse::getServiceArea() const
{
    return serviceArea_;
}

void ListDomainClientStatsResponse::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool ListDomainClientStatsResponse::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void ListDomainClientStatsResponse::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::vector<std::map<std::string, Object>>& ListDomainClientStatsResponse::getResult()
{
    return result_;
}

void ListDomainClientStatsResponse::setResult(const std::vector<std::map<std::string, Object>>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListDomainClientStatsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListDomainClientStatsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


