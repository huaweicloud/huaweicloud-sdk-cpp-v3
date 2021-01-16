

#include "huaweicloud/ims/v2/model/GlanceCreateImageMetadataRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceCreateImageMetadataRequest::GlanceCreateImageMetadataRequest()
{
    bodyIsSet_ = false;
}

GlanceCreateImageMetadataRequest::~GlanceCreateImageMetadataRequest() = default;

void GlanceCreateImageMetadataRequest::validate()
{
}

web::json::value GlanceCreateImageMetadataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool GlanceCreateImageMetadataRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            GlanceCreateImageMetadataRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


GlanceCreateImageMetadataRequestBody GlanceCreateImageMetadataRequest::getBody() const
{
    return body_;
}

void GlanceCreateImageMetadataRequest::setBody(const GlanceCreateImageMetadataRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool GlanceCreateImageMetadataRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void GlanceCreateImageMetadataRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


