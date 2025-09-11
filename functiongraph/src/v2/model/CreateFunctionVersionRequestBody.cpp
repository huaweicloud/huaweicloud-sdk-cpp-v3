

#include "huaweicloud/functiongraph/v2/model/CreateFunctionVersionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateFunctionVersionRequestBody::CreateFunctionVersionRequestBody()
{
    digest_ = "";
    digestIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CreateFunctionVersionRequestBody::~CreateFunctionVersionRequestBody() = default;

void CreateFunctionVersionRequestBody::validate()
{
}

web::json::value CreateFunctionVersionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(digestIsSet_) {
        val[utility::conversions::to_string_t("digest")] = ModelBase::toJson(digest_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool CreateFunctionVersionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("digest"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("digest"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDigest(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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


std::string CreateFunctionVersionRequestBody::getDigest() const
{
    return digest_;
}

void CreateFunctionVersionRequestBody::setDigest(const std::string& value)
{
    digest_ = value;
    digestIsSet_ = true;
}

bool CreateFunctionVersionRequestBody::digestIsSet() const
{
    return digestIsSet_;
}

void CreateFunctionVersionRequestBody::unsetdigest()
{
    digestIsSet_ = false;
}

std::string CreateFunctionVersionRequestBody::getVersion() const
{
    return version_;
}

void CreateFunctionVersionRequestBody::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateFunctionVersionRequestBody::versionIsSet() const
{
    return versionIsSet_;
}

void CreateFunctionVersionRequestBody::unsetversion()
{
    versionIsSet_ = false;
}

std::string CreateFunctionVersionRequestBody::getDescription() const
{
    return description_;
}

void CreateFunctionVersionRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateFunctionVersionRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateFunctionVersionRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


