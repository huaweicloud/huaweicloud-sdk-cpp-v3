

#include "huaweicloud/cloudtest/v1/model/ImportFactorRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ImportFactorRequestBody::ImportFactorRequestBody()
{
    excelFileIsSet_ = false;
}

ImportFactorRequestBody::~ImportFactorRequestBody() = default;

void ImportFactorRequestBody::validate()
{
}

web::json::value ImportFactorRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool ImportFactorRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent ImportFactorRequestBody::getExcelFile() const
{
    return excelFile_;
}

void ImportFactorRequestBody::setExcelFile(const HttpContent& value)
{
    excelFile_ = value;
    excelFileIsSet_ = true;
}

bool ImportFactorRequestBody::excelFileIsSet() const
{
    return excelFileIsSet_;
}

void ImportFactorRequestBody::unsetexcelFile()
{
    excelFileIsSet_ = false;
}

}
}
}
}
}


