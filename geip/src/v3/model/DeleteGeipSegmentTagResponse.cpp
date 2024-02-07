

#include "huaweicloud/geip/v3/model/DeleteGeipSegmentTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DeleteGeipSegmentTagResponse::DeleteGeipSegmentTagResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteGeipSegmentTagResponse::~DeleteGeipSegmentTagResponse() = default;

void DeleteGeipSegmentTagResponse::validate()
{
}

web::json::value DeleteGeipSegmentTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteGeipSegmentTagResponse::fromJson(const web::json::value& val)
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


std::string DeleteGeipSegmentTagResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteGeipSegmentTagResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteGeipSegmentTagResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteGeipSegmentTagResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


