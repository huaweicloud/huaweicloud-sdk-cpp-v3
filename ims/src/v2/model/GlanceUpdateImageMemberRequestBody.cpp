

#include "huaweicloud/ims/v2/model/GlanceUpdateImageMemberRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceUpdateImageMemberRequestBody::GlanceUpdateImageMemberRequestBody()
{
    status_ = "";
    statusIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

GlanceUpdateImageMemberRequestBody::~GlanceUpdateImageMemberRequestBody() = default;

void GlanceUpdateImageMemberRequestBody::validate()
{
}

web::json::value GlanceUpdateImageMemberRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}

bool GlanceUpdateImageMemberRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultId(refVal);
        }
    }
    return ok;
}

std::string GlanceUpdateImageMemberRequestBody::getStatus() const
{
    return status_;
}

void GlanceUpdateImageMemberRequestBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GlanceUpdateImageMemberRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void GlanceUpdateImageMemberRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string GlanceUpdateImageMemberRequestBody::getVaultId() const
{
    return vaultId_;
}

void GlanceUpdateImageMemberRequestBody::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool GlanceUpdateImageMemberRequestBody::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void GlanceUpdateImageMemberRequestBody::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


