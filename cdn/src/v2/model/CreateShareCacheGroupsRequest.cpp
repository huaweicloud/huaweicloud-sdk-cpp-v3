

#include "huaweicloud/cdn/v2/model/CreateShareCacheGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CreateShareCacheGroupsRequest::CreateShareCacheGroupsRequest()
{
    bodyIsSet_ = false;
}

CreateShareCacheGroupsRequest::~CreateShareCacheGroupsRequest() = default;

void CreateShareCacheGroupsRequest::validate()
{
}

web::json::value CreateShareCacheGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateShareCacheGroupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateShareCacheGroupsRequstBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateShareCacheGroupsRequstBody CreateShareCacheGroupsRequest::getBody() const
{
    return body_;
}

void CreateShareCacheGroupsRequest::setBody(const CreateShareCacheGroupsRequstBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateShareCacheGroupsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateShareCacheGroupsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


