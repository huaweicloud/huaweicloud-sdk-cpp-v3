

#include "huaweicloud/dds/v3/model/ListBackupDownloadPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListBackupDownloadPolicyResponse::ListBackupDownloadPolicyResponse()
{
    id_ = "";
    idIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

ListBackupDownloadPolicyResponse::~ListBackupDownloadPolicyResponse() = default;

void ListBackupDownloadPolicyResponse::validate()
{
}

web::json::value ListBackupDownloadPolicyResponse::toJson() const
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
bool ListBackupDownloadPolicyResponse::fromJson(const web::json::value& val)
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


std::string ListBackupDownloadPolicyResponse::getId() const
{
    return id_;
}

void ListBackupDownloadPolicyResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListBackupDownloadPolicyResponse::idIsSet() const
{
    return idIsSet_;
}

void ListBackupDownloadPolicyResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ListBackupDownloadPolicyResponse::getAction() const
{
    return action_;
}

void ListBackupDownloadPolicyResponse::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListBackupDownloadPolicyResponse::actionIsSet() const
{
    return actionIsSet_;
}

void ListBackupDownloadPolicyResponse::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


