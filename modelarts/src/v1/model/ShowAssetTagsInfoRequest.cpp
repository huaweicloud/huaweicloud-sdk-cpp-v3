

#include "huaweicloud/modelarts/v1/model/ShowAssetTagsInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAssetTagsInfoRequest::ShowAssetTagsInfoRequest()
{
    tagCategory_ = "";
    tagCategoryIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

ShowAssetTagsInfoRequest::~ShowAssetTagsInfoRequest() = default;

void ShowAssetTagsInfoRequest::validate()
{
}

web::json::value ShowAssetTagsInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagCategoryIsSet_) {
        val[utility::conversions::to_string_t("tag_category")] = ModelBase::toJson(tagCategory_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool ShowAssetTagsInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    return ok;
}


std::string ShowAssetTagsInfoRequest::getTagCategory() const
{
    return tagCategory_;
}

void ShowAssetTagsInfoRequest::setTagCategory(const std::string& value)
{
    tagCategory_ = value;
    tagCategoryIsSet_ = true;
}

bool ShowAssetTagsInfoRequest::tagCategoryIsSet() const
{
    return tagCategoryIsSet_;
}

void ShowAssetTagsInfoRequest::unsettagCategory()
{
    tagCategoryIsSet_ = false;
}

std::string ShowAssetTagsInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAssetTagsInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAssetTagsInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAssetTagsInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowAssetTagsInfoRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowAssetTagsInfoRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowAssetTagsInfoRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowAssetTagsInfoRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


