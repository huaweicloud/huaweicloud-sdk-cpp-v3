

#include "huaweicloud/iotda/v5/model/ServiceCommandResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ServiceCommandResponse::ServiceCommandResponse()
{
    responseName_ = "";
    responseNameIsSet_ = false;
    parasIsSet_ = false;
}

ServiceCommandResponse::~ServiceCommandResponse() = default;

void ServiceCommandResponse::validate()
{
}

web::json::value ServiceCommandResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(responseNameIsSet_) {
        val[utility::conversions::to_string_t("response_name")] = ModelBase::toJson(responseName_);
    }
    if(parasIsSet_) {
        val[utility::conversions::to_string_t("paras")] = ModelBase::toJson(paras_);
    }

    return val;
}
bool ServiceCommandResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("response_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("paras"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("paras"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceCommandPara> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParas(refVal);
        }
    }
    return ok;
}


std::string ServiceCommandResponse::getResponseName() const
{
    return responseName_;
}

void ServiceCommandResponse::setResponseName(const std::string& value)
{
    responseName_ = value;
    responseNameIsSet_ = true;
}

bool ServiceCommandResponse::responseNameIsSet() const
{
    return responseNameIsSet_;
}

void ServiceCommandResponse::unsetresponseName()
{
    responseNameIsSet_ = false;
}

std::vector<ServiceCommandPara>& ServiceCommandResponse::getParas()
{
    return paras_;
}

void ServiceCommandResponse::setParas(const std::vector<ServiceCommandPara>& value)
{
    paras_ = value;
    parasIsSet_ = true;
}

bool ServiceCommandResponse::parasIsSet() const
{
    return parasIsSet_;
}

void ServiceCommandResponse::unsetparas()
{
    parasIsSet_ = false;
}

}
}
}
}
}


