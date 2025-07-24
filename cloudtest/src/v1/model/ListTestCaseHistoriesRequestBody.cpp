

#include "huaweicloud/cloudtest/v1/model/ListTestCaseHistoriesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestCaseHistoriesRequestBody::ListTestCaseHistoriesRequestBody()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
}

ListTestCaseHistoriesRequestBody::~ListTestCaseHistoriesRequestBody() = default;

void ListTestCaseHistoriesRequestBody::validate()
{
}

web::json::value ListTestCaseHistoriesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }

    return val;
}
bool ListTestCaseHistoriesRequestBody::fromJson(const web::json::value& val)
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


int32_t ListTestCaseHistoriesRequestBody::getOffset() const
{
    return offset_;
}

void ListTestCaseHistoriesRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTestCaseHistoriesRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTestCaseHistoriesRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTestCaseHistoriesRequestBody::getLimit() const
{
    return limit_;
}

void ListTestCaseHistoriesRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTestCaseHistoriesRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListTestCaseHistoriesRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTestCaseHistoriesRequestBody::getVersionId() const
{
    return versionId_;
}

void ListTestCaseHistoriesRequestBody::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool ListTestCaseHistoriesRequestBody::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void ListTestCaseHistoriesRequestBody::unsetversionId()
{
    versionIdIsSet_ = false;
}

}
}
}
}
}


