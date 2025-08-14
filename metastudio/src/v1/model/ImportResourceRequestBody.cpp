

#include "huaweicloud/metastudio/v1/model/ImportResourceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ImportResourceRequestBody::ImportResourceRequestBody()
{
    fileIsSet_ = false;
}

ImportResourceRequestBody::~ImportResourceRequestBody() = default;

void ImportResourceRequestBody::validate()
{
}

web::json::value ImportResourceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool ImportResourceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent ImportResourceRequestBody::getFile() const
{
    return file_;
}

void ImportResourceRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool ImportResourceRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void ImportResourceRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


