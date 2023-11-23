

#include "huaweicloud/drs/v5/model/UploadJdbcDriverRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UploadJdbcDriverRequestBody::UploadJdbcDriverRequestBody()
{
    fileIsSet_ = false;
}

UploadJdbcDriverRequestBody::~UploadJdbcDriverRequestBody() = default;

void UploadJdbcDriverRequestBody::validate()
{
}

web::json::value UploadJdbcDriverRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool UploadJdbcDriverRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent UploadJdbcDriverRequestBody::getFile() const
{
    return file_;
}

void UploadJdbcDriverRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool UploadJdbcDriverRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void UploadJdbcDriverRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


