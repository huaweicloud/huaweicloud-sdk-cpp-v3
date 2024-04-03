

#include "huaweicloud/cfw/v1/model/ListServiceSetsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListServiceSetsRequest::ListServiceSetsRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
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

ListServiceSetsRequest::~ListServiceSetsRequest() = default;

void ListServiceSetsRequest::validate()
{
}

web::json::value ListServiceSetsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
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
bool ListServiceSetsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
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


std::string ListServiceSetsRequest::getObjectId() const
{
    return objectId_;
}

void ListServiceSetsRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListServiceSetsRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListServiceSetsRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ListServiceSetsRequest::getKeyWord() const
{
    return keyWord_;
}

void ListServiceSetsRequest::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool ListServiceSetsRequest::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void ListServiceSetsRequest::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

int32_t ListServiceSetsRequest::getLimit() const
{
    return limit_;
}

void ListServiceSetsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListServiceSetsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListServiceSetsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListServiceSetsRequest::getOffset() const
{
    return offset_;
}

void ListServiceSetsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListServiceSetsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListServiceSetsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListServiceSetsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListServiceSetsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListServiceSetsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListServiceSetsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListServiceSetsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListServiceSetsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListServiceSetsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListServiceSetsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ListServiceSetsRequest::getQueryServiceSetType() const
{
    return queryServiceSetType_;
}

void ListServiceSetsRequest::setQueryServiceSetType(int32_t value)
{
    queryServiceSetType_ = value;
    queryServiceSetTypeIsSet_ = true;
}

bool ListServiceSetsRequest::queryServiceSetTypeIsSet() const
{
    return queryServiceSetTypeIsSet_;
}

void ListServiceSetsRequest::unsetqueryServiceSetType()
{
    queryServiceSetTypeIsSet_ = false;
}

}
}
}
}
}


