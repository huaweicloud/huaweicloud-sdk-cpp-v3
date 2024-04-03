

#include "huaweicloud/cfw/v1/model/ListServiceItemsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListServiceItemsRequest::ListServiceItemsRequest()
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
    queryServiceSetType_ = 0;
    queryServiceSetTypeIsSet_ = false;
}

ListServiceItemsRequest::~ListServiceItemsRequest() = default;

void ListServiceItemsRequest::validate()
{
}

web::json::value ListServiceItemsRequest::toJson() const
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
    if(queryServiceSetTypeIsSet_) {
        val[utility::conversions::to_string_t("query_service_set_type")] = ModelBase::toJson(queryServiceSetType_);
    }

    return val;
}
bool ListServiceItemsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("query_service_set_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_service_set_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryServiceSetType(refVal);
        }
    }
    return ok;
}


std::string ListServiceItemsRequest::getSetId() const
{
    return setId_;
}

void ListServiceItemsRequest::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool ListServiceItemsRequest::setIdIsSet() const
{
    return setIdIsSet_;
}

void ListServiceItemsRequest::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string ListServiceItemsRequest::getKeyWord() const
{
    return keyWord_;
}

void ListServiceItemsRequest::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool ListServiceItemsRequest::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void ListServiceItemsRequest::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

int32_t ListServiceItemsRequest::getLimit() const
{
    return limit_;
}

void ListServiceItemsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListServiceItemsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListServiceItemsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListServiceItemsRequest::getOffset() const
{
    return offset_;
}

void ListServiceItemsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListServiceItemsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListServiceItemsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListServiceItemsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListServiceItemsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListServiceItemsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListServiceItemsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListServiceItemsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListServiceItemsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListServiceItemsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListServiceItemsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ListServiceItemsRequest::getQueryServiceSetType() const
{
    return queryServiceSetType_;
}

void ListServiceItemsRequest::setQueryServiceSetType(int32_t value)
{
    queryServiceSetType_ = value;
    queryServiceSetTypeIsSet_ = true;
}

bool ListServiceItemsRequest::queryServiceSetTypeIsSet() const
{
    return queryServiceSetTypeIsSet_;
}

void ListServiceItemsRequest::unsetqueryServiceSetType()
{
    queryServiceSetTypeIsSet_ = false;
}

}
}
}
}
}


