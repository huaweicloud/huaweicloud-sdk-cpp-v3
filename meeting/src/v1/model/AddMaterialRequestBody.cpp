

#include "huaweicloud/meeting/v1/model/AddMaterialRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddMaterialRequestBody::AddMaterialRequestBody()
{
    fileIsSet_ = false;
}

AddMaterialRequestBody::~AddMaterialRequestBody() = default;

void AddMaterialRequestBody::validate()
{
}

web::json::value AddMaterialRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool AddMaterialRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent AddMaterialRequestBody::getFile() const
{
    return file_;
}

void AddMaterialRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool AddMaterialRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void AddMaterialRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


