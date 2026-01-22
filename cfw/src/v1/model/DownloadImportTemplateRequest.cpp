

#include "huaweicloud/cfw/v1/model/DownloadImportTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DownloadImportTemplateRequest::DownloadImportTemplateRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
}

DownloadImportTemplateRequest::~DownloadImportTemplateRequest() = default;

void DownloadImportTemplateRequest::validate()
{
}

web::json::value DownloadImportTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }

    return val;
}
bool DownloadImportTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    return ok;
}


std::string DownloadImportTemplateRequest::getObjectId() const
{
    return objectId_;
}

void DownloadImportTemplateRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool DownloadImportTemplateRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void DownloadImportTemplateRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

}
}
}
}
}


