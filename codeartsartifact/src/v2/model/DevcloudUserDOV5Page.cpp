

#include "huaweicloud/codeartsartifact/v2/model/DevcloudUserDOV5Page.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




DevcloudUserDOV5Page::DevcloudUserDOV5Page()
{
    totalRecords_ = 0;
    totalRecordsIsSet_ = false;
    totalPages_ = 0;
    totalPagesIsSet_ = false;
    dataIsSet_ = false;
}

DevcloudUserDOV5Page::~DevcloudUserDOV5Page() = default;

void DevcloudUserDOV5Page::validate()
{
}

web::json::value DevcloudUserDOV5Page::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalRecordsIsSet_) {
        val[utility::conversions::to_string_t("total_records")] = ModelBase::toJson(totalRecords_);
    }
    if(totalPagesIsSet_) {
        val[utility::conversions::to_string_t("total_pages")] = ModelBase::toJson(totalPages_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool DevcloudUserDOV5Page::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_records"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_pages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_pages"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<DevcloudUserDOV5> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t DevcloudUserDOV5Page::getTotalRecords() const
{
    return totalRecords_;
}

void DevcloudUserDOV5Page::setTotalRecords(int32_t value)
{
    totalRecords_ = value;
    totalRecordsIsSet_ = true;
}

bool DevcloudUserDOV5Page::totalRecordsIsSet() const
{
    return totalRecordsIsSet_;
}

void DevcloudUserDOV5Page::unsettotalRecords()
{
    totalRecordsIsSet_ = false;
}

int32_t DevcloudUserDOV5Page::getTotalPages() const
{
    return totalPages_;
}

void DevcloudUserDOV5Page::setTotalPages(int32_t value)
{
    totalPages_ = value;
    totalPagesIsSet_ = true;
}

bool DevcloudUserDOV5Page::totalPagesIsSet() const
{
    return totalPagesIsSet_;
}

void DevcloudUserDOV5Page::unsettotalPages()
{
    totalPagesIsSet_ = false;
}

std::vector<DevcloudUserDOV5>& DevcloudUserDOV5Page::getData()
{
    return data_;
}

void DevcloudUserDOV5Page::setData(const std::vector<DevcloudUserDOV5>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DevcloudUserDOV5Page::dataIsSet() const
{
    return dataIsSet_;
}

void DevcloudUserDOV5Page::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


