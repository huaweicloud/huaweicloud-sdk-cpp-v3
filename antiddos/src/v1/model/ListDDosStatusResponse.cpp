

#include "huaweicloud/antiddos/v1/model/ListDDosStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




ListDDosStatusResponse::ListDDosStatusResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    ddosStatusIsSet_ = false;
}

ListDDosStatusResponse::~ListDDosStatusResponse() = default;

void ListDDosStatusResponse::validate()
{
}

web::json::value ListDDosStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(ddosStatusIsSet_) {
        val[utility::conversions::to_string_t("ddosStatus")] = ModelBase::toJson(ddosStatus_);
    }

    return val;
}
bool ListDDosStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ddosStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddosStatus"));
        if(!fieldValue.is_null())
        {
            std::vector<DDosStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdosStatus(refVal);
        }
    }
    return ok;
}


int32_t ListDDosStatusResponse::getTotal() const
{
    return total_;
}

void ListDDosStatusResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListDDosStatusResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListDDosStatusResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<DDosStatus>& ListDDosStatusResponse::getDdosStatus()
{
    return ddosStatus_;
}

void ListDDosStatusResponse::setDdosStatus(const std::vector<DDosStatus>& value)
{
    ddosStatus_ = value;
    ddosStatusIsSet_ = true;
}

bool ListDDosStatusResponse::ddosStatusIsSet() const
{
    return ddosStatusIsSet_;
}

void ListDDosStatusResponse::unsetddosStatus()
{
    ddosStatusIsSet_ = false;
}

}
}
}
}
}


