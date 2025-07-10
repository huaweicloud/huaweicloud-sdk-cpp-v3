

#include "huaweicloud/cdn/v2/model/UpdateShareCacheGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UpdateShareCacheGroupsRequest::UpdateShareCacheGroupsRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateShareCacheGroupsRequest::~UpdateShareCacheGroupsRequest() = default;

void UpdateShareCacheGroupsRequest::validate()
{
}

web::json::value UpdateShareCacheGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateShareCacheGroupsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateShareCacheGroupsRequstBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateShareCacheGroupsRequest::getId() const
{
    return id_;
}

void UpdateShareCacheGroupsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateShareCacheGroupsRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateShareCacheGroupsRequest::unsetid()
{
    idIsSet_ = false;
}

UpdateShareCacheGroupsRequstBody UpdateShareCacheGroupsRequest::getBody() const
{
    return body_;
}

void UpdateShareCacheGroupsRequest::setBody(const UpdateShareCacheGroupsRequstBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateShareCacheGroupsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateShareCacheGroupsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


