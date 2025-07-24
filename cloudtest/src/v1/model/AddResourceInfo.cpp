

#include "huaweicloud/cloudtest/v1/model/AddResourceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddResourceInfo::AddResourceInfo()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    iteratorUri_ = "";
    iteratorUriIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    isAllIssues_ = "";
    isAllIssuesIsSet_ = false;
    allImport_ = false;
    allImportIsSet_ = false;
    featureUri_ = "";
    featureUriIsSet_ = false;
    simpleResourceinfoListIsSet_ = false;
    invertSimpleResourceinfoListIsSet_ = false;
    addToIterator_ = false;
    addToIteratorIsSet_ = false;
}

AddResourceInfo::~AddResourceInfo() = default;

void AddResourceInfo::validate()
{
}

web::json::value AddResourceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(iteratorUriIsSet_) {
        val[utility::conversions::to_string_t("iterator_uri")] = ModelBase::toJson(iteratorUri_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(isAllIssuesIsSet_) {
        val[utility::conversions::to_string_t("is_all_issues")] = ModelBase::toJson(isAllIssues_);
    }
    if(allImportIsSet_) {
        val[utility::conversions::to_string_t("all_import")] = ModelBase::toJson(allImport_);
    }
    if(featureUriIsSet_) {
        val[utility::conversions::to_string_t("feature_uri")] = ModelBase::toJson(featureUri_);
    }
    if(simpleResourceinfoListIsSet_) {
        val[utility::conversions::to_string_t("simple_resourceinfo_list")] = ModelBase::toJson(simpleResourceinfoList_);
    }
    if(invertSimpleResourceinfoListIsSet_) {
        val[utility::conversions::to_string_t("invert_simple_resourceinfo_list")] = ModelBase::toJson(invertSimpleResourceinfoList_);
    }
    if(addToIteratorIsSet_) {
        val[utility::conversions::to_string_t("add_to_iterator")] = ModelBase::toJson(addToIterator_);
    }

    return val;
}
bool AddResourceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iterator_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_all_issues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_all_issues"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAllIssues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("all_import"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_import"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllImport(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feature_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeatureUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("simple_resourceinfo_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("simple_resourceinfo_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SimpleResourceInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSimpleResourceinfoList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("invert_simple_resourceinfo_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invert_simple_resourceinfo_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SimpleResourceInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInvertSimpleResourceinfoList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("add_to_iterator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_to_iterator"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddToIterator(refVal);
        }
    }
    return ok;
}


std::string AddResourceInfo::getProjectUuid() const
{
    return projectUuid_;
}

void AddResourceInfo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool AddResourceInfo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void AddResourceInfo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string AddResourceInfo::getIteratorUri() const
{
    return iteratorUri_;
}

void AddResourceInfo::setIteratorUri(const std::string& value)
{
    iteratorUri_ = value;
    iteratorUriIsSet_ = true;
}

bool AddResourceInfo::iteratorUriIsSet() const
{
    return iteratorUriIsSet_;
}

void AddResourceInfo::unsetiteratorUri()
{
    iteratorUriIsSet_ = false;
}

int32_t AddResourceInfo::getType() const
{
    return type_;
}

void AddResourceInfo::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AddResourceInfo::typeIsSet() const
{
    return typeIsSet_;
}

void AddResourceInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string AddResourceInfo::getIsAllIssues() const
{
    return isAllIssues_;
}

void AddResourceInfo::setIsAllIssues(const std::string& value)
{
    isAllIssues_ = value;
    isAllIssuesIsSet_ = true;
}

bool AddResourceInfo::isAllIssuesIsSet() const
{
    return isAllIssuesIsSet_;
}

void AddResourceInfo::unsetisAllIssues()
{
    isAllIssuesIsSet_ = false;
}

bool AddResourceInfo::isAllImport() const
{
    return allImport_;
}

void AddResourceInfo::setAllImport(bool value)
{
    allImport_ = value;
    allImportIsSet_ = true;
}

bool AddResourceInfo::allImportIsSet() const
{
    return allImportIsSet_;
}

void AddResourceInfo::unsetallImport()
{
    allImportIsSet_ = false;
}

std::string AddResourceInfo::getFeatureUri() const
{
    return featureUri_;
}

void AddResourceInfo::setFeatureUri(const std::string& value)
{
    featureUri_ = value;
    featureUriIsSet_ = true;
}

bool AddResourceInfo::featureUriIsSet() const
{
    return featureUriIsSet_;
}

void AddResourceInfo::unsetfeatureUri()
{
    featureUriIsSet_ = false;
}

std::vector<SimpleResourceInfo>& AddResourceInfo::getSimpleResourceinfoList()
{
    return simpleResourceinfoList_;
}

void AddResourceInfo::setSimpleResourceinfoList(const std::vector<SimpleResourceInfo>& value)
{
    simpleResourceinfoList_ = value;
    simpleResourceinfoListIsSet_ = true;
}

bool AddResourceInfo::simpleResourceinfoListIsSet() const
{
    return simpleResourceinfoListIsSet_;
}

void AddResourceInfo::unsetsimpleResourceinfoList()
{
    simpleResourceinfoListIsSet_ = false;
}

std::vector<SimpleResourceInfo>& AddResourceInfo::getInvertSimpleResourceinfoList()
{
    return invertSimpleResourceinfoList_;
}

void AddResourceInfo::setInvertSimpleResourceinfoList(const std::vector<SimpleResourceInfo>& value)
{
    invertSimpleResourceinfoList_ = value;
    invertSimpleResourceinfoListIsSet_ = true;
}

bool AddResourceInfo::invertSimpleResourceinfoListIsSet() const
{
    return invertSimpleResourceinfoListIsSet_;
}

void AddResourceInfo::unsetinvertSimpleResourceinfoList()
{
    invertSimpleResourceinfoListIsSet_ = false;
}

bool AddResourceInfo::isAddToIterator() const
{
    return addToIterator_;
}

void AddResourceInfo::setAddToIterator(bool value)
{
    addToIterator_ = value;
    addToIteratorIsSet_ = true;
}

bool AddResourceInfo::addToIteratorIsSet() const
{
    return addToIteratorIsSet_;
}

void AddResourceInfo::unsetaddToIterator()
{
    addToIteratorIsSet_ = false;
}

}
}
}
}
}


