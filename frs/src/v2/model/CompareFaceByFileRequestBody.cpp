

#include "huaweicloud/frs/v2/model/CompareFaceByFileRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




CompareFaceByFileRequestBody::CompareFaceByFileRequestBody()
{
    image1FileIsSet_ = false;
    image2FileIsSet_ = false;
}

CompareFaceByFileRequestBody::~CompareFaceByFileRequestBody() = default;

void CompareFaceByFileRequestBody::validate()
{
}

web::json::value CompareFaceByFileRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool CompareFaceByFileRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent CompareFaceByFileRequestBody::getImage1File() const
{
    return image1File_;
}

void CompareFaceByFileRequestBody::setImage1File(const HttpContent& value)
{
    image1File_ = value;
    image1FileIsSet_ = true;
}

bool CompareFaceByFileRequestBody::image1FileIsSet() const
{
    return image1FileIsSet_;
}

void CompareFaceByFileRequestBody::unsetimage1File()
{
    image1FileIsSet_ = false;
}

HttpContent CompareFaceByFileRequestBody::getImage2File() const
{
    return image2File_;
}

void CompareFaceByFileRequestBody::setImage2File(const HttpContent& value)
{
    image2File_ = value;
    image2FileIsSet_ = true;
}

bool CompareFaceByFileRequestBody::image2FileIsSet() const
{
    return image2FileIsSet_;
}

void CompareFaceByFileRequestBody::unsetimage2File()
{
    image2FileIsSet_ = false;
}

}
}
}
}
}


