

#include "huaweicloud/rds/v3/model/DataIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DataIpRequest::DataIpRequest()
{
    newIp_ = "";
    newIpIsSet_ = false;
}

DataIpRequest::~DataIpRequest() = default;

void DataIpRequest::validate()
{
}

web::json::value DataIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(newIpIsSet_) {
        val[utility::conversions::to_string_t("new_ip")] = ModelBase::toJson(newIp_);
    }

    return val;
}
bool DataIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("new_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewIp(refVal);
        }
    }
    return ok;
}


std::string DataIpRequest::getNewIp() const
{
    return newIp_;
}

void DataIpRequest::setNewIp(const std::string& value)
{
    newIp_ = value;
    newIpIsSet_ = true;
}

bool DataIpRequest::newIpIsSet() const
{
    return newIpIsSet_;
}

void DataIpRequest::unsetnewIp()
{
    newIpIsSet_ = false;
}

}
}
}
}
}


