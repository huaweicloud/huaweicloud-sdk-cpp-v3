

#include "huaweicloud/meeting/v1/model/SetUserProfileImageRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetUserProfileImageRequestBody::SetUserProfileImageRequestBody()
{
    fileIsSet_ = false;
}

SetUserProfileImageRequestBody::~SetUserProfileImageRequestBody() = default;

void SetUserProfileImageRequestBody::validate()
{
}

web::json::value SetUserProfileImageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool SetUserProfileImageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent SetUserProfileImageRequestBody::getFile() const
{
    return file_;
}

void SetUserProfileImageRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool SetUserProfileImageRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void SetUserProfileImageRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


