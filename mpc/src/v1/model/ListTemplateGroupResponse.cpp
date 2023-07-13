

#include "huaweicloud/mpc/v1/model/ListTemplateGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListTemplateGroupResponse::ListTemplateGroupResponse()
{
    templateGroupListIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListTemplateGroupResponse::~ListTemplateGroupResponse() = default;

void ListTemplateGroupResponse::validate()
{
}

web::json::value ListTemplateGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateGroupListIsSet_) {
        val[utility::conversions::to_string_t("template_group_list")] = ModelBase::toJson(templateGroupList_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}

bool ListTemplateGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_group_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_group_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateGroupList(refVal);
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

std::vector<TemplateGroup>& ListTemplateGroupResponse::getTemplateGroupList()
{
    return templateGroupList_;
}

void ListTemplateGroupResponse::setTemplateGroupList(const std::vector<TemplateGroup>& value)
{
    templateGroupList_ = value;
    templateGroupListIsSet_ = true;
}

bool ListTemplateGroupResponse::templateGroupListIsSet() const
{
    return templateGroupListIsSet_;
}

void ListTemplateGroupResponse::unsettemplateGroupList()
{
    templateGroupListIsSet_ = false;
}

int32_t ListTemplateGroupResponse::getTotal() const
{
    return total_;
}

void ListTemplateGroupResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTemplateGroupResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTemplateGroupResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


