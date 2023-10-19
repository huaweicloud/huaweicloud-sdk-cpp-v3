

#include "huaweicloud/frs/v2/model/SearchFaceByUrlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




SearchFaceByUrlResponse::SearchFaceByUrlResponse()
{
    facesIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

SearchFaceByUrlResponse::~SearchFaceByUrlResponse() = default;

void SearchFaceByUrlResponse::validate()
{
}

web::json::value SearchFaceByUrlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(facesIsSet_) {
        val[utility::conversions::to_string_t("faces")] = ModelBase::toJson(faces_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool SearchFaceByUrlResponse::fromJson(const web::json::value& val)
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


std::vector<SearchFace>& SearchFaceByUrlResponse::getFaces()
{
    return faces_;
}

void SearchFaceByUrlResponse::setFaces(const std::vector<SearchFace>& value)
{
    faces_ = value;
    facesIsSet_ = true;
}

bool SearchFaceByUrlResponse::facesIsSet() const
{
    return facesIsSet_;
}

void SearchFaceByUrlResponse::unsetfaces()
{
    facesIsSet_ = false;
}

std::string SearchFaceByUrlResponse::getXRequestId() const
{
    return xRequestId_;
}

void SearchFaceByUrlResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SearchFaceByUrlResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SearchFaceByUrlResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


