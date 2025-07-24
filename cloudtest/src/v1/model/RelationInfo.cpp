

#include "huaweicloud/cloudtest/v1/model/RelationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




RelationInfo::RelationInfo()
{
    drNumber_ = "";
    drNumberIsSet_ = false;
    testCaseUri_ = "";
    testCaseUriIsSet_ = false;
    relateType_ = "";
    relateTypeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    sourceSystem_ = "";
    sourceSystemIsSet_ = false;
    associationNumber_ = "";
    associationNumberIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
}

RelationInfo::~RelationInfo() = default;

void RelationInfo::validate()
{
}

web::json::value RelationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(drNumberIsSet_) {
        val[utility::conversions::to_string_t("dr_number")] = ModelBase::toJson(drNumber_);
    }
    if(testCaseUriIsSet_) {
        val[utility::conversions::to_string_t("test_case_uri")] = ModelBase::toJson(testCaseUri_);
    }
    if(relateTypeIsSet_) {
        val[utility::conversions::to_string_t("relate_type")] = ModelBase::toJson(relateType_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(sourceSystemIsSet_) {
        val[utility::conversions::to_string_t("source_system")] = ModelBase::toJson(sourceSystem_);
    }
    if(associationNumberIsSet_) {
        val[utility::conversions::to_string_t("association_number")] = ModelBase::toJson(associationNumber_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }

    return val;
}
bool RelationInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dr_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dr_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_case_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_system"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceSystem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("association_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("association_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociationNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    return ok;
}


std::string RelationInfo::getDrNumber() const
{
    return drNumber_;
}

void RelationInfo::setDrNumber(const std::string& value)
{
    drNumber_ = value;
    drNumberIsSet_ = true;
}

bool RelationInfo::drNumberIsSet() const
{
    return drNumberIsSet_;
}

void RelationInfo::unsetdrNumber()
{
    drNumberIsSet_ = false;
}

std::string RelationInfo::getTestCaseUri() const
{
    return testCaseUri_;
}

void RelationInfo::setTestCaseUri(const std::string& value)
{
    testCaseUri_ = value;
    testCaseUriIsSet_ = true;
}

bool RelationInfo::testCaseUriIsSet() const
{
    return testCaseUriIsSet_;
}

void RelationInfo::unsettestCaseUri()
{
    testCaseUriIsSet_ = false;
}

std::string RelationInfo::getRelateType() const
{
    return relateType_;
}

void RelationInfo::setRelateType(const std::string& value)
{
    relateType_ = value;
    relateTypeIsSet_ = true;
}

bool RelationInfo::relateTypeIsSet() const
{
    return relateTypeIsSet_;
}

void RelationInfo::unsetrelateType()
{
    relateTypeIsSet_ = false;
}

std::string RelationInfo::getResourceType() const
{
    return resourceType_;
}

void RelationInfo::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool RelationInfo::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void RelationInfo::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string RelationInfo::getSourceSystem() const
{
    return sourceSystem_;
}

void RelationInfo::setSourceSystem(const std::string& value)
{
    sourceSystem_ = value;
    sourceSystemIsSet_ = true;
}

bool RelationInfo::sourceSystemIsSet() const
{
    return sourceSystemIsSet_;
}

void RelationInfo::unsetsourceSystem()
{
    sourceSystemIsSet_ = false;
}

std::string RelationInfo::getAssociationNumber() const
{
    return associationNumber_;
}

void RelationInfo::setAssociationNumber(const std::string& value)
{
    associationNumber_ = value;
    associationNumberIsSet_ = true;
}

bool RelationInfo::associationNumberIsSet() const
{
    return associationNumberIsSet_;
}

void RelationInfo::unsetassociationNumber()
{
    associationNumberIsSet_ = false;
}

std::string RelationInfo::getRegion() const
{
    return region_;
}

void RelationInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool RelationInfo::regionIsSet() const
{
    return regionIsSet_;
}

void RelationInfo::unsetregion()
{
    regionIsSet_ = false;
}

}
}
}
}
}


