

#include "huaweicloud/cdn/v2/model/DeleteShareCacheGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




DeleteShareCacheGroupsRequest::DeleteShareCacheGroupsRequest()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteShareCacheGroupsRequest::~DeleteShareCacheGroupsRequest() = default;

void DeleteShareCacheGroupsRequest::validate()
{
}

web::json::value DeleteShareCacheGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteShareCacheGroupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string DeleteShareCacheGroupsRequest::getId() const
{
    return id_;
}

void DeleteShareCacheGroupsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteShareCacheGroupsRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteShareCacheGroupsRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


