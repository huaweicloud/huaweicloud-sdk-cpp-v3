

#include "huaweicloud/frs/v2/model/ShowAllFaceSetsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




ShowAllFaceSetsResponse::ShowAllFaceSetsResponse()
{
    faceSetsInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowAllFaceSetsResponse::~ShowAllFaceSetsResponse() = default;

void ShowAllFaceSetsResponse::validate()
{
}

web::json::value ShowAllFaceSetsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(faceSetsInfoIsSet_) {
        val[utility::conversions::to_string_t("face_sets_info")] = ModelBase::toJson(faceSetsInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowAllFaceSetsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("face_sets_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_sets_info"));
        if(!fieldValue.is_null())
        {
            std::vector<FaceSetInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceSetsInfo(refVal);
        }
    }
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


std::vector<FaceSetInfo>& ShowAllFaceSetsResponse::getFaceSetsInfo()
{
    return faceSetsInfo_;
}

void ShowAllFaceSetsResponse::setFaceSetsInfo(const std::vector<FaceSetInfo>& value)
{
    faceSetsInfo_ = value;
    faceSetsInfoIsSet_ = true;
}

bool ShowAllFaceSetsResponse::faceSetsInfoIsSet() const
{
    return faceSetsInfoIsSet_;
}

void ShowAllFaceSetsResponse::unsetfaceSetsInfo()
{
    faceSetsInfoIsSet_ = false;
}

std::string ShowAllFaceSetsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowAllFaceSetsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowAllFaceSetsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowAllFaceSetsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


