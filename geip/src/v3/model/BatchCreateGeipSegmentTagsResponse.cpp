

#include "huaweicloud/geip/v3/model/BatchCreateGeipSegmentTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateGeipSegmentTagsResponse::BatchCreateGeipSegmentTagsResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchCreateGeipSegmentTagsResponse::~BatchCreateGeipSegmentTagsResponse() = default;

void BatchCreateGeipSegmentTagsResponse::validate()
{
}

web::json::value BatchCreateGeipSegmentTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("x-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchCreateGeipSegmentTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("x-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string BatchCreateGeipSegmentTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchCreateGeipSegmentTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchCreateGeipSegmentTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchCreateGeipSegmentTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


