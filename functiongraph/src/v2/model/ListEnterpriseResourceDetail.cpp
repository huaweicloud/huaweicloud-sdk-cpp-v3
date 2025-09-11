

#include "huaweicloud/functiongraph/v2/model/ListEnterpriseResourceDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListEnterpriseResourceDetail::ListEnterpriseResourceDetail()
{
    detailId_ = "";
    detailIdIsSet_ = false;
}

ListEnterpriseResourceDetail::~ListEnterpriseResourceDetail() = default;

void ListEnterpriseResourceDetail::validate()
{
}

web::json::value ListEnterpriseResourceDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(detailIdIsSet_) {
        val[utility::conversions::to_string_t("detailId")] = ModelBase::toJson(detailId_);
    }

    return val;
}
bool ListEnterpriseResourceDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("detailId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detailId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetailId(refVal);
        }
    }
    return ok;
}


std::string ListEnterpriseResourceDetail::getDetailId() const
{
    return detailId_;
}

void ListEnterpriseResourceDetail::setDetailId(const std::string& value)
{
    detailId_ = value;
    detailIdIsSet_ = true;
}

bool ListEnterpriseResourceDetail::detailIdIsSet() const
{
    return detailIdIsSet_;
}

void ListEnterpriseResourceDetail::unsetdetailId()
{
    detailIdIsSet_ = false;
}

}
}
}
}
}


