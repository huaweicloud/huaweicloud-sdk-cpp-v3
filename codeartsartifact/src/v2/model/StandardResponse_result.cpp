

#include "huaweicloud/codeartsartifact/v2/model/StandardResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




StandardResponse_result::StandardResponse_result()
{
    dataIsSet_ = false;
    totalRecords_ = 0;
    totalRecordsIsSet_ = false;
    totalPages_ = 0;
    totalPagesIsSet_ = false;
}

StandardResponse_result::~StandardResponse_result() = default;

void StandardResponse_result::validate()
{
}

web::json::value StandardResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(totalRecordsIsSet_) {
        val[utility::conversions::to_string_t("total_records")] = ModelBase::toJson(totalRecords_);
    }
    if(totalPagesIsSet_) {
        val[utility::conversions::to_string_t("total_pages")] = ModelBase::toJson(totalPages_);
    }

    return val;
}
bool StandardResponse_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<ReleaseFileVersionDo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
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
    return ok;
}


std::vector<ReleaseFileVersionDo>& StandardResponse_result::getData()
{
    return data_;
}

void StandardResponse_result::setData(const std::vector<ReleaseFileVersionDo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool StandardResponse_result::dataIsSet() const
{
    return dataIsSet_;
}

void StandardResponse_result::unsetdata()
{
    dataIsSet_ = false;
}

int32_t StandardResponse_result::getTotalRecords() const
{
    return totalRecords_;
}

void StandardResponse_result::setTotalRecords(int32_t value)
{
    totalRecords_ = value;
    totalRecordsIsSet_ = true;
}

bool StandardResponse_result::totalRecordsIsSet() const
{
    return totalRecordsIsSet_;
}

void StandardResponse_result::unsettotalRecords()
{
    totalRecordsIsSet_ = false;
}

int32_t StandardResponse_result::getTotalPages() const
{
    return totalPages_;
}

void StandardResponse_result::setTotalPages(int32_t value)
{
    totalPages_ = value;
    totalPagesIsSet_ = true;
}

bool StandardResponse_result::totalPagesIsSet() const
{
    return totalPagesIsSet_;
}

void StandardResponse_result::unsettotalPages()
{
    totalPagesIsSet_ = false;
}

}
}
}
}
}


