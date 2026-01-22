

#include "huaweicloud/cfw/v1/model/ImportRuleAclRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ImportRuleAclRequest::ImportRuleAclRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ImportRuleAclRequest::~ImportRuleAclRequest() = default;

void ImportRuleAclRequest::validate()
{
}

web::json::value ImportRuleAclRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ImportRuleAclRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ImportRuleAclRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ImportRuleAclRequest::getObjectId() const
{
    return objectId_;
}

void ImportRuleAclRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ImportRuleAclRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ImportRuleAclRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

ImportRuleAclRequestBody ImportRuleAclRequest::getBody() const
{
    return body_;
}

void ImportRuleAclRequest::setBody(const ImportRuleAclRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportRuleAclRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportRuleAclRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


