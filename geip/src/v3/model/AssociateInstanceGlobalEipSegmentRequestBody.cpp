

#include "huaweicloud/geip/v3/model/AssociateInstanceGlobalEipSegmentRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AssociateInstanceGlobalEipSegmentRequestBody::AssociateInstanceGlobalEipSegmentRequestBody()
{
    globalEipSegmentIsSet_ = false;
}

AssociateInstanceGlobalEipSegmentRequestBody::~AssociateInstanceGlobalEipSegmentRequestBody() = default;

void AssociateInstanceGlobalEipSegmentRequestBody::validate()
{
}

web::json::value AssociateInstanceGlobalEipSegmentRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipSegmentIsSet_) {
        val[utility::conversions::to_string_t("global_eip_segment")] = ModelBase::toJson(globalEipSegment_);
    }

    return val;
}
bool AssociateInstanceGlobalEipSegmentRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("global_eip_segment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_segment"));
        if(!fieldValue.is_null())
        {
            AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipSegment(refVal);
        }
    }
    return ok;
}


AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment AssociateInstanceGlobalEipSegmentRequestBody::getGlobalEipSegment() const
{
    return globalEipSegment_;
}

void AssociateInstanceGlobalEipSegmentRequestBody::setGlobalEipSegment(const AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment& value)
{
    globalEipSegment_ = value;
    globalEipSegmentIsSet_ = true;
}

bool AssociateInstanceGlobalEipSegmentRequestBody::globalEipSegmentIsSet() const
{
    return globalEipSegmentIsSet_;
}

void AssociateInstanceGlobalEipSegmentRequestBody::unsetglobalEipSegment()
{
    globalEipSegmentIsSet_ = false;
}

}
}
}
}
}


