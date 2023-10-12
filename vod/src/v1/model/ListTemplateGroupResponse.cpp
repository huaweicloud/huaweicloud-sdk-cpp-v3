

#include "huaweicloud/vod/v1/model/ListTemplateGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListTemplateGroupResponse::ListTemplateGroupResponse()
{
    templateGroupListIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
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
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
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
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
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

std::string ListTemplateGroupResponse::getErrorCode() const
{
    return errorCode_;
}

void ListTemplateGroupResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ListTemplateGroupResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ListTemplateGroupResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ListTemplateGroupResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ListTemplateGroupResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ListTemplateGroupResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ListTemplateGroupResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


