

#include "huaweicloud/cfw/v1/model/EnableMultiAccountResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




EnableMultiAccountResp_data::EnableMultiAccountResp_data()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    trustServiceStatus_ = 0;
    trustServiceStatusIsSet_ = false;
}

EnableMultiAccountResp_data::~EnableMultiAccountResp_data() = default;

void EnableMultiAccountResp_data::validate()
{
}

web::json::value EnableMultiAccountResp_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(trustServiceStatusIsSet_) {
        val[utility::conversions::to_string_t("trust_service_status")] = ModelBase::toJson(trustServiceStatus_);
    }

    return val;
}
bool EnableMultiAccountResp_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trust_service_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trust_service_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrustServiceStatus(refVal);
        }
    }
    return ok;
}


std::string EnableMultiAccountResp_data::getId() const
{
    return id_;
}

void EnableMultiAccountResp_data::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EnableMultiAccountResp_data::idIsSet() const
{
    return idIsSet_;
}

void EnableMultiAccountResp_data::unsetid()
{
    idIsSet_ = false;
}

std::string EnableMultiAccountResp_data::getName() const
{
    return name_;
}

void EnableMultiAccountResp_data::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EnableMultiAccountResp_data::nameIsSet() const
{
    return nameIsSet_;
}

void EnableMultiAccountResp_data::unsetname()
{
    nameIsSet_ = false;
}

int32_t EnableMultiAccountResp_data::getTrustServiceStatus() const
{
    return trustServiceStatus_;
}

void EnableMultiAccountResp_data::setTrustServiceStatus(int32_t value)
{
    trustServiceStatus_ = value;
    trustServiceStatusIsSet_ = true;
}

bool EnableMultiAccountResp_data::trustServiceStatusIsSet() const
{
    return trustServiceStatusIsSet_;
}

void EnableMultiAccountResp_data::unsettrustServiceStatus()
{
    trustServiceStatusIsSet_ = false;
}

}
}
}
}
}


