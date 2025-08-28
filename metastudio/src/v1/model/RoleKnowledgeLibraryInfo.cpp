

#include "huaweicloud/metastudio/v1/model/RoleKnowledgeLibraryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




RoleKnowledgeLibraryInfo::RoleKnowledgeLibraryInfo()
{
    knowledgeTypeIsSet_ = false;
    knowledgeLibraryInfoListIsSet_ = false;
}

RoleKnowledgeLibraryInfo::~RoleKnowledgeLibraryInfo() = default;

void RoleKnowledgeLibraryInfo::validate()
{
}

web::json::value RoleKnowledgeLibraryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(knowledgeTypeIsSet_) {
        val[utility::conversions::to_string_t("knowledge_type")] = ModelBase::toJson(knowledgeType_);
    }
    if(knowledgeLibraryInfoListIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_info_list")] = ModelBase::toJson(knowledgeLibraryInfoList_);
    }

    return val;
}
bool RoleKnowledgeLibraryInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_info_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_info_list"));
        if(!fieldValue.is_null())
        {
            std::vector<KnowledgeLibraryBaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryInfoList(refVal);
        }
    }
    return ok;
}


KnowledgeTypeEnum RoleKnowledgeLibraryInfo::getKnowledgeType() const
{
    return knowledgeType_;
}

void RoleKnowledgeLibraryInfo::setKnowledgeType(const KnowledgeTypeEnum& value)
{
    knowledgeType_ = value;
    knowledgeTypeIsSet_ = true;
}

bool RoleKnowledgeLibraryInfo::knowledgeTypeIsSet() const
{
    return knowledgeTypeIsSet_;
}

void RoleKnowledgeLibraryInfo::unsetknowledgeType()
{
    knowledgeTypeIsSet_ = false;
}

std::vector<KnowledgeLibraryBaseInfo>& RoleKnowledgeLibraryInfo::getKnowledgeLibraryInfoList()
{
    return knowledgeLibraryInfoList_;
}

void RoleKnowledgeLibraryInfo::setKnowledgeLibraryInfoList(const std::vector<KnowledgeLibraryBaseInfo>& value)
{
    knowledgeLibraryInfoList_ = value;
    knowledgeLibraryInfoListIsSet_ = true;
}

bool RoleKnowledgeLibraryInfo::knowledgeLibraryInfoListIsSet() const
{
    return knowledgeLibraryInfoListIsSet_;
}

void RoleKnowledgeLibraryInfo::unsetknowledgeLibraryInfoList()
{
    knowledgeLibraryInfoListIsSet_ = false;
}

}
}
}
}
}


