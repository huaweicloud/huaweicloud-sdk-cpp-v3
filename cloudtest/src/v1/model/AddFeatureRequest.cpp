

#include "huaweicloud/cloudtest/v1/model/AddFeatureRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddFeatureRequest::AddFeatureRequest()
{
    bodyIsSet_ = false;
}

AddFeatureRequest::~AddFeatureRequest() = default;

void AddFeatureRequest::validate()
{
}

web::json::value AddFeatureRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddFeatureRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddTestItemInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AddTestItemInfo AddFeatureRequest::getBody() const
{
    return body_;
}

void AddFeatureRequest::setBody(const AddTestItemInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddFeatureRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddFeatureRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


