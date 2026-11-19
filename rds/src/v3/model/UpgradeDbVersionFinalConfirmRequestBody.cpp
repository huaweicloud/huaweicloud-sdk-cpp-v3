

#include "huaweicloud/rds/v3/model/UpgradeDbVersionFinalConfirmRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpgradeDbVersionFinalConfirmRequestBody::UpgradeDbVersionFinalConfirmRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    forceRollback_ = false;
    forceRollbackIsSet_ = false;
}

UpgradeDbVersionFinalConfirmRequestBody::~UpgradeDbVersionFinalConfirmRequestBody() = default;

void UpgradeDbVersionFinalConfirmRequestBody::validate()
{
}

web::json::value UpgradeDbVersionFinalConfirmRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(forceRollbackIsSet_) {
        val[utility::conversions::to_string_t("force_rollback")] = ModelBase::toJson(forceRollback_);
    }

    return val;
}
bool UpgradeDbVersionFinalConfirmRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("force_rollback"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_rollback"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceRollback(refVal);
        }
    }
    return ok;
}


std::string UpgradeDbVersionFinalConfirmRequestBody::getAction() const
{
    return action_;
}

void UpgradeDbVersionFinalConfirmRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool UpgradeDbVersionFinalConfirmRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void UpgradeDbVersionFinalConfirmRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

bool UpgradeDbVersionFinalConfirmRequestBody::isForceRollback() const
{
    return forceRollback_;
}

void UpgradeDbVersionFinalConfirmRequestBody::setForceRollback(bool value)
{
    forceRollback_ = value;
    forceRollbackIsSet_ = true;
}

bool UpgradeDbVersionFinalConfirmRequestBody::forceRollbackIsSet() const
{
    return forceRollbackIsSet_;
}

void UpgradeDbVersionFinalConfirmRequestBody::unsetforceRollback()
{
    forceRollbackIsSet_ = false;
}

}
}
}
}
}


