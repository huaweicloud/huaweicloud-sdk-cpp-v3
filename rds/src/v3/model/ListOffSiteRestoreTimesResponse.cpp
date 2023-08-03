

#include "huaweicloud/rds/v3/model/ListOffSiteRestoreTimesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListOffSiteRestoreTimesResponse::ListOffSiteRestoreTimesResponse()
{
    restoreTimeIsSet_ = false;
}

ListOffSiteRestoreTimesResponse::~ListOffSiteRestoreTimesResponse() = default;

void ListOffSiteRestoreTimesResponse::validate()
{
}

web::json::value ListOffSiteRestoreTimesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }

    return val;
}

bool ListOffSiteRestoreTimesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            std::vector<GetRestoreTimeResponse_restore_time> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
        }
    }
    return ok;
}

std::vector<GetRestoreTimeResponse_restore_time>& ListOffSiteRestoreTimesResponse::getRestoreTime()
{
    return restoreTime_;
}

void ListOffSiteRestoreTimesResponse::setRestoreTime(const std::vector<GetRestoreTimeResponse_restore_time>& value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool ListOffSiteRestoreTimesResponse::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void ListOffSiteRestoreTimesResponse::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

}
}
}
}
}


