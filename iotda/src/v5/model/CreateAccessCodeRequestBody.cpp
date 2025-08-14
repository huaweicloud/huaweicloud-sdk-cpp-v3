

#include "huaweicloud/iotda/v5/model/CreateAccessCodeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateAccessCodeRequestBody::CreateAccessCodeRequestBody()
{
    type_ = "";
    typeIsSet_ = false;
    forceDisconnect_ = false;
    forceDisconnectIsSet_ = false;
}

CreateAccessCodeRequestBody::~CreateAccessCodeRequestBody() = default;

void CreateAccessCodeRequestBody::validate()
{
}

web::json::value CreateAccessCodeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(forceDisconnectIsSet_) {
        val[utility::conversions::to_string_t("force_disconnect")] = ModelBase::toJson(forceDisconnect_);
    }

    return val;
}
bool CreateAccessCodeRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("force_disconnect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_disconnect"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceDisconnect(refVal);
        }
    }
    return ok;
}


std::string CreateAccessCodeRequestBody::getType() const
{
    return type_;
}

void CreateAccessCodeRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateAccessCodeRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void CreateAccessCodeRequestBody::unsettype()
{
    typeIsSet_ = false;
}

bool CreateAccessCodeRequestBody::isForceDisconnect() const
{
    return forceDisconnect_;
}

void CreateAccessCodeRequestBody::setForceDisconnect(bool value)
{
    forceDisconnect_ = value;
    forceDisconnectIsSet_ = true;
}

bool CreateAccessCodeRequestBody::forceDisconnectIsSet() const
{
    return forceDisconnectIsSet_;
}

void CreateAccessCodeRequestBody::unsetforceDisconnect()
{
    forceDisconnectIsSet_ = false;
}

}
}
}
}
}


