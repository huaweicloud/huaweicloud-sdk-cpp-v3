

#include "huaweicloud/geip/v3/model/UpdateGlobalEipSegmentRequestBody_global_eip_segment.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




UpdateGlobalEipSegmentRequestBody_global_eip_segment::UpdateGlobalEipSegmentRequestBody_global_eip_segment()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateGlobalEipSegmentRequestBody_global_eip_segment::~UpdateGlobalEipSegmentRequestBody_global_eip_segment() = default;

void UpdateGlobalEipSegmentRequestBody_global_eip_segment::validate()
{
}

web::json::value UpdateGlobalEipSegmentRequestBody_global_eip_segment::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool UpdateGlobalEipSegmentRequestBody_global_eip_segment::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string UpdateGlobalEipSegmentRequestBody_global_eip_segment::getName() const
{
    return name_;
}

void UpdateGlobalEipSegmentRequestBody_global_eip_segment::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateGlobalEipSegmentRequestBody_global_eip_segment::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateGlobalEipSegmentRequestBody_global_eip_segment::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateGlobalEipSegmentRequestBody_global_eip_segment::getDescription() const
{
    return description_;
}

void UpdateGlobalEipSegmentRequestBody_global_eip_segment::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateGlobalEipSegmentRequestBody_global_eip_segment::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateGlobalEipSegmentRequestBody_global_eip_segment::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


