

#include "huaweicloud/ims/v2/model/CopyImageInRegionRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CopyImageInRegionRequestBody::CopyImageInRegionRequestBody()
{
    cmkId_ = "";
    cmkIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

CopyImageInRegionRequestBody::~CopyImageInRegionRequestBody() = default;

void CopyImageInRegionRequestBody::validate()
{
}

web::json::value CopyImageInRegionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cmkIdIsSet_) {
        val[utility::conversions::to_string_t("cmk_id")] = ModelBase::toJson(cmkId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool CopyImageInRegionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cmk_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmk_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmkId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    return ok;
}

std::string CopyImageInRegionRequestBody::getCmkId() const
{
    return cmkId_;
}

void CopyImageInRegionRequestBody::setCmkId(const std::string& value)
{
    cmkId_ = value;
    cmkIdIsSet_ = true;
}

bool CopyImageInRegionRequestBody::cmkIdIsSet() const
{
    return cmkIdIsSet_;
}

void CopyImageInRegionRequestBody::unsetcmkId()
{
    cmkIdIsSet_ = false;
}

std::string CopyImageInRegionRequestBody::getDescription() const
{
    return description_;
}

void CopyImageInRegionRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CopyImageInRegionRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CopyImageInRegionRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CopyImageInRegionRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CopyImageInRegionRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CopyImageInRegionRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CopyImageInRegionRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CopyImageInRegionRequestBody::getName() const
{
    return name_;
}

void CopyImageInRegionRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CopyImageInRegionRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CopyImageInRegionRequestBody::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


