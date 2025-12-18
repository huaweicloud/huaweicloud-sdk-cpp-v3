

#include "huaweicloud/meeting/v1/model/RestBulkDelAttendReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestBulkDelAttendReqBody::RestBulkDelAttendReqBody()
{
    bulkDelAttendInfoIsSet_ = false;
}

RestBulkDelAttendReqBody::~RestBulkDelAttendReqBody() = default;

void RestBulkDelAttendReqBody::validate()
{
}

web::json::value RestBulkDelAttendReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bulkDelAttendInfoIsSet_) {
        val[utility::conversions::to_string_t("bulkDelAttendInfo")] = ModelBase::toJson(bulkDelAttendInfo_);
    }

    return val;
}
bool RestBulkDelAttendReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bulkDelAttendInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bulkDelAttendInfo"));
        if(!fieldValue.is_null())
        {
            std::vector<DelAttendInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBulkDelAttendInfo(refVal);
        }
    }
    return ok;
}


std::vector<DelAttendInfo>& RestBulkDelAttendReqBody::getBulkDelAttendInfo()
{
    return bulkDelAttendInfo_;
}

void RestBulkDelAttendReqBody::setBulkDelAttendInfo(const std::vector<DelAttendInfo>& value)
{
    bulkDelAttendInfo_ = value;
    bulkDelAttendInfoIsSet_ = true;
}

bool RestBulkDelAttendReqBody::bulkDelAttendInfoIsSet() const
{
    return bulkDelAttendInfoIsSet_;
}

void RestBulkDelAttendReqBody::unsetbulkDelAttendInfo()
{
    bulkDelAttendInfoIsSet_ = false;
}

}
}
}
}
}


