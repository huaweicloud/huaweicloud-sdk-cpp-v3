

#include "huaweicloud/codeartsartifact/v2/model/RepoFileDOV5Page.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




RepoFileDOV5Page::RepoFileDOV5Page()
{
    totalRecords_ = 0;
    totalRecordsIsSet_ = false;
    totalPages_ = 0;
    totalPagesIsSet_ = false;
    dataIsSet_ = false;
}

RepoFileDOV5Page::~RepoFileDOV5Page() = default;

void RepoFileDOV5Page::validate()
{
}

web::json::value RepoFileDOV5Page::toJson() const
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
bool RepoFileDOV5Page::fromJson(const web::json::value& val)
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
            std::vector<RepoFileDOV5> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t RepoFileDOV5Page::getTotalRecords() const
{
    return totalRecords_;
}

void RepoFileDOV5Page::setTotalRecords(int32_t value)
{
    totalRecords_ = value;
    totalRecordsIsSet_ = true;
}

bool RepoFileDOV5Page::totalRecordsIsSet() const
{
    return totalRecordsIsSet_;
}

void RepoFileDOV5Page::unsettotalRecords()
{
    totalRecordsIsSet_ = false;
}

int32_t RepoFileDOV5Page::getTotalPages() const
{
    return totalPages_;
}

void RepoFileDOV5Page::setTotalPages(int32_t value)
{
    totalPages_ = value;
    totalPagesIsSet_ = true;
}

bool RepoFileDOV5Page::totalPagesIsSet() const
{
    return totalPagesIsSet_;
}

void RepoFileDOV5Page::unsettotalPages()
{
    totalPagesIsSet_ = false;
}

std::vector<RepoFileDOV5>& RepoFileDOV5Page::getData()
{
    return data_;
}

void RepoFileDOV5Page::setData(const std::vector<RepoFileDOV5>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool RepoFileDOV5Page::dataIsSet() const
{
    return dataIsSet_;
}

void RepoFileDOV5Page::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


