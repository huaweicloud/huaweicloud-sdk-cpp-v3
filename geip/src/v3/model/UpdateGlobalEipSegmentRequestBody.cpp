

#include "huaweicloud/geip/v3/model/UpdateGlobalEipSegmentRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




UpdateGlobalEipSegmentRequestBody::UpdateGlobalEipSegmentRequestBody()
{
    globalEipSegmentIsSet_ = false;
}

UpdateGlobalEipSegmentRequestBody::~UpdateGlobalEipSegmentRequestBody() = default;

void UpdateGlobalEipSegmentRequestBody::validate()
{
}

web::json::value UpdateGlobalEipSegmentRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipSegmentIsSet_) {
        val[utility::conversions::to_string_t("global_eip_segment")] = ModelBase::toJson(globalEipSegment_);
    }

    return val;
}
bool UpdateGlobalEipSegmentRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("global_eip_segment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_segment"));
        if(!fieldValue.is_null())
        {
            UpdateGlobalEipSegmentRequestBody_global_eip_segment refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipSegment(refVal);
        }
    }
    return ok;
}


UpdateGlobalEipSegmentRequestBody_global_eip_segment UpdateGlobalEipSegmentRequestBody::getGlobalEipSegment() const
{
    return globalEipSegment_;
}

void UpdateGlobalEipSegmentRequestBody::setGlobalEipSegment(const UpdateGlobalEipSegmentRequestBody_global_eip_segment& value)
{
    globalEipSegment_ = value;
    globalEipSegmentIsSet_ = true;
}

bool UpdateGlobalEipSegmentRequestBody::globalEipSegmentIsSet() const
{
    return globalEipSegmentIsSet_;
}

void UpdateGlobalEipSegmentRequestBody::unsetglobalEipSegment()
{
    globalEipSegmentIsSet_ = false;
}

}
}
}
}
}


