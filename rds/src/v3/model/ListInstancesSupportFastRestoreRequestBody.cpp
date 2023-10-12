

#include "huaweicloud/rds/v3/model/ListInstancesSupportFastRestoreRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstancesSupportFastRestoreRequestBody::ListInstancesSupportFastRestoreRequestBody()
{
    restoreTime_ = "";
    restoreTimeIsSet_ = false;
    instanceIdsIsSet_ = false;
}

ListInstancesSupportFastRestoreRequestBody::~ListInstancesSupportFastRestoreRequestBody() = default;

void ListInstancesSupportFastRestoreRequestBody::validate()
{
}

web::json::value ListInstancesSupportFastRestoreRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }

    return val;
}
bool ListInstancesSupportFastRestoreRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
    return ok;
}


std::string ListInstancesSupportFastRestoreRequestBody::getRestoreTime() const
{
    return restoreTime_;
}

void ListInstancesSupportFastRestoreRequestBody::setRestoreTime(const std::string& value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool ListInstancesSupportFastRestoreRequestBody::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void ListInstancesSupportFastRestoreRequestBody::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::vector<std::string>& ListInstancesSupportFastRestoreRequestBody::getInstanceIds()
{
    return instanceIds_;
}

void ListInstancesSupportFastRestoreRequestBody::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool ListInstancesSupportFastRestoreRequestBody::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void ListInstancesSupportFastRestoreRequestBody::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

}
}
}
}
}


