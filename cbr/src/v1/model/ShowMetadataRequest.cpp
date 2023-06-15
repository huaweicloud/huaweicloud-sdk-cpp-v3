

#include "huaweicloud/cbr/v1/model/ShowMetadataRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowMetadataRequest::ShowMetadataRequest()
{
    backupId_ = "";
    backupIdIsSet_ = false;
}

ShowMetadataRequest::~ShowMetadataRequest() = default;

void ShowMetadataRequest::validate()
{
}

web::json::value ShowMetadataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }

    return val;
}

bool ShowMetadataRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    return ok;
}


std::string ShowMetadataRequest::getBackupId() const
{
    return backupId_;
}

void ShowMetadataRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ShowMetadataRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ShowMetadataRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

}
}
}
}
}


