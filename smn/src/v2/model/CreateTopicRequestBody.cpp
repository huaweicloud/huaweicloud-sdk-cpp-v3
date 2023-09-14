

#include "huaweicloud/smn/v2/model/CreateTopicRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateTopicRequestBody::CreateTopicRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

CreateTopicRequestBody::~CreateTopicRequestBody() = default;

void CreateTopicRequestBody::validate()
{
}

web::json::value CreateTopicRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}

bool CreateTopicRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}

std::string CreateTopicRequestBody::getName() const
{
    return name_;
}

void CreateTopicRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateTopicRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateTopicRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateTopicRequestBody::getDisplayName() const
{
    return displayName_;
}

void CreateTopicRequestBody::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool CreateTopicRequestBody::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void CreateTopicRequestBody::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string CreateTopicRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateTopicRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateTopicRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateTopicRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


