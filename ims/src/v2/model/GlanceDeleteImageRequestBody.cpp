

#include "huaweicloud/ims/v2/model/GlanceDeleteImageRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceDeleteImageRequestBody::GlanceDeleteImageRequestBody()
{
    deleteBackup_ = false;
    deleteBackupIsSet_ = false;
}

GlanceDeleteImageRequestBody::~GlanceDeleteImageRequestBody() = default;

void GlanceDeleteImageRequestBody::validate()
{
}

web::json::value GlanceDeleteImageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deleteBackupIsSet_) {
        val[utility::conversions::to_string_t("delete_backup")] = ModelBase::toJson(deleteBackup_);
    }

    return val;
}

bool GlanceDeleteImageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delete_backup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_backup"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteBackup(refVal);
        }
    }
    return ok;
}


bool GlanceDeleteImageRequestBody::isDeleteBackup() const
{
    return deleteBackup_;
}

void GlanceDeleteImageRequestBody::setDeleteBackup(bool value)
{
    deleteBackup_ = value;
    deleteBackupIsSet_ = true;
}

bool GlanceDeleteImageRequestBody::deleteBackupIsSet() const
{
    return deleteBackupIsSet_;
}

void GlanceDeleteImageRequestBody::unsetdeleteBackup()
{
    deleteBackupIsSet_ = false;
}

}
}
}
}
}


