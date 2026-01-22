

#include "huaweicloud/cfw/v1/model/ShowExportStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowExportStatusRequest::ShowExportStatusRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
}

ShowExportStatusRequest::~ShowExportStatusRequest() = default;

void ShowExportStatusRequest::validate()
{
}

web::json::value ShowExportStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }

    return val;
}
bool ShowExportStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowExportStatusRequest::getObjectId() const
{
    return objectId_;
}

void ShowExportStatusRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ShowExportStatusRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ShowExportStatusRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

}
}
}
}
}


