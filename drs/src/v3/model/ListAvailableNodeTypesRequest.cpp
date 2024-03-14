

#include "huaweicloud/drs/v3/model/ListAvailableNodeTypesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListAvailableNodeTypesRequest::ListAvailableNodeTypesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
    dbUseType_ = "";
    dbUseTypeIsSet_ = false;
    jobDirection_ = "";
    jobDirectionIsSet_ = false;
    isUseSelloutInfo_ = false;
    isUseSelloutInfoIsSet_ = false;
    isMultiWrite_ = false;
    isMultiWriteIsSet_ = false;
}

ListAvailableNodeTypesRequest::~ListAvailableNodeTypesRequest() = default;

void ListAvailableNodeTypesRequest::validate()
{
}

web::json::value ListAvailableNodeTypesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(dbUseTypeIsSet_) {
        val[utility::conversions::to_string_t("db_use_type")] = ModelBase::toJson(dbUseType_);
    }
    if(jobDirectionIsSet_) {
        val[utility::conversions::to_string_t("job_direction")] = ModelBase::toJson(jobDirection_);
    }
    if(isUseSelloutInfoIsSet_) {
        val[utility::conversions::to_string_t("is_use_sellout_info")] = ModelBase::toJson(isUseSelloutInfo_);
    }
    if(isMultiWriteIsSet_) {
        val[utility::conversions::to_string_t("is_multi_write")] = ModelBase::toJson(isMultiWrite_);
    }

    return val;
}
bool ListAvailableNodeTypesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_use_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_use_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUseType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_use_sellout_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_use_sellout_info"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsUseSelloutInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_multi_write"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_multi_write"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMultiWrite(refVal);
        }
    }
    return ok;
}


std::string ListAvailableNodeTypesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAvailableNodeTypesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAvailableNodeTypesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAvailableNodeTypesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListAvailableNodeTypesRequest::getEngineType() const
{
    return engineType_;
}

void ListAvailableNodeTypesRequest::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool ListAvailableNodeTypesRequest::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void ListAvailableNodeTypesRequest::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string ListAvailableNodeTypesRequest::getDbUseType() const
{
    return dbUseType_;
}

void ListAvailableNodeTypesRequest::setDbUseType(const std::string& value)
{
    dbUseType_ = value;
    dbUseTypeIsSet_ = true;
}

bool ListAvailableNodeTypesRequest::dbUseTypeIsSet() const
{
    return dbUseTypeIsSet_;
}

void ListAvailableNodeTypesRequest::unsetdbUseType()
{
    dbUseTypeIsSet_ = false;
}

std::string ListAvailableNodeTypesRequest::getJobDirection() const
{
    return jobDirection_;
}

void ListAvailableNodeTypesRequest::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool ListAvailableNodeTypesRequest::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void ListAvailableNodeTypesRequest::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

bool ListAvailableNodeTypesRequest::isIsUseSelloutInfo() const
{
    return isUseSelloutInfo_;
}

void ListAvailableNodeTypesRequest::setIsUseSelloutInfo(bool value)
{
    isUseSelloutInfo_ = value;
    isUseSelloutInfoIsSet_ = true;
}

bool ListAvailableNodeTypesRequest::isUseSelloutInfoIsSet() const
{
    return isUseSelloutInfoIsSet_;
}

void ListAvailableNodeTypesRequest::unsetisUseSelloutInfo()
{
    isUseSelloutInfoIsSet_ = false;
}

bool ListAvailableNodeTypesRequest::isIsMultiWrite() const
{
    return isMultiWrite_;
}

void ListAvailableNodeTypesRequest::setIsMultiWrite(bool value)
{
    isMultiWrite_ = value;
    isMultiWriteIsSet_ = true;
}

bool ListAvailableNodeTypesRequest::isMultiWriteIsSet() const
{
    return isMultiWriteIsSet_;
}

void ListAvailableNodeTypesRequest::unsetisMultiWrite()
{
    isMultiWriteIsSet_ = false;
}

}
}
}
}
}


