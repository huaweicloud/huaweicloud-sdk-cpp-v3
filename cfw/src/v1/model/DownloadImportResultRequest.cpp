

#include "huaweicloud/cfw/v1/model/DownloadImportResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DownloadImportResultRequest::DownloadImportResultRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
}

DownloadImportResultRequest::~DownloadImportResultRequest() = default;

void DownloadImportResultRequest::validate()
{
}

web::json::value DownloadImportResultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }

    return val;
}
bool DownloadImportResultRequest::fromJson(const web::json::value& val)
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


std::string DownloadImportResultRequest::getObjectId() const
{
    return objectId_;
}

void DownloadImportResultRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool DownloadImportResultRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void DownloadImportResultRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

}
}
}
}
}


