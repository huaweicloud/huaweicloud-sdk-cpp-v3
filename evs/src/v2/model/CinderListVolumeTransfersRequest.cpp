

#include "huaweicloud/evs/v2/model/CinderListVolumeTransfersRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderListVolumeTransfersRequest::CinderListVolumeTransfersRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

CinderListVolumeTransfersRequest::~CinderListVolumeTransfersRequest() = default;

void CinderListVolumeTransfersRequest::validate()
{
}

web::json::value CinderListVolumeTransfersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}

bool CinderListVolumeTransfersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


int32_t CinderListVolumeTransfersRequest::getLimit() const
{
    return limit_;
}

void CinderListVolumeTransfersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool CinderListVolumeTransfersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void CinderListVolumeTransfersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t CinderListVolumeTransfersRequest::getOffset() const
{
    return offset_;
}

void CinderListVolumeTransfersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool CinderListVolumeTransfersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void CinderListVolumeTransfersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


