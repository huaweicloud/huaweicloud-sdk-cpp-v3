

#include "huaweicloud/dds/v3/model/ListRestoreTimesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListRestoreTimesResponse::ListRestoreTimesResponse()
{
    restoreTimeIsSet_ = false;
}

ListRestoreTimesResponse::~ListRestoreTimesResponse() = default;

void ListRestoreTimesResponse::validate()
{
}

web::json::value ListRestoreTimesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }

    return val;
}
bool ListRestoreTimesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            std::vector<ListRestoreTimesResponseBody_restore_time> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
        }
    }
    return ok;
}


std::vector<ListRestoreTimesResponseBody_restore_time>& ListRestoreTimesResponse::getRestoreTime()
{
    return restoreTime_;
}

void ListRestoreTimesResponse::setRestoreTime(const std::vector<ListRestoreTimesResponseBody_restore_time>& value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool ListRestoreTimesResponse::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void ListRestoreTimesResponse::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

}
}
}
}
}


