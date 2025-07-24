

#include "huaweicloud/cloudtest/v1/model/TestPlanJournalDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestPlanJournalDetail::TestPlanJournalDetail()
{
    updatedIsSet_ = false;
    addedIsSet_ = false;
    deletedIsSet_ = false;
    journalizedType_ = "";
    journalizedTypeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

TestPlanJournalDetail::~TestPlanJournalDetail() = default;

void TestPlanJournalDetail::validate()
{
}

web::json::value TestPlanJournalDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(addedIsSet_) {
        val[utility::conversions::to_string_t("added")] = ModelBase::toJson(added_);
    }
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }
    if(journalizedTypeIsSet_) {
        val[utility::conversions::to_string_t("journalized_type")] = ModelBase::toJson(journalizedType_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool TestPlanJournalDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::vector<AttributeChange> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("added"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("added"));
        if(!fieldValue.is_null())
        {
            std::vector<NameAndId> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdded(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            std::vector<NameAndId> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("journalized_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("journalized_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJournalizedType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::vector<AttributeChange>& TestPlanJournalDetail::getUpdated()
{
    return updated_;
}

void TestPlanJournalDetail::setUpdated(const std::vector<AttributeChange>& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool TestPlanJournalDetail::updatedIsSet() const
{
    return updatedIsSet_;
}

void TestPlanJournalDetail::unsetupdated()
{
    updatedIsSet_ = false;
}

std::vector<NameAndId>& TestPlanJournalDetail::getAdded()
{
    return added_;
}

void TestPlanJournalDetail::setAdded(const std::vector<NameAndId>& value)
{
    added_ = value;
    addedIsSet_ = true;
}

bool TestPlanJournalDetail::addedIsSet() const
{
    return addedIsSet_;
}

void TestPlanJournalDetail::unsetadded()
{
    addedIsSet_ = false;
}

std::vector<NameAndId>& TestPlanJournalDetail::getDeleted()
{
    return deleted_;
}

void TestPlanJournalDetail::setDeleted(const std::vector<NameAndId>& value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool TestPlanJournalDetail::deletedIsSet() const
{
    return deletedIsSet_;
}

void TestPlanJournalDetail::unsetdeleted()
{
    deletedIsSet_ = false;
}

std::string TestPlanJournalDetail::getJournalizedType() const
{
    return journalizedType_;
}

void TestPlanJournalDetail::setJournalizedType(const std::string& value)
{
    journalizedType_ = value;
    journalizedTypeIsSet_ = true;
}

bool TestPlanJournalDetail::journalizedTypeIsSet() const
{
    return journalizedTypeIsSet_;
}

void TestPlanJournalDetail::unsetjournalizedType()
{
    journalizedTypeIsSet_ = false;
}

std::string TestPlanJournalDetail::getType() const
{
    return type_;
}

void TestPlanJournalDetail::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TestPlanJournalDetail::typeIsSet() const
{
    return typeIsSet_;
}

void TestPlanJournalDetail::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


