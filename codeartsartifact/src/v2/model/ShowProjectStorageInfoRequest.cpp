

#include "huaweicloud/codeartsartifact/v2/model/ShowProjectStorageInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowProjectStorageInfoRequest::ShowProjectStorageInfoRequest()
{
    parentId_ = "";
    parentIdIsSet_ = false;
}

ShowProjectStorageInfoRequest::~ShowProjectStorageInfoRequest() = default;

void ShowProjectStorageInfoRequest::validate()
{
}

web::json::value ShowProjectStorageInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }

    return val;
}
bool ShowProjectStorageInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    return ok;
}


std::string ShowProjectStorageInfoRequest::getParentId() const
{
    return parentId_;
}

void ShowProjectStorageInfoRequest::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool ShowProjectStorageInfoRequest::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void ShowProjectStorageInfoRequest::unsetparentId()
{
    parentIdIsSet_ = false;
}

}
}
}
}
}


