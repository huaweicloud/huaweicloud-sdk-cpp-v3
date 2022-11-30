

#include "huaweicloud/frs/v2/model/SearchFaceByFileResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




SearchFaceByFileResponse::SearchFaceByFileResponse()
{
    facesIsSet_ = false;
}

SearchFaceByFileResponse::~SearchFaceByFileResponse() = default;

void SearchFaceByFileResponse::validate()
{
}

web::json::value SearchFaceByFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(facesIsSet_) {
        val[utility::conversions::to_string_t("faces")] = ModelBase::toJson(faces_);
    }

    return val;
}

bool SearchFaceByFileResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("faces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("faces"));
        if(!fieldValue.is_null())
        {
            std::vector<SearchFace> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaces(refVal);
        }
    }
    return ok;
}


std::vector<SearchFace>& SearchFaceByFileResponse::getFaces()
{
    return faces_;
}

void SearchFaceByFileResponse::setFaces(const std::vector<SearchFace>& value)
{
    faces_ = value;
    facesIsSet_ = true;
}

bool SearchFaceByFileResponse::facesIsSet() const
{
    return facesIsSet_;
}

void SearchFaceByFileResponse::unsetfaces()
{
    facesIsSet_ = false;
}

}
}
}
}
}


