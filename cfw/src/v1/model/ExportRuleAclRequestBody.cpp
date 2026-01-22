

#include "huaweicloud/cfw/v1/model/ExportRuleAclRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ExportRuleAclRequestBody::ExportRuleAclRequestBody()
{
    objectId_ = "";
    objectIdIsSet_ = false;
}

ExportRuleAclRequestBody::~ExportRuleAclRequestBody() = default;

void ExportRuleAclRequestBody::validate()
{
}

web::json::value ExportRuleAclRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }

    return val;
}
bool ExportRuleAclRequestBody::fromJson(const web::json::value& val)
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


std::string ExportRuleAclRequestBody::getObjectId() const
{
    return objectId_;
}

void ExportRuleAclRequestBody::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ExportRuleAclRequestBody::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ExportRuleAclRequestBody::unsetobjectId()
{
    objectIdIsSet_ = false;
}

}
}
}
}
}


