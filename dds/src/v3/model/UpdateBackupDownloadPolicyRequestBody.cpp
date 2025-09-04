

#include "huaweicloud/dds/v3/model/UpdateBackupDownloadPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateBackupDownloadPolicyRequestBody::UpdateBackupDownloadPolicyRequestBody()
{
    id_ = "";
    idIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

UpdateBackupDownloadPolicyRequestBody::~UpdateBackupDownloadPolicyRequestBody() = default;

void UpdateBackupDownloadPolicyRequestBody::validate()
{
}

web::json::value UpdateBackupDownloadPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool UpdateBackupDownloadPolicyRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


std::string UpdateBackupDownloadPolicyRequestBody::getId() const
{
    return id_;
}

void UpdateBackupDownloadPolicyRequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateBackupDownloadPolicyRequestBody::idIsSet() const
{
    return idIsSet_;
}

void UpdateBackupDownloadPolicyRequestBody::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateBackupDownloadPolicyRequestBody::getAction() const
{
    return action_;
}

void UpdateBackupDownloadPolicyRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool UpdateBackupDownloadPolicyRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void UpdateBackupDownloadPolicyRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


