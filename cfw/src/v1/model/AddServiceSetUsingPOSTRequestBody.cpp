

#include "huaweicloud/cfw/v1/model/AddServiceSetUsingPOSTRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddServiceSetUsingPOSTRequestBody::AddServiceSetUsingPOSTRequestBody()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

AddServiceSetUsingPOSTRequestBody::~AddServiceSetUsingPOSTRequestBody() = default;

void AddServiceSetUsingPOSTRequestBody::validate()
{
}

web::json::value AddServiceSetUsingPOSTRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool AddServiceSetUsingPOSTRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}

std::string AddServiceSetUsingPOSTRequestBody::getObjectId() const
{
    return objectId_;
}

void AddServiceSetUsingPOSTRequestBody::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool AddServiceSetUsingPOSTRequestBody::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void AddServiceSetUsingPOSTRequestBody::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string AddServiceSetUsingPOSTRequestBody::getName() const
{
    return name_;
}

void AddServiceSetUsingPOSTRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddServiceSetUsingPOSTRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void AddServiceSetUsingPOSTRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string AddServiceSetUsingPOSTRequestBody::getDescription() const
{
    return description_;
}

void AddServiceSetUsingPOSTRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddServiceSetUsingPOSTRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddServiceSetUsingPOSTRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


