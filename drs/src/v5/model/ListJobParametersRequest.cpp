

#include "huaweicloud/drs/v5/model/ListJobParametersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListJobParametersRequest::ListJobParametersRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListJobParametersRequest::~ListJobParametersRequest() = default;

void ListJobParametersRequest::validate()
{
}

web::json::value ListJobParametersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListJobParametersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ListJobParametersRequest::getJobId() const
{
    return jobId_;
}

void ListJobParametersRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListJobParametersRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListJobParametersRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListJobParametersRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListJobParametersRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListJobParametersRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListJobParametersRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListJobParametersRequest::getOffset() const
{
    return offset_;
}

void ListJobParametersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListJobParametersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListJobParametersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListJobParametersRequest::getLimit() const
{
    return limit_;
}

void ListJobParametersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListJobParametersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListJobParametersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListJobParametersRequest::getName() const
{
    return name_;
}

void ListJobParametersRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListJobParametersRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListJobParametersRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


