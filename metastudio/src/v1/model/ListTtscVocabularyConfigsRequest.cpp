

#include "huaweicloud/metastudio/v1/model/ListTtscVocabularyConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListTtscVocabularyConfigsRequest::ListTtscVocabularyConfigsRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    ttsServiceName_ = "";
    ttsServiceNameIsSet_ = false;
    isVocabularyConfigEnable_ = "";
    isVocabularyConfigEnableIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    searchKey_ = "";
    searchKeyIsSet_ = false;
}

ListTtscVocabularyConfigsRequest::~ListTtscVocabularyConfigsRequest() = default;

void ListTtscVocabularyConfigsRequest::validate()
{
}

web::json::value ListTtscVocabularyConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(ttsServiceNameIsSet_) {
        val[utility::conversions::to_string_t("tts_service_name")] = ModelBase::toJson(ttsServiceName_);
    }
    if(isVocabularyConfigEnableIsSet_) {
        val[utility::conversions::to_string_t("is_vocabulary_config_enable")] = ModelBase::toJson(isVocabularyConfigEnable_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(searchKeyIsSet_) {
        val[utility::conversions::to_string_t("search_key")] = ModelBase::toJson(searchKey_);
    }

    return val;
}
bool ListTtscVocabularyConfigsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tts_service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tts_service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtsServiceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_vocabulary_config_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_vocabulary_config_enable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsVocabularyConfigEnable(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchKey(refVal);
        }
    }
    return ok;
}


std::string ListTtscVocabularyConfigsRequest::getXRequestId() const
{
    return xRequestId_;
}

void ListTtscVocabularyConfigsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListTtscVocabularyConfigsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListTtscVocabularyConfigsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ListTtscVocabularyConfigsRequest::getAuthorization() const
{
    return authorization_;
}

void ListTtscVocabularyConfigsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListTtscVocabularyConfigsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListTtscVocabularyConfigsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListTtscVocabularyConfigsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListTtscVocabularyConfigsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListTtscVocabularyConfigsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListTtscVocabularyConfigsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListTtscVocabularyConfigsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListTtscVocabularyConfigsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListTtscVocabularyConfigsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListTtscVocabularyConfigsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListTtscVocabularyConfigsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListTtscVocabularyConfigsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListTtscVocabularyConfigsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListTtscVocabularyConfigsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ListTtscVocabularyConfigsRequest::getType() const
{
    return type_;
}

void ListTtscVocabularyConfigsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListTtscVocabularyConfigsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListTtscVocabularyConfigsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListTtscVocabularyConfigsRequest::getTtsServiceName() const
{
    return ttsServiceName_;
}

void ListTtscVocabularyConfigsRequest::setTtsServiceName(const std::string& value)
{
    ttsServiceName_ = value;
    ttsServiceNameIsSet_ = true;
}

bool ListTtscVocabularyConfigsRequest::ttsServiceNameIsSet() const
{
    return ttsServiceNameIsSet_;
}

void ListTtscVocabularyConfigsRequest::unsetttsServiceName()
{
    ttsServiceNameIsSet_ = false;
}

std::string ListTtscVocabularyConfigsRequest::getIsVocabularyConfigEnable() const
{
    return isVocabularyConfigEnable_;
}

void ListTtscVocabularyConfigsRequest::setIsVocabularyConfigEnable(const std::string& value)
{
    isVocabularyConfigEnable_ = value;
    isVocabularyConfigEnableIsSet_ = true;
}

bool ListTtscVocabularyConfigsRequest::isVocabularyConfigEnableIsSet() const
{
    return isVocabularyConfigEnableIsSet_;
}

void ListTtscVocabularyConfigsRequest::unsetisVocabularyConfigEnable()
{
    isVocabularyConfigEnableIsSet_ = false;
}

int32_t ListTtscVocabularyConfigsRequest::getLimit() const
{
    return limit_;
}

void ListTtscVocabularyConfigsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTtscVocabularyConfigsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTtscVocabularyConfigsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListTtscVocabularyConfigsRequest::getOffset() const
{
    return offset_;
}

void ListTtscVocabularyConfigsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTtscVocabularyConfigsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTtscVocabularyConfigsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListTtscVocabularyConfigsRequest::getStartTime() const
{
    return startTime_;
}

void ListTtscVocabularyConfigsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListTtscVocabularyConfigsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListTtscVocabularyConfigsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListTtscVocabularyConfigsRequest::getEndTime() const
{
    return endTime_;
}

void ListTtscVocabularyConfigsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListTtscVocabularyConfigsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListTtscVocabularyConfigsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListTtscVocabularyConfigsRequest::getSearchKey() const
{
    return searchKey_;
}

void ListTtscVocabularyConfigsRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool ListTtscVocabularyConfigsRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void ListTtscVocabularyConfigsRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

}
}
}
}
}


