

#include "huaweicloud/cloudtest/v1/model/ImportAssetRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ImportAssetRequestBody::ImportAssetRequestBody()
{
    excelFileIsSet_ = false;
}

ImportAssetRequestBody::~ImportAssetRequestBody() = default;

void ImportAssetRequestBody::validate()
{
}

web::json::value ImportAssetRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool ImportAssetRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent ImportAssetRequestBody::getExcelFile() const
{
    return excelFile_;
}

void ImportAssetRequestBody::setExcelFile(const HttpContent& value)
{
    excelFile_ = value;
    excelFileIsSet_ = true;
}

bool ImportAssetRequestBody::excelFileIsSet() const
{
    return excelFileIsSet_;
}

void ImportAssetRequestBody::unsetexcelFile()
{
    excelFileIsSet_ = false;
}

}
}
}
}
}


