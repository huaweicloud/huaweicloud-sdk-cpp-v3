

#include "huaweicloud/projectman/v4/model/ListProjectIterationsV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectIterationsV4Response::ListProjectIterationsV4Response()
{
    total_ = 0;
    totalIsSet_ = false;
    iterationsIsSet_ = false;
}

ListProjectIterationsV4Response::~ListProjectIterationsV4Response() = default;

void ListProjectIterationsV4Response::validate()
{
}

web::json::value ListProjectIterationsV4Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(iterationsIsSet_) {
        val[utility::conversions::to_string_t("iterations")] = ModelBase::toJson(iterations_);
    }

    return val;
}
bool ListProjectIterationsV4Response::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("iterations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterations"));
        if(!fieldValue.is_null())
        {
            std::vector<ListProjectVersionsV4ResponseBody_iterations> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterations(refVal);
        }
    }
    return ok;
}


int32_t ListProjectIterationsV4Response::getTotal() const
{
    return total_;
}

void ListProjectIterationsV4Response::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListProjectIterationsV4Response::totalIsSet() const
{
    return totalIsSet_;
}

void ListProjectIterationsV4Response::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ListProjectVersionsV4ResponseBody_iterations>& ListProjectIterationsV4Response::getIterations()
{
    return iterations_;
}

void ListProjectIterationsV4Response::setIterations(const std::vector<ListProjectVersionsV4ResponseBody_iterations>& value)
{
    iterations_ = value;
    iterationsIsSet_ = true;
}

bool ListProjectIterationsV4Response::iterationsIsSet() const
{
    return iterationsIsSet_;
}

void ListProjectIterationsV4Response::unsetiterations()
{
    iterationsIsSet_ = false;
}

}
}
}
}
}


