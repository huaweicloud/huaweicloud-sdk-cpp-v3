

#include "huaweicloud/codeartsartifact/v2/model/DomainIPWhiteListModelPage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




DomainIPWhiteListModelPage::DomainIPWhiteListModelPage()
{
    totalRecords_ = 0;
    totalRecordsIsSet_ = false;
    totalPages_ = 0;
    totalPagesIsSet_ = false;
    dataIsSet_ = false;
}

DomainIPWhiteListModelPage::~DomainIPWhiteListModelPage() = default;

void DomainIPWhiteListModelPage::validate()
{
}

web::json::value DomainIPWhiteListModelPage::toJson() const
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
bool DomainIPWhiteListModelPage::fromJson(const web::json::value& val)
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
            std::vector<DomainIPWhiteListModel> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t DomainIPWhiteListModelPage::getTotalRecords() const
{
    return totalRecords_;
}

void DomainIPWhiteListModelPage::setTotalRecords(int32_t value)
{
    totalRecords_ = value;
    totalRecordsIsSet_ = true;
}

bool DomainIPWhiteListModelPage::totalRecordsIsSet() const
{
    return totalRecordsIsSet_;
}

void DomainIPWhiteListModelPage::unsettotalRecords()
{
    totalRecordsIsSet_ = false;
}

int32_t DomainIPWhiteListModelPage::getTotalPages() const
{
    return totalPages_;
}

void DomainIPWhiteListModelPage::setTotalPages(int32_t value)
{
    totalPages_ = value;
    totalPagesIsSet_ = true;
}

bool DomainIPWhiteListModelPage::totalPagesIsSet() const
{
    return totalPagesIsSet_;
}

void DomainIPWhiteListModelPage::unsettotalPages()
{
    totalPagesIsSet_ = false;
}

std::vector<DomainIPWhiteListModel>& DomainIPWhiteListModelPage::getData()
{
    return data_;
}

void DomainIPWhiteListModelPage::setData(const std::vector<DomainIPWhiteListModel>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DomainIPWhiteListModelPage::dataIsSet() const
{
    return dataIsSet_;
}

void DomainIPWhiteListModelPage::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


