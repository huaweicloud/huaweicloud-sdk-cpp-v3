

#include "huaweicloud/vod/v1/model/ListTemplateGroupCollectionResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListTemplateGroupCollectionResponse::ListTemplateGroupCollectionResponse()
{
    templateGroupCollectionListIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListTemplateGroupCollectionResponse::~ListTemplateGroupCollectionResponse() = default;

void ListTemplateGroupCollectionResponse::validate()
{
}

web::json::value ListTemplateGroupCollectionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateGroupCollectionListIsSet_) {
        val[utility::conversions::to_string_t("template_group_collection_list")] = ModelBase::toJson(templateGroupCollectionList_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}

bool ListTemplateGroupCollectionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_group_collection_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_group_collection_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateGroupCollection> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateGroupCollectionList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<TemplateGroupCollection>& ListTemplateGroupCollectionResponse::getTemplateGroupCollectionList()
{
    return templateGroupCollectionList_;
}

void ListTemplateGroupCollectionResponse::setTemplateGroupCollectionList(const std::vector<TemplateGroupCollection>& value)
{
    templateGroupCollectionList_ = value;
    templateGroupCollectionListIsSet_ = true;
}

bool ListTemplateGroupCollectionResponse::templateGroupCollectionListIsSet() const
{
    return templateGroupCollectionListIsSet_;
}

void ListTemplateGroupCollectionResponse::unsettemplateGroupCollectionList()
{
    templateGroupCollectionListIsSet_ = false;
}

int32_t ListTemplateGroupCollectionResponse::getTotal() const
{
    return total_;
}

void ListTemplateGroupCollectionResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTemplateGroupCollectionResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTemplateGroupCollectionResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


