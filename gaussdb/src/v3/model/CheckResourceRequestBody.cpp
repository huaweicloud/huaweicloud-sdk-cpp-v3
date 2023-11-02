

#include "huaweicloud/gaussdb/v3/model/CheckResourceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckResourceRequestBody::CheckResourceRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    resourceIsSet_ = false;
}

CheckResourceRequestBody::~CheckResourceRequestBody() = default;

void CheckResourceRequestBody::validate()
{
}

web::json::value CheckResourceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }

    return val;
}
bool CheckResourceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            CheckResourceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    return ok;
}


std::string CheckResourceRequestBody::getAction() const
{
    return action_;
}

void CheckResourceRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool CheckResourceRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void CheckResourceRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

CheckResourceInfo CheckResourceRequestBody::getResource() const
{
    return resource_;
}

void CheckResourceRequestBody::setResource(const CheckResourceInfo& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool CheckResourceRequestBody::resourceIsSet() const
{
    return resourceIsSet_;
}

void CheckResourceRequestBody::unsetresource()
{
    resourceIsSet_ = false;
}

}
}
}
}
}


