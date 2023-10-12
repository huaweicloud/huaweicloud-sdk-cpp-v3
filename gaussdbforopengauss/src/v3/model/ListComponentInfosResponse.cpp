

#include "huaweicloud/gaussdbforopengauss/v3/model/ListComponentInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListComponentInfosResponse::ListComponentInfosResponse()
{
    nodesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListComponentInfosResponse::~ListComponentInfosResponse() = default;

void ListComponentInfosResponse::validate()
{
}

web::json::value ListComponentInfosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListComponentInfosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<Nodes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<Nodes>& ListComponentInfosResponse::getNodes()
{
    return nodes_;
}

void ListComponentInfosResponse::setNodes(const std::vector<Nodes>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool ListComponentInfosResponse::nodesIsSet() const
{
    return nodesIsSet_;
}

void ListComponentInfosResponse::unsetnodes()
{
    nodesIsSet_ = false;
}

int32_t ListComponentInfosResponse::getTotalCount() const
{
    return totalCount_;
}

void ListComponentInfosResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListComponentInfosResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListComponentInfosResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


