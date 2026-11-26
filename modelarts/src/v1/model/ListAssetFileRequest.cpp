

#include "huaweicloud/modelarts/v1/model/ListAssetFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListAssetFileRequest::ListAssetFileRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    prefix_ = "";
    prefixIsSet_ = false;
    maxKeys_ = 0;
    maxKeysIsSet_ = false;
}

ListAssetFileRequest::~ListAssetFileRequest() = default;

void ListAssetFileRequest::validate()
{
}

web::json::value ListAssetFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(prefixIsSet_) {
        val[utility::conversions::to_string_t("prefix")] = ModelBase::toJson(prefix_);
    }
    if(maxKeysIsSet_) {
        val[utility::conversions::to_string_t("max_keys")] = ModelBase::toJson(maxKeys_);
    }

    return val;
}
bool ListAssetFileRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_keys"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxKeys(refVal);
        }
    }
    return ok;
}


std::string ListAssetFileRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListAssetFileRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListAssetFileRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListAssetFileRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ListAssetFileRequest::getAssetId() const
{
    return assetId_;
}

void ListAssetFileRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ListAssetFileRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ListAssetFileRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ListAssetFileRequest::getPrefix() const
{
    return prefix_;
}

void ListAssetFileRequest::setPrefix(const std::string& value)
{
    prefix_ = value;
    prefixIsSet_ = true;
}

bool ListAssetFileRequest::prefixIsSet() const
{
    return prefixIsSet_;
}

void ListAssetFileRequest::unsetprefix()
{
    prefixIsSet_ = false;
}

int32_t ListAssetFileRequest::getMaxKeys() const
{
    return maxKeys_;
}

void ListAssetFileRequest::setMaxKeys(int32_t value)
{
    maxKeys_ = value;
    maxKeysIsSet_ = true;
}

bool ListAssetFileRequest::maxKeysIsSet() const
{
    return maxKeysIsSet_;
}

void ListAssetFileRequest::unsetmaxKeys()
{
    maxKeysIsSet_ = false;
}

}
}
}
}
}


