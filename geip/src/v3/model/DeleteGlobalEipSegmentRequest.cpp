

#include "huaweicloud/geip/v3/model/DeleteGlobalEipSegmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DeleteGlobalEipSegmentRequest::DeleteGlobalEipSegmentRequest()
{
    globalEipSegmentId_ = "";
    globalEipSegmentIdIsSet_ = false;
}

DeleteGlobalEipSegmentRequest::~DeleteGlobalEipSegmentRequest() = default;

void DeleteGlobalEipSegmentRequest::validate()
{
}

web::json::value DeleteGlobalEipSegmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipSegmentIdIsSet_) {
        val[utility::conversions::to_string_t("global_eip_segment_id")] = ModelBase::toJson(globalEipSegmentId_);
    }

    return val;
}
bool DeleteGlobalEipSegmentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("global_eip_segment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_segment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipSegmentId(refVal);
        }
    }
    return ok;
}


std::string DeleteGlobalEipSegmentRequest::getGlobalEipSegmentId() const
{
    return globalEipSegmentId_;
}

void DeleteGlobalEipSegmentRequest::setGlobalEipSegmentId(const std::string& value)
{
    globalEipSegmentId_ = value;
    globalEipSegmentIdIsSet_ = true;
}

bool DeleteGlobalEipSegmentRequest::globalEipSegmentIdIsSet() const
{
    return globalEipSegmentIdIsSet_;
}

void DeleteGlobalEipSegmentRequest::unsetglobalEipSegmentId()
{
    globalEipSegmentIdIsSet_ = false;
}

}
}
}
}
}


