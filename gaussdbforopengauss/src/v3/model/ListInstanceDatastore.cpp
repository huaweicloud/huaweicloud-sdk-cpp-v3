

#include "huaweicloud/gaussdbforopengauss/v3/model/ListInstanceDatastore.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListInstanceDatastore::ListInstanceDatastore()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    completeVersion_ = "";
    completeVersionIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    completeKernelVersion_ = "";
    completeKernelVersionIsSet_ = false;
    hotfixVersionInfosIsSet_ = false;
}

ListInstanceDatastore::~ListInstanceDatastore() = default;

void ListInstanceDatastore::validate()
{
}

web::json::value ListInstanceDatastore::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(completeVersionIsSet_) {
        val[utility::conversions::to_string_t("complete_version")] = ModelBase::toJson(completeVersion_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("target_version")] = ModelBase::toJson(targetVersion_);
    }
    if(completeKernelVersionIsSet_) {
        val[utility::conversions::to_string_t("complete_kernel_version")] = ModelBase::toJson(completeKernelVersion_);
    }
    if(hotfixVersionInfosIsSet_) {
        val[utility::conversions::to_string_t("hotfix_version_infos")] = ModelBase::toJson(hotfixVersionInfos_);
    }

    return val;
}
bool ListInstanceDatastore::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("complete_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("complete_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompleteVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("complete_kernel_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("complete_kernel_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompleteKernelVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hotfix_version_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hotfix_version_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<HotfixVersionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotfixVersionInfos(refVal);
        }
    }
    return ok;
}


std::string ListInstanceDatastore::getType() const
{
    return type_;
}

void ListInstanceDatastore::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListInstanceDatastore::typeIsSet() const
{
    return typeIsSet_;
}

void ListInstanceDatastore::unsettype()
{
    typeIsSet_ = false;
}

std::string ListInstanceDatastore::getVersion() const
{
    return version_;
}

void ListInstanceDatastore::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListInstanceDatastore::versionIsSet() const
{
    return versionIsSet_;
}

void ListInstanceDatastore::unsetversion()
{
    versionIsSet_ = false;
}

std::string ListInstanceDatastore::getCompleteVersion() const
{
    return completeVersion_;
}

void ListInstanceDatastore::setCompleteVersion(const std::string& value)
{
    completeVersion_ = value;
    completeVersionIsSet_ = true;
}

bool ListInstanceDatastore::completeVersionIsSet() const
{
    return completeVersionIsSet_;
}

void ListInstanceDatastore::unsetcompleteVersion()
{
    completeVersionIsSet_ = false;
}

std::string ListInstanceDatastore::getTargetVersion() const
{
    return targetVersion_;
}

void ListInstanceDatastore::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool ListInstanceDatastore::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void ListInstanceDatastore::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

std::string ListInstanceDatastore::getCompleteKernelVersion() const
{
    return completeKernelVersion_;
}

void ListInstanceDatastore::setCompleteKernelVersion(const std::string& value)
{
    completeKernelVersion_ = value;
    completeKernelVersionIsSet_ = true;
}

bool ListInstanceDatastore::completeKernelVersionIsSet() const
{
    return completeKernelVersionIsSet_;
}

void ListInstanceDatastore::unsetcompleteKernelVersion()
{
    completeKernelVersionIsSet_ = false;
}

std::vector<HotfixVersionInfo>& ListInstanceDatastore::getHotfixVersionInfos()
{
    return hotfixVersionInfos_;
}

void ListInstanceDatastore::setHotfixVersionInfos(const std::vector<HotfixVersionInfo>& value)
{
    hotfixVersionInfos_ = value;
    hotfixVersionInfosIsSet_ = true;
}

bool ListInstanceDatastore::hotfixVersionInfosIsSet() const
{
    return hotfixVersionInfosIsSet_;
}

void ListInstanceDatastore::unsethotfixVersionInfos()
{
    hotfixVersionInfosIsSet_ = false;
}

}
}
}
}
}


