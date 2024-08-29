

#include "huaweicloud/eip/v3/model/ShowPublicipPoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ShowPublicipPoolRequest::ShowPublicipPoolRequest()
{
    publicipPoolId_ = "";
    publicipPoolIdIsSet_ = false;
    fieldsIsSet_ = false;
}

ShowPublicipPoolRequest::~ShowPublicipPoolRequest() = default;

void ShowPublicipPoolRequest::validate()
{
}

web::json::value ShowPublicipPoolRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipPoolIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_pool_id")] = ModelBase::toJson(publicipPoolId_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }

    return val;
}
bool ShowPublicipPoolRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    return ok;
}


std::string ShowPublicipPoolRequest::getPublicipPoolId() const
{
    return publicipPoolId_;
}

void ShowPublicipPoolRequest::setPublicipPoolId(const std::string& value)
{
    publicipPoolId_ = value;
    publicipPoolIdIsSet_ = true;
}

bool ShowPublicipPoolRequest::publicipPoolIdIsSet() const
{
    return publicipPoolIdIsSet_;
}

void ShowPublicipPoolRequest::unsetpublicipPoolId()
{
    publicipPoolIdIsSet_ = false;
}

std::vector<std::string>& ShowPublicipPoolRequest::getFields()
{
    return fields_;
}

void ShowPublicipPoolRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ShowPublicipPoolRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ShowPublicipPoolRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

}
}
}
}
}


