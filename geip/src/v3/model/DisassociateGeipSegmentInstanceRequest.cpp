

#include "huaweicloud/geip/v3/model/DisassociateGeipSegmentInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DisassociateGeipSegmentInstanceRequest::DisassociateGeipSegmentInstanceRequest()
{
    globalEipSegmentId_ = "";
    globalEipSegmentIdIsSet_ = false;
}

DisassociateGeipSegmentInstanceRequest::~DisassociateGeipSegmentInstanceRequest() = default;

void DisassociateGeipSegmentInstanceRequest::validate()
{
}

web::json::value DisassociateGeipSegmentInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipSegmentIdIsSet_) {
        val[utility::conversions::to_string_t("global_eip_segment_id")] = ModelBase::toJson(globalEipSegmentId_);
    }

    return val;
}
bool DisassociateGeipSegmentInstanceRequest::fromJson(const web::json::value& val)
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


std::string DisassociateGeipSegmentInstanceRequest::getGlobalEipSegmentId() const
{
    return globalEipSegmentId_;
}

void DisassociateGeipSegmentInstanceRequest::setGlobalEipSegmentId(const std::string& value)
{
    globalEipSegmentId_ = value;
    globalEipSegmentIdIsSet_ = true;
}

bool DisassociateGeipSegmentInstanceRequest::globalEipSegmentIdIsSet() const
{
    return globalEipSegmentIdIsSet_;
}

void DisassociateGeipSegmentInstanceRequest::unsetglobalEipSegmentId()
{
    globalEipSegmentIdIsSet_ = false;
}

}
}
}
}
}


