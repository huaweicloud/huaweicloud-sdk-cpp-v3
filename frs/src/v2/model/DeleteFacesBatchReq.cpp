

#include "huaweicloud/frs/v2/model/DeleteFacesBatchReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DeleteFacesBatchReq::DeleteFacesBatchReq()
{
    filter_ = "";
    filterIsSet_ = false;
}

DeleteFacesBatchReq::~DeleteFacesBatchReq() = default;

void DeleteFacesBatchReq::validate()
{
}

web::json::value DeleteFacesBatchReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }

    return val;
}
bool DeleteFacesBatchReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    return ok;
}


std::string DeleteFacesBatchReq::getFilter() const
{
    return filter_;
}

void DeleteFacesBatchReq::setFilter(const std::string& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool DeleteFacesBatchReq::filterIsSet() const
{
    return filterIsSet_;
}

void DeleteFacesBatchReq::unsetfilter()
{
    filterIsSet_ = false;
}

}
}
}
}
}


