

#include "huaweicloud/frs/v2/model/ShowAllFaceSetsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




ShowAllFaceSetsResponse::ShowAllFaceSetsResponse()
{
    faceSetsInfoIsSet_ = false;
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

}
}
}
}
}


