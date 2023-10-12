

#include "huaweicloud/vod/v1/model/ListTranscodeTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListTranscodeTemplateResponse::ListTranscodeTemplateResponse()
{
    templateGroupListIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListTranscodeTemplateResponse::~ListTranscodeTemplateResponse() = default;

void ListTranscodeTemplateResponse::validate()
{
}

web::json::value ListTranscodeTemplateResponse::toJson() const
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
bool ListTranscodeTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_group_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_group_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TransTemplateRsp> refVal;
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


std::vector<TransTemplateRsp>& ListTranscodeTemplateResponse::getTemplateGroupList()
{
    return templateGroupList_;
}

void ListTranscodeTemplateResponse::setTemplateGroupList(const std::vector<TransTemplateRsp>& value)
{
    templateGroupList_ = value;
    templateGroupListIsSet_ = true;
}

bool ListTranscodeTemplateResponse::templateGroupListIsSet() const
{
    return templateGroupListIsSet_;
}

void ListTranscodeTemplateResponse::unsettemplateGroupList()
{
    templateGroupListIsSet_ = false;
}

int32_t ListTranscodeTemplateResponse::getTotal() const
{
    return total_;
}

void ListTranscodeTemplateResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTranscodeTemplateResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTranscodeTemplateResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


