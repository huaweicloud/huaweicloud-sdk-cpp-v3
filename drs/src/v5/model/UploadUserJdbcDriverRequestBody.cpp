

#include "huaweicloud/drs/v5/model/UploadUserJdbcDriverRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UploadUserJdbcDriverRequestBody::UploadUserJdbcDriverRequestBody()
{
    fileIsSet_ = false;
}

UploadUserJdbcDriverRequestBody::~UploadUserJdbcDriverRequestBody() = default;

void UploadUserJdbcDriverRequestBody::validate()
{
}

web::json::value UploadUserJdbcDriverRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool UploadUserJdbcDriverRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent UploadUserJdbcDriverRequestBody::getFile() const
{
    return file_;
}

void UploadUserJdbcDriverRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool UploadUserJdbcDriverRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void UploadUserJdbcDriverRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


