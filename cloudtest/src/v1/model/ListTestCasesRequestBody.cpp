

#include "huaweicloud/cloudtest/v1/model/ListTestCasesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestCasesRequestBody::ListTestCasesRequestBody()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    executionTypeId_ = 0;
    executionTypeIdIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
}

ListTestCasesRequestBody::~ListTestCasesRequestBody() = default;

void ListTestCasesRequestBody::validate()
{
}

web::json::value ListTestCasesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(executionTypeIdIsSet_) {
        val[utility::conversions::to_string_t("execution_type_id")] = ModelBase::toJson(executionTypeId_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }

    return val;
}
bool ListTestCasesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("execution_type_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_type_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionTypeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
        }
    }
    return ok;
}


int32_t ListTestCasesRequestBody::getOffset() const
{
    return offset_;
}

void ListTestCasesRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTestCasesRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTestCasesRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTestCasesRequestBody::getLimit() const
{
    return limit_;
}

void ListTestCasesRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTestCasesRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListTestCasesRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListTestCasesRequestBody::getExecutionTypeId() const
{
    return executionTypeId_;
}

void ListTestCasesRequestBody::setExecutionTypeId(int32_t value)
{
    executionTypeId_ = value;
    executionTypeIdIsSet_ = true;
}

bool ListTestCasesRequestBody::executionTypeIdIsSet() const
{
    return executionTypeIdIsSet_;
}

void ListTestCasesRequestBody::unsetexecutionTypeId()
{
    executionTypeIdIsSet_ = false;
}

std::string ListTestCasesRequestBody::getVersionId() const
{
    return versionId_;
}

void ListTestCasesRequestBody::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool ListTestCasesRequestBody::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void ListTestCasesRequestBody::unsetversionId()
{
    versionIdIsSet_ = false;
}

}
}
}
}
}


