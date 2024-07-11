

#include "huaweicloud/codeartsdeploy/v2/model/CreateAppGroupsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateAppGroupsRequestBody::CreateAppGroupsRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
}

CreateAppGroupsRequestBody::~CreateAppGroupsRequestBody() = default;

void CreateAppGroupsRequestBody::validate()
{
}

web::json::value CreateAppGroupsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }

    return val;
}
bool CreateAppGroupsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
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


std::string CreateAppGroupsRequestBody::getName() const
{
    return name_;
}

void CreateAppGroupsRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateAppGroupsRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateAppGroupsRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateAppGroupsRequestBody::getParentId() const
{
    return parentId_;
}

void CreateAppGroupsRequestBody::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool CreateAppGroupsRequestBody::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void CreateAppGroupsRequestBody::unsetparentId()
{
    parentIdIsSet_ = false;
}

}
}
}
}
}


