

#include "huaweicloud/geip/v3/model/CreateGlobalEipSegmentRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateGlobalEipSegmentRequestBody::CreateGlobalEipSegmentRequestBody()
{
    globalEipSegmentIsSet_ = false;
}

CreateGlobalEipSegmentRequestBody::~CreateGlobalEipSegmentRequestBody() = default;

void CreateGlobalEipSegmentRequestBody::validate()
{
}

web::json::value CreateGlobalEipSegmentRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipSegmentIsSet_) {
        val[utility::conversions::to_string_t("global_eip_segment")] = ModelBase::toJson(globalEipSegment_);
    }

    return val;
}
bool CreateGlobalEipSegmentRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("global_eip_segment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_segment"));
        if(!fieldValue.is_null())
        {
            CreateGlobalEipSegmentRequestBody_global_eip_segment refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipSegment(refVal);
        }
    }
    return ok;
}


CreateGlobalEipSegmentRequestBody_global_eip_segment CreateGlobalEipSegmentRequestBody::getGlobalEipSegment() const
{
    return globalEipSegment_;
}

void CreateGlobalEipSegmentRequestBody::setGlobalEipSegment(const CreateGlobalEipSegmentRequestBody_global_eip_segment& value)
{
    globalEipSegment_ = value;
    globalEipSegmentIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody::globalEipSegmentIsSet() const
{
    return globalEipSegmentIsSet_;
}

void CreateGlobalEipSegmentRequestBody::unsetglobalEipSegment()
{
    globalEipSegmentIsSet_ = false;
}

}
}
}
}
}


