

#include "huaweicloud/drs/v5/model/ImportBatchCreateJobsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ImportBatchCreateJobsRequestBody::ImportBatchCreateJobsRequestBody()
{
    fileIsSet_ = false;
}

ImportBatchCreateJobsRequestBody::~ImportBatchCreateJobsRequestBody() = default;

void ImportBatchCreateJobsRequestBody::validate()
{
}

web::json::value ImportBatchCreateJobsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool ImportBatchCreateJobsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent ImportBatchCreateJobsRequestBody::getFile() const
{
    return file_;
}

void ImportBatchCreateJobsRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool ImportBatchCreateJobsRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void ImportBatchCreateJobsRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


