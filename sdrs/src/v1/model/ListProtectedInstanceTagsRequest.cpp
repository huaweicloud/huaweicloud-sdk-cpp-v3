

#include "huaweicloud/sdrs/v1/model/ListProtectedInstanceTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListProtectedInstanceTagsRequest::ListProtectedInstanceTagsRequest()
{
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
}

ListProtectedInstanceTagsRequest::~ListProtectedInstanceTagsRequest() = default;

void ListProtectedInstanceTagsRequest::validate()
{
}

web::json::value ListProtectedInstanceTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("protected_instance_id")] = ModelBase::toJson(protectedInstanceId_);
    }

    return val;
}

bool ListProtectedInstanceTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListProtectedInstanceTagsRequest::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void ListProtectedInstanceTagsRequest::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool ListProtectedInstanceTagsRequest::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void ListProtectedInstanceTagsRequest::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
}

}
}
}
}
}


