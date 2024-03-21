

#include "huaweicloud/geip/v3/model/BatchDeleteGeipSegmentTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchDeleteGeipSegmentTagsResponse::BatchDeleteGeipSegmentTagsResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchDeleteGeipSegmentTagsResponse::~BatchDeleteGeipSegmentTagsResponse() = default;

void BatchDeleteGeipSegmentTagsResponse::validate()
{
}

web::json::value BatchDeleteGeipSegmentTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchDeleteGeipSegmentTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteGeipSegmentTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchDeleteGeipSegmentTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchDeleteGeipSegmentTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchDeleteGeipSegmentTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


