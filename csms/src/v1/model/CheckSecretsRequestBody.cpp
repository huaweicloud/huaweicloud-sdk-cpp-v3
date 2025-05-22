

#include "huaweicloud/csms/v1/model/CheckSecretsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CheckSecretsRequestBody::CheckSecretsRequestBody()
{
    type_ = "";
    typeIsSet_ = false;
    dataIsSet_ = false;
}

CheckSecretsRequestBody::~CheckSecretsRequestBody() = default;

void CheckSecretsRequestBody::validate()
{
}

web::json::value CheckSecretsRequestBody::toJson() const
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
bool CheckSecretsRequestBody::fromJson(const web::json::value& val)
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


std::string CheckSecretsRequestBody::getType() const
{
    return type_;
}

void CheckSecretsRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CheckSecretsRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void CheckSecretsRequestBody::unsettype()
{
    typeIsSet_ = false;
}

Object CheckSecretsRequestBody::getData() const
{
    return data_;
}

void CheckSecretsRequestBody::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CheckSecretsRequestBody::dataIsSet() const
{
    return dataIsSet_;
}

void CheckSecretsRequestBody::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


