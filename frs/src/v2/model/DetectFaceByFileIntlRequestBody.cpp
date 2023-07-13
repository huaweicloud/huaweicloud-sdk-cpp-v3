

#include "huaweicloud/frs/v2/model/DetectFaceByFileIntlRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectFaceByFileIntlRequestBody::DetectFaceByFileIntlRequestBody()
{
    imageFileIsSet_ = false;
}

DetectFaceByFileIntlRequestBody::~DetectFaceByFileIntlRequestBody() = default;

void DetectFaceByFileIntlRequestBody::validate()
{
}

web::json::value DetectFaceByFileIntlRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}

bool DetectFaceByFileIntlRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}

HttpContent DetectFaceByFileIntlRequestBody::getImageFile() const
{
    return imageFile_;
}

void DetectFaceByFileIntlRequestBody::setImageFile(const HttpContent& value)
{
    imageFile_ = value;
    imageFileIsSet_ = true;
}

bool DetectFaceByFileIntlRequestBody::imageFileIsSet() const
{
    return imageFileIsSet_;
}

void DetectFaceByFileIntlRequestBody::unsetimageFile()
{
    imageFileIsSet_ = false;
}

}
}
}
}
}


