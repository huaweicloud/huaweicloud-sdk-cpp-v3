

#include "huaweicloud/cfw/v1/model/DownloadExportResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DownloadExportResultRequest::DownloadExportResultRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
}

DownloadExportResultRequest::~DownloadExportResultRequest() = default;

void DownloadExportResultRequest::validate()
{
}

web::json::value DownloadExportResultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }

    return val;
}
bool DownloadExportResultRequest::fromJson(const web::json::value& val)
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


std::string DownloadExportResultRequest::getObjectId() const
{
    return objectId_;
}

void DownloadExportResultRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool DownloadExportResultRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void DownloadExportResultRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

}
}
}
}
}


