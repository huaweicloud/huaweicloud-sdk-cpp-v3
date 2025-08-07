

#include "huaweicloud/organizations/v1/model/CreateResourceAccountReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateResourceAccountReqBody::CreateResourceAccountReqBody()
{
    name_ = "";
    nameIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    tagsIsSet_ = false;
}

CreateResourceAccountReqBody::~CreateResourceAccountReqBody() = default;

void CreateResourceAccountReqBody::validate()
{
}

web::json::value CreateResourceAccountReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CreateResourceAccountReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string CreateResourceAccountReqBody::getName() const
{
    return name_;
}

void CreateResourceAccountReqBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateResourceAccountReqBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateResourceAccountReqBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateResourceAccountReqBody::getAgencyName() const
{
    return agencyName_;
}

void CreateResourceAccountReqBody::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool CreateResourceAccountReqBody::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void CreateResourceAccountReqBody::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::string CreateResourceAccountReqBody::getDescription() const
{
    return description_;
}

void CreateResourceAccountReqBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateResourceAccountReqBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateResourceAccountReqBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<TagDto>& CreateResourceAccountReqBody::getTags()
{
    return tags_;
}

void CreateResourceAccountReqBody::setTags(const std::vector<TagDto>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateResourceAccountReqBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateResourceAccountReqBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


