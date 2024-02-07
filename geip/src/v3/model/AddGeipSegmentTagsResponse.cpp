

#include "huaweicloud/geip/v3/model/AddGeipSegmentTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AddGeipSegmentTagsResponse::AddGeipSegmentTagsResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

AddGeipSegmentTagsResponse::~AddGeipSegmentTagsResponse() = default;

void AddGeipSegmentTagsResponse::validate()
{
}

web::json::value AddGeipSegmentTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool AddGeipSegmentTagsResponse::fromJson(const web::json::value& val)
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


std::string AddGeipSegmentTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void AddGeipSegmentTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AddGeipSegmentTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AddGeipSegmentTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


