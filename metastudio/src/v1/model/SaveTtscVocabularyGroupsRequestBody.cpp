

#include "huaweicloud/metastudio/v1/model/SaveTtscVocabularyGroupsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SaveTtscVocabularyGroupsRequestBody::SaveTtscVocabularyGroupsRequestBody()
{
    groupName_ = "";
    groupNameIsSet_ = false;
}

SaveTtscVocabularyGroupsRequestBody::~SaveTtscVocabularyGroupsRequestBody() = default;

void SaveTtscVocabularyGroupsRequestBody::validate()
{
}

web::json::value SaveTtscVocabularyGroupsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }

    return val;
}
bool SaveTtscVocabularyGroupsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    return ok;
}


std::string SaveTtscVocabularyGroupsRequestBody::getGroupName() const
{
    return groupName_;
}

void SaveTtscVocabularyGroupsRequestBody::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool SaveTtscVocabularyGroupsRequestBody::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void SaveTtscVocabularyGroupsRequestBody::unsetgroupName()
{
    groupNameIsSet_ = false;
}

}
}
}
}
}


