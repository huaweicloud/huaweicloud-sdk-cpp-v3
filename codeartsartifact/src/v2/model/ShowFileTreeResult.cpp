

#include "huaweicloud/codeartsartifact/v2/model/ShowFileTreeResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowFileTreeResult::ShowFileTreeResult()
{
    uploadAccess_ = "";
    uploadAccessIsSet_ = false;
    total_ = "";
    totalIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    childrenIsSet_ = false;
}

ShowFileTreeResult::~ShowFileTreeResult() = default;

void ShowFileTreeResult::validate()
{
}

web::json::value ShowFileTreeResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uploadAccessIsSet_) {
        val[utility::conversions::to_string_t("uploadAccess")] = ModelBase::toJson(uploadAccess_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(children_);
    }

    return val;
}
bool ShowFileTreeResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uploadAccess"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uploadAccess"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUploadAccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowFileTreeResult_children> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    return ok;
}


std::string ShowFileTreeResult::getUploadAccess() const
{
    return uploadAccess_;
}

void ShowFileTreeResult::setUploadAccess(const std::string& value)
{
    uploadAccess_ = value;
    uploadAccessIsSet_ = true;
}

bool ShowFileTreeResult::uploadAccessIsSet() const
{
    return uploadAccessIsSet_;
}

void ShowFileTreeResult::unsetuploadAccess()
{
    uploadAccessIsSet_ = false;
}

std::string ShowFileTreeResult::getTotal() const
{
    return total_;
}

void ShowFileTreeResult::setTotal(const std::string& value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowFileTreeResult::totalIsSet() const
{
    return totalIsSet_;
}

void ShowFileTreeResult::unsettotal()
{
    totalIsSet_ = false;
}

std::string ShowFileTreeResult::getUri() const
{
    return uri_;
}

void ShowFileTreeResult::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool ShowFileTreeResult::uriIsSet() const
{
    return uriIsSet_;
}

void ShowFileTreeResult::unseturi()
{
    uriIsSet_ = false;
}

std::string ShowFileTreeResult::getCreated() const
{
    return created_;
}

void ShowFileTreeResult::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ShowFileTreeResult::createdIsSet() const
{
    return createdIsSet_;
}

void ShowFileTreeResult::unsetcreated()
{
    createdIsSet_ = false;
}

std::vector<ShowFileTreeResult_children>& ShowFileTreeResult::getChildren()
{
    return children_;
}

void ShowFileTreeResult::setChildren(const std::vector<ShowFileTreeResult_children>& value)
{
    children_ = value;
    childrenIsSet_ = true;
}

bool ShowFileTreeResult::childrenIsSet() const
{
    return childrenIsSet_;
}

void ShowFileTreeResult::unsetchildren()
{
    childrenIsSet_ = false;
}

}
}
}
}
}


