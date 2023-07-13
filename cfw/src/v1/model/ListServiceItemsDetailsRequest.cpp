

#include "huaweicloud/cfw/v1/model/ListServiceItemsDetailsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListServiceItemsDetailsRequest::ListServiceItemsDetailsRequest()
{
    setId_ = "";
    setIdIsSet_ = false;
    keyWord_ = "";
    keyWordIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ListServiceItemsDetailsRequest::~ListServiceItemsDetailsRequest() = default;

void ListServiceItemsDetailsRequest::validate()
{
}

web::json::value ListServiceItemsDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
    if(keyWordIsSet_) {
        val[utility::conversions::to_string_t("key_word")] = ModelBase::toJson(keyWord_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}

bool ListServiceItemsDetailsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_word"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_word"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyWord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    return ok;
}

std::string ListServiceItemsDetailsRequest::getSetId() const
{
    return setId_;
}

void ListServiceItemsDetailsRequest::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool ListServiceItemsDetailsRequest::setIdIsSet() const
{
    return setIdIsSet_;
}

void ListServiceItemsDetailsRequest::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string ListServiceItemsDetailsRequest::getKeyWord() const
{
    return keyWord_;
}

void ListServiceItemsDetailsRequest::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool ListServiceItemsDetailsRequest::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void ListServiceItemsDetailsRequest::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

int32_t ListServiceItemsDetailsRequest::getLimit() const
{
    return limit_;
}

void ListServiceItemsDetailsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListServiceItemsDetailsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListServiceItemsDetailsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListServiceItemsDetailsRequest::getOffset() const
{
    return offset_;
}

void ListServiceItemsDetailsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListServiceItemsDetailsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListServiceItemsDetailsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListServiceItemsDetailsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListServiceItemsDetailsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListServiceItemsDetailsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListServiceItemsDetailsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListServiceItemsDetailsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListServiceItemsDetailsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListServiceItemsDetailsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListServiceItemsDetailsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


