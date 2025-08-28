

#include "huaweicloud/metastudio/v1/model/RoleKnowledgeLibraryReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




RoleKnowledgeLibraryReq::RoleKnowledgeLibraryReq()
{
    knowledgeTypeIsSet_ = false;
    knowledgeLibraryIdListIsSet_ = false;
}

RoleKnowledgeLibraryReq::~RoleKnowledgeLibraryReq() = default;

void RoleKnowledgeLibraryReq::validate()
{
}

web::json::value RoleKnowledgeLibraryReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(knowledgeTypeIsSet_) {
        val[utility::conversions::to_string_t("knowledge_type")] = ModelBase::toJson(knowledgeType_);
    }
    if(knowledgeLibraryIdListIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_id_list")] = ModelBase::toJson(knowledgeLibraryIdList_);
    }

    return val;
}
bool RoleKnowledgeLibraryReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("knowledge_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_type"));
        if(!fieldValue.is_null())
        {
            KnowledgeTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryIdList(refVal);
        }
    }
    return ok;
}


KnowledgeTypeEnum RoleKnowledgeLibraryReq::getKnowledgeType() const
{
    return knowledgeType_;
}

void RoleKnowledgeLibraryReq::setKnowledgeType(const KnowledgeTypeEnum& value)
{
    knowledgeType_ = value;
    knowledgeTypeIsSet_ = true;
}

bool RoleKnowledgeLibraryReq::knowledgeTypeIsSet() const
{
    return knowledgeTypeIsSet_;
}

void RoleKnowledgeLibraryReq::unsetknowledgeType()
{
    knowledgeTypeIsSet_ = false;
}

std::vector<std::string>& RoleKnowledgeLibraryReq::getKnowledgeLibraryIdList()
{
    return knowledgeLibraryIdList_;
}

void RoleKnowledgeLibraryReq::setKnowledgeLibraryIdList(const std::vector<std::string>& value)
{
    knowledgeLibraryIdList_ = value;
    knowledgeLibraryIdListIsSet_ = true;
}

bool RoleKnowledgeLibraryReq::knowledgeLibraryIdListIsSet() const
{
    return knowledgeLibraryIdListIsSet_;
}

void RoleKnowledgeLibraryReq::unsetknowledgeLibraryIdList()
{
    knowledgeLibraryIdListIsSet_ = false;
}

}
}
}
}
}


