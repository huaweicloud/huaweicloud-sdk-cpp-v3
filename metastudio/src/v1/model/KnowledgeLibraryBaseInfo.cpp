

#include "huaweicloud/metastudio/v1/model/KnowledgeLibraryBaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




KnowledgeLibraryBaseInfo::KnowledgeLibraryBaseInfo()
{
    knowledgeLibraryId_ = "";
    knowledgeLibraryIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

KnowledgeLibraryBaseInfo::~KnowledgeLibraryBaseInfo() = default;

void KnowledgeLibraryBaseInfo::validate()
{
}

web::json::value KnowledgeLibraryBaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(knowledgeLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_id")] = ModelBase::toJson(knowledgeLibraryId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool KnowledgeLibraryBaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string KnowledgeLibraryBaseInfo::getKnowledgeLibraryId() const
{
    return knowledgeLibraryId_;
}

void KnowledgeLibraryBaseInfo::setKnowledgeLibraryId(const std::string& value)
{
    knowledgeLibraryId_ = value;
    knowledgeLibraryIdIsSet_ = true;
}

bool KnowledgeLibraryBaseInfo::knowledgeLibraryIdIsSet() const
{
    return knowledgeLibraryIdIsSet_;
}

void KnowledgeLibraryBaseInfo::unsetknowledgeLibraryId()
{
    knowledgeLibraryIdIsSet_ = false;
}

std::string KnowledgeLibraryBaseInfo::getName() const
{
    return name_;
}

void KnowledgeLibraryBaseInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool KnowledgeLibraryBaseInfo::nameIsSet() const
{
    return nameIsSet_;
}

void KnowledgeLibraryBaseInfo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


