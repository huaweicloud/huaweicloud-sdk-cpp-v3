

#include "huaweicloud/geip/v3/model/ShowGlobalEipSegmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowGlobalEipSegmentRequest::ShowGlobalEipSegmentRequest()
{
    globalEipSegmentId_ = "";
    globalEipSegmentIdIsSet_ = false;
    fieldsIsSet_ = false;
}

ShowGlobalEipSegmentRequest::~ShowGlobalEipSegmentRequest() = default;

void ShowGlobalEipSegmentRequest::validate()
{
}

web::json::value ShowGlobalEipSegmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipSegmentIdIsSet_) {
        val[utility::conversions::to_string_t("global_eip_segment_id")] = ModelBase::toJson(globalEipSegmentId_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }

    return val;
}
bool ShowGlobalEipSegmentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    return ok;
}


std::string ShowGlobalEipSegmentRequest::getGlobalEipSegmentId() const
{
    return globalEipSegmentId_;
}

void ShowGlobalEipSegmentRequest::setGlobalEipSegmentId(const std::string& value)
{
    globalEipSegmentId_ = value;
    globalEipSegmentIdIsSet_ = true;
}

bool ShowGlobalEipSegmentRequest::globalEipSegmentIdIsSet() const
{
    return globalEipSegmentIdIsSet_;
}

void ShowGlobalEipSegmentRequest::unsetglobalEipSegmentId()
{
    globalEipSegmentIdIsSet_ = false;
}

std::vector<std::string>& ShowGlobalEipSegmentRequest::getFields()
{
    return fields_;
}

void ShowGlobalEipSegmentRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ShowGlobalEipSegmentRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ShowGlobalEipSegmentRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

}
}
}
}
}


