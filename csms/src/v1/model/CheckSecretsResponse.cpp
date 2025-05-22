

#include "huaweicloud/csms/v1/model/CheckSecretsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CheckSecretsResponse::CheckSecretsResponse()
{
    type_ = "";
    typeIsSet_ = false;
    dataIsSet_ = false;
}

CheckSecretsResponse::~CheckSecretsResponse() = default;

void CheckSecretsResponse::validate()
{
}

web::json::value CheckSecretsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool CheckSecretsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string CheckSecretsResponse::getType() const
{
    return type_;
}

void CheckSecretsResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CheckSecretsResponse::typeIsSet() const
{
    return typeIsSet_;
}

void CheckSecretsResponse::unsettype()
{
    typeIsSet_ = false;
}

Object CheckSecretsResponse::getData() const
{
    return data_;
}

void CheckSecretsResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CheckSecretsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CheckSecretsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


