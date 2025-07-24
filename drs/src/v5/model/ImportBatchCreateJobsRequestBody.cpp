

#include "huaweicloud/drs/v5/model/ImportBatchCreateJobsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ImportBatchCreateJobsRequestBody::ImportBatchCreateJobsRequestBody()
{
    fileIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ImportBatchCreateJobsRequestBody::~ImportBatchCreateJobsRequestBody() = default;

void ImportBatchCreateJobsRequestBody::validate()
{
}

web::json::value ImportBatchCreateJobsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ImportBatchCreateJobsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
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

std::string ImportBatchCreateJobsRequestBody::getType() const
{
    return type_;
}

void ImportBatchCreateJobsRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ImportBatchCreateJobsRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void ImportBatchCreateJobsRequestBody::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


