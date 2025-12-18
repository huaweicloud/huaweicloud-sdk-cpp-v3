

#include "huaweicloud/meeting/v1/model/SearchResourceOpRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchResourceOpRecordRequest::SearchResourceOpRecordRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    searchKey_ = "";
    searchKeyIsSet_ = false;
    corpId_ = "";
    corpIdIsSet_ = false;
    startExpireDate_ = 0L;
    startExpireDateIsSet_ = false;
    endExpireDate_ = 0L;
    endExpireDateIsSet_ = false;
    startOperateDate_ = 0L;
    startOperateDateIsSet_ = false;
    endOperateDate_ = 0L;
    endOperateDateIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    typeId_ = "";
    typeIdIsSet_ = false;
    operateType_ = 0;
    operateTypeIsSet_ = false;
}

SearchResourceOpRecordRequest::~SearchResourceOpRecordRequest() = default;

void SearchResourceOpRecordRequest::validate()
{
}

web::json::value SearchResourceOpRecordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(searchKeyIsSet_) {
        val[utility::conversions::to_string_t("searchKey")] = ModelBase::toJson(searchKey_);
    }
    if(corpIdIsSet_) {
        val[utility::conversions::to_string_t("corp_id")] = ModelBase::toJson(corpId_);
    }
    if(startExpireDateIsSet_) {
        val[utility::conversions::to_string_t("startExpireDate")] = ModelBase::toJson(startExpireDate_);
    }
    if(endExpireDateIsSet_) {
        val[utility::conversions::to_string_t("endExpireDate")] = ModelBase::toJson(endExpireDate_);
    }
    if(startOperateDateIsSet_) {
        val[utility::conversions::to_string_t("startOperateDate")] = ModelBase::toJson(startOperateDate_);
    }
    if(endOperateDateIsSet_) {
        val[utility::conversions::to_string_t("endOperateDate")] = ModelBase::toJson(endOperateDate_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(typeIdIsSet_) {
        val[utility::conversions::to_string_t("typeId")] = ModelBase::toJson(typeId_);
    }
    if(operateTypeIsSet_) {
        val[utility::conversions::to_string_t("operateType")] = ModelBase::toJson(operateType_);
    }

    return val;
}
bool SearchResourceOpRecordRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("Accept-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Accept-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("searchKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("searchKey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("corp_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("corp_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCorpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startExpireDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startExpireDate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartExpireDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endExpireDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endExpireDate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndExpireDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startOperateDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startOperateDate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartOperateDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endOperateDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endOperateDate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndOperateDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("typeId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("typeId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTypeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operateType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operateType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateType(refVal);
        }
    }
    return ok;
}


std::string SearchResourceOpRecordRequest::getXRequestId() const
{
    return xRequestId_;
}

void SearchResourceOpRecordRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SearchResourceOpRecordRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SearchResourceOpRecordRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SearchResourceOpRecordRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SearchResourceOpRecordRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SearchResourceOpRecordRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SearchResourceOpRecordRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t SearchResourceOpRecordRequest::getOffset() const
{
    return offset_;
}

void SearchResourceOpRecordRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchResourceOpRecordRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchResourceOpRecordRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchResourceOpRecordRequest::getLimit() const
{
    return limit_;
}

void SearchResourceOpRecordRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchResourceOpRecordRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchResourceOpRecordRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchResourceOpRecordRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchResourceOpRecordRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchResourceOpRecordRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchResourceOpRecordRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

std::string SearchResourceOpRecordRequest::getCorpId() const
{
    return corpId_;
}

void SearchResourceOpRecordRequest::setCorpId(const std::string& value)
{
    corpId_ = value;
    corpIdIsSet_ = true;
}

bool SearchResourceOpRecordRequest::corpIdIsSet() const
{
    return corpIdIsSet_;
}

void SearchResourceOpRecordRequest::unsetcorpId()
{
    corpIdIsSet_ = false;
}

int64_t SearchResourceOpRecordRequest::getStartExpireDate() const
{
    return startExpireDate_;
}

void SearchResourceOpRecordRequest::setStartExpireDate(int64_t value)
{
    startExpireDate_ = value;
    startExpireDateIsSet_ = true;
}

bool SearchResourceOpRecordRequest::startExpireDateIsSet() const
{
    return startExpireDateIsSet_;
}

void SearchResourceOpRecordRequest::unsetstartExpireDate()
{
    startExpireDateIsSet_ = false;
}

int64_t SearchResourceOpRecordRequest::getEndExpireDate() const
{
    return endExpireDate_;
}

void SearchResourceOpRecordRequest::setEndExpireDate(int64_t value)
{
    endExpireDate_ = value;
    endExpireDateIsSet_ = true;
}

bool SearchResourceOpRecordRequest::endExpireDateIsSet() const
{
    return endExpireDateIsSet_;
}

void SearchResourceOpRecordRequest::unsetendExpireDate()
{
    endExpireDateIsSet_ = false;
}

int64_t SearchResourceOpRecordRequest::getStartOperateDate() const
{
    return startOperateDate_;
}

void SearchResourceOpRecordRequest::setStartOperateDate(int64_t value)
{
    startOperateDate_ = value;
    startOperateDateIsSet_ = true;
}

bool SearchResourceOpRecordRequest::startOperateDateIsSet() const
{
    return startOperateDateIsSet_;
}

void SearchResourceOpRecordRequest::unsetstartOperateDate()
{
    startOperateDateIsSet_ = false;
}

int64_t SearchResourceOpRecordRequest::getEndOperateDate() const
{
    return endOperateDate_;
}

void SearchResourceOpRecordRequest::setEndOperateDate(int64_t value)
{
    endOperateDate_ = value;
    endOperateDateIsSet_ = true;
}

bool SearchResourceOpRecordRequest::endOperateDateIsSet() const
{
    return endOperateDateIsSet_;
}

void SearchResourceOpRecordRequest::unsetendOperateDate()
{
    endOperateDateIsSet_ = false;
}

std::string SearchResourceOpRecordRequest::getType() const
{
    return type_;
}

void SearchResourceOpRecordRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SearchResourceOpRecordRequest::typeIsSet() const
{
    return typeIsSet_;
}

void SearchResourceOpRecordRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string SearchResourceOpRecordRequest::getTypeId() const
{
    return typeId_;
}

void SearchResourceOpRecordRequest::setTypeId(const std::string& value)
{
    typeId_ = value;
    typeIdIsSet_ = true;
}

bool SearchResourceOpRecordRequest::typeIdIsSet() const
{
    return typeIdIsSet_;
}

void SearchResourceOpRecordRequest::unsettypeId()
{
    typeIdIsSet_ = false;
}

int32_t SearchResourceOpRecordRequest::getOperateType() const
{
    return operateType_;
}

void SearchResourceOpRecordRequest::setOperateType(int32_t value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool SearchResourceOpRecordRequest::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void SearchResourceOpRecordRequest::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

}
}
}
}
}


