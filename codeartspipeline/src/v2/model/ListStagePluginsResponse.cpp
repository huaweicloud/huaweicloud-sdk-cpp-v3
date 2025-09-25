

#include "huaweicloud/codeartspipeline/v2/model/ListStagePluginsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListStagePluginsResponse::ListStagePluginsResponse()
{
    fullStagePluginsItemListIsSet_ = false;
}

ListStagePluginsResponse::~ListStagePluginsResponse() = default;

void ListStagePluginsResponse::validate()
{
}

web::json::value ListStagePluginsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fullStagePluginsItemListIsSet_) {
        val[utility::conversions::to_string_t("full_stage_plugins_item_list")] = ModelBase::toJson(fullStagePluginsItemList_);
    }

    return val;
}
bool ListStagePluginsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("full_stage_plugins_item_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_stage_plugins_item_list"));
        if(!fieldValue.is_null())
        {
            std::vector<FullStagePluginsRelationVO_full_stage_plugins_item_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullStagePluginsItemList(refVal);
        }
    }
    return ok;
}


std::vector<FullStagePluginsRelationVO_full_stage_plugins_item_list>& ListStagePluginsResponse::getFullStagePluginsItemList()
{
    return fullStagePluginsItemList_;
}

void ListStagePluginsResponse::setFullStagePluginsItemList(const std::vector<FullStagePluginsRelationVO_full_stage_plugins_item_list>& value)
{
    fullStagePluginsItemList_ = value;
    fullStagePluginsItemListIsSet_ = true;
}

bool ListStagePluginsResponse::fullStagePluginsItemListIsSet() const
{
    return fullStagePluginsItemListIsSet_;
}

void ListStagePluginsResponse::unsetfullStagePluginsItemList()
{
    fullStagePluginsItemListIsSet_ = false;
}

}
}
}
}
}


