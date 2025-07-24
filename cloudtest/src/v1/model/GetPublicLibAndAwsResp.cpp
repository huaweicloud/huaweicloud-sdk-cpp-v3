

#include "huaweicloud/cloudtest/v1/model/GetPublicLibAndAwsResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




GetPublicLibAndAwsResp::GetPublicLibAndAwsResp()
{
    awTag_ = "";
    awTagIsSet_ = false;
    documentLink_ = "";
    documentLinkIsSet_ = false;
    isFavorite_ = 0;
    isFavoriteIsSet_ = false;
    publicAwDescription_ = "";
    publicAwDescriptionIsSet_ = false;
    publicAwId_ = "";
    publicAwIdIsSet_ = false;
    publicAwLibId_ = "";
    publicAwLibIdIsSet_ = false;
    publicAwLibName_ = "";
    publicAwLibNameIsSet_ = false;
    publicAwMark_ = 0;
    publicAwMarkIsSet_ = false;
    publicAwName_ = "";
    publicAwNameIsSet_ = false;
}

GetPublicLibAndAwsResp::~GetPublicLibAndAwsResp() = default;

void GetPublicLibAndAwsResp::validate()
{
}

web::json::value GetPublicLibAndAwsResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(awTagIsSet_) {
        val[utility::conversions::to_string_t("aw_tag")] = ModelBase::toJson(awTag_);
    }
    if(documentLinkIsSet_) {
        val[utility::conversions::to_string_t("document_link")] = ModelBase::toJson(documentLink_);
    }
    if(isFavoriteIsSet_) {
        val[utility::conversions::to_string_t("is_favorite")] = ModelBase::toJson(isFavorite_);
    }
    if(publicAwDescriptionIsSet_) {
        val[utility::conversions::to_string_t("public_aw_description")] = ModelBase::toJson(publicAwDescription_);
    }
    if(publicAwIdIsSet_) {
        val[utility::conversions::to_string_t("public_aw_id")] = ModelBase::toJson(publicAwId_);
    }
    if(publicAwLibIdIsSet_) {
        val[utility::conversions::to_string_t("public_aw_lib_id")] = ModelBase::toJson(publicAwLibId_);
    }
    if(publicAwLibNameIsSet_) {
        val[utility::conversions::to_string_t("public_aw_lib_name")] = ModelBase::toJson(publicAwLibName_);
    }
    if(publicAwMarkIsSet_) {
        val[utility::conversions::to_string_t("public_aw_mark")] = ModelBase::toJson(publicAwMark_);
    }
    if(publicAwNameIsSet_) {
        val[utility::conversions::to_string_t("public_aw_name")] = ModelBase::toJson(publicAwName_);
    }

    return val;
}
bool GetPublicLibAndAwsResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("aw_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("document_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("document_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocumentLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_favorite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_favorite"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFavorite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_aw_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_aw_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicAwDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_aw_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_aw_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicAwId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_aw_lib_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_aw_lib_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicAwLibId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_aw_lib_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_aw_lib_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicAwLibName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_aw_mark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_aw_mark"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicAwMark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_aw_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_aw_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicAwName(refVal);
        }
    }
    return ok;
}


std::string GetPublicLibAndAwsResp::getAwTag() const
{
    return awTag_;
}

void GetPublicLibAndAwsResp::setAwTag(const std::string& value)
{
    awTag_ = value;
    awTagIsSet_ = true;
}

bool GetPublicLibAndAwsResp::awTagIsSet() const
{
    return awTagIsSet_;
}

void GetPublicLibAndAwsResp::unsetawTag()
{
    awTagIsSet_ = false;
}

std::string GetPublicLibAndAwsResp::getDocumentLink() const
{
    return documentLink_;
}

void GetPublicLibAndAwsResp::setDocumentLink(const std::string& value)
{
    documentLink_ = value;
    documentLinkIsSet_ = true;
}

bool GetPublicLibAndAwsResp::documentLinkIsSet() const
{
    return documentLinkIsSet_;
}

void GetPublicLibAndAwsResp::unsetdocumentLink()
{
    documentLinkIsSet_ = false;
}

int32_t GetPublicLibAndAwsResp::getIsFavorite() const
{
    return isFavorite_;
}

void GetPublicLibAndAwsResp::setIsFavorite(int32_t value)
{
    isFavorite_ = value;
    isFavoriteIsSet_ = true;
}

bool GetPublicLibAndAwsResp::isFavoriteIsSet() const
{
    return isFavoriteIsSet_;
}

void GetPublicLibAndAwsResp::unsetisFavorite()
{
    isFavoriteIsSet_ = false;
}

std::string GetPublicLibAndAwsResp::getPublicAwDescription() const
{
    return publicAwDescription_;
}

void GetPublicLibAndAwsResp::setPublicAwDescription(const std::string& value)
{
    publicAwDescription_ = value;
    publicAwDescriptionIsSet_ = true;
}

bool GetPublicLibAndAwsResp::publicAwDescriptionIsSet() const
{
    return publicAwDescriptionIsSet_;
}

void GetPublicLibAndAwsResp::unsetpublicAwDescription()
{
    publicAwDescriptionIsSet_ = false;
}

std::string GetPublicLibAndAwsResp::getPublicAwId() const
{
    return publicAwId_;
}

void GetPublicLibAndAwsResp::setPublicAwId(const std::string& value)
{
    publicAwId_ = value;
    publicAwIdIsSet_ = true;
}

bool GetPublicLibAndAwsResp::publicAwIdIsSet() const
{
    return publicAwIdIsSet_;
}

void GetPublicLibAndAwsResp::unsetpublicAwId()
{
    publicAwIdIsSet_ = false;
}

std::string GetPublicLibAndAwsResp::getPublicAwLibId() const
{
    return publicAwLibId_;
}

void GetPublicLibAndAwsResp::setPublicAwLibId(const std::string& value)
{
    publicAwLibId_ = value;
    publicAwLibIdIsSet_ = true;
}

bool GetPublicLibAndAwsResp::publicAwLibIdIsSet() const
{
    return publicAwLibIdIsSet_;
}

void GetPublicLibAndAwsResp::unsetpublicAwLibId()
{
    publicAwLibIdIsSet_ = false;
}

std::string GetPublicLibAndAwsResp::getPublicAwLibName() const
{
    return publicAwLibName_;
}

void GetPublicLibAndAwsResp::setPublicAwLibName(const std::string& value)
{
    publicAwLibName_ = value;
    publicAwLibNameIsSet_ = true;
}

bool GetPublicLibAndAwsResp::publicAwLibNameIsSet() const
{
    return publicAwLibNameIsSet_;
}

void GetPublicLibAndAwsResp::unsetpublicAwLibName()
{
    publicAwLibNameIsSet_ = false;
}

int32_t GetPublicLibAndAwsResp::getPublicAwMark() const
{
    return publicAwMark_;
}

void GetPublicLibAndAwsResp::setPublicAwMark(int32_t value)
{
    publicAwMark_ = value;
    publicAwMarkIsSet_ = true;
}

bool GetPublicLibAndAwsResp::publicAwMarkIsSet() const
{
    return publicAwMarkIsSet_;
}

void GetPublicLibAndAwsResp::unsetpublicAwMark()
{
    publicAwMarkIsSet_ = false;
}

std::string GetPublicLibAndAwsResp::getPublicAwName() const
{
    return publicAwName_;
}

void GetPublicLibAndAwsResp::setPublicAwName(const std::string& value)
{
    publicAwName_ = value;
    publicAwNameIsSet_ = true;
}

bool GetPublicLibAndAwsResp::publicAwNameIsSet() const
{
    return publicAwNameIsSet_;
}

void GetPublicLibAndAwsResp::unsetpublicAwName()
{
    publicAwNameIsSet_ = false;
}

}
}
}
}
}


