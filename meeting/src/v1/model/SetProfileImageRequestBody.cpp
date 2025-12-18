

#include "huaweicloud/meeting/v1/model/SetProfileImageRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetProfileImageRequestBody::SetProfileImageRequestBody()
{
    fileIsSet_ = false;
}

SetProfileImageRequestBody::~SetProfileImageRequestBody() = default;

void SetProfileImageRequestBody::validate()
{
}

web::json::value SetProfileImageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool SetProfileImageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent SetProfileImageRequestBody::getFile() const
{
    return file_;
}

void SetProfileImageRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool SetProfileImageRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void SetProfileImageRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


