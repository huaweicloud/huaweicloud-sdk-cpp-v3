

#include "huaweicloud/codeartsrepo/v4/model/ShowRepositoryInheritSettingSourceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepositoryInheritSettingSourceResponse::ShowRepositoryInheritSettingSourceResponse()
{
    sourceType_ = "";
    sourceTypeIsSet_ = false;
    sourceId_ = "";
    sourceIdIsSet_ = false;
    upwardInheritEditable_ = false;
    upwardInheritEditableIsSet_ = false;
}

ShowRepositoryInheritSettingSourceResponse::~ShowRepositoryInheritSettingSourceResponse() = default;

void ShowRepositoryInheritSettingSourceResponse::validate()
{
}

web::json::value ShowRepositoryInheritSettingSourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceTypeIsSet_) {
        val[utility::conversions::to_string_t("source_type")] = ModelBase::toJson(sourceType_);
    }
    if(sourceIdIsSet_) {
        val[utility::conversions::to_string_t("source_id")] = ModelBase::toJson(sourceId_);
    }
    if(upwardInheritEditableIsSet_) {
        val[utility::conversions::to_string_t("upward_inherit_editable")] = ModelBase::toJson(upwardInheritEditable_);
    }

    return val;
}
bool ShowRepositoryInheritSettingSourceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upward_inherit_editable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upward_inherit_editable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpwardInheritEditable(refVal);
        }
    }
    return ok;
}


std::string ShowRepositoryInheritSettingSourceResponse::getSourceType() const
{
    return sourceType_;
}

void ShowRepositoryInheritSettingSourceResponse::setSourceType(const std::string& value)
{
    sourceType_ = value;
    sourceTypeIsSet_ = true;
}

bool ShowRepositoryInheritSettingSourceResponse::sourceTypeIsSet() const
{
    return sourceTypeIsSet_;
}

void ShowRepositoryInheritSettingSourceResponse::unsetsourceType()
{
    sourceTypeIsSet_ = false;
}

std::string ShowRepositoryInheritSettingSourceResponse::getSourceId() const
{
    return sourceId_;
}

void ShowRepositoryInheritSettingSourceResponse::setSourceId(const std::string& value)
{
    sourceId_ = value;
    sourceIdIsSet_ = true;
}

bool ShowRepositoryInheritSettingSourceResponse::sourceIdIsSet() const
{
    return sourceIdIsSet_;
}

void ShowRepositoryInheritSettingSourceResponse::unsetsourceId()
{
    sourceIdIsSet_ = false;
}

bool ShowRepositoryInheritSettingSourceResponse::isUpwardInheritEditable() const
{
    return upwardInheritEditable_;
}

void ShowRepositoryInheritSettingSourceResponse::setUpwardInheritEditable(bool value)
{
    upwardInheritEditable_ = value;
    upwardInheritEditableIsSet_ = true;
}

bool ShowRepositoryInheritSettingSourceResponse::upwardInheritEditableIsSet() const
{
    return upwardInheritEditableIsSet_;
}

void ShowRepositoryInheritSettingSourceResponse::unsetupwardInheritEditable()
{
    upwardInheritEditableIsSet_ = false;
}

}
}
}
}
}


