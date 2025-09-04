

#include "huaweicloud/dds/v3/model/SaveBackupDownloadPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SaveBackupDownloadPolicyRequestBody::SaveBackupDownloadPolicyRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
}

SaveBackupDownloadPolicyRequestBody::~SaveBackupDownloadPolicyRequestBody() = default;

void SaveBackupDownloadPolicyRequestBody::validate()
{
}

web::json::value SaveBackupDownloadPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool SaveBackupDownloadPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string SaveBackupDownloadPolicyRequestBody::getAction() const
{
    return action_;
}

void SaveBackupDownloadPolicyRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool SaveBackupDownloadPolicyRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void SaveBackupDownloadPolicyRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


