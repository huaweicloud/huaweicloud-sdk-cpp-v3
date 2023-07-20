

#include "huaweicloud/dds/v3/model/DeleteAuditLogRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteAuditLogRequestBody::DeleteAuditLogRequestBody()
{
    fileNamesIsSet_ = false;
}

DeleteAuditLogRequestBody::~DeleteAuditLogRequestBody() = default;

void DeleteAuditLogRequestBody::validate()
{
}

web::json::value DeleteAuditLogRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNamesIsSet_) {
        val[utility::conversions::to_string_t("file_names")] = ModelBase::toJson(fileNames_);
    }

    return val;
}

bool DeleteAuditLogRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileNames(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& DeleteAuditLogRequestBody::getFileNames()
{
    return fileNames_;
}

void DeleteAuditLogRequestBody::setFileNames(const std::vector<std::string>& value)
{
    fileNames_ = value;
    fileNamesIsSet_ = true;
}

bool DeleteAuditLogRequestBody::fileNamesIsSet() const
{
    return fileNamesIsSet_;
}

void DeleteAuditLogRequestBody::unsetfileNames()
{
    fileNamesIsSet_ = false;
}

}
}
}
}
}


