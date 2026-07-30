

#include "huaweicloud/modelarts/v1/model/ListPoolNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListPoolNodesRequest::ListPoolNodesRequest()
{
    continue_ = "";
    continueIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    poolName_ = "";
    poolNameIsSet_ = false;
}

ListPoolNodesRequest::~ListPoolNodesRequest() = default;

void ListPoolNodesRequest::validate()
{
}

web::json::value ListPoolNodesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(continueIsSet_) {
        val[utility::conversions::to_string_t("continue")] = ModelBase::toJson(continue_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }

    return val;
}
bool ListPoolNodesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("continue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("continue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContinue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolName(refVal);
        }
    }
    return ok;
}


std::string ListPoolNodesRequest::getContinue() const
{
    return continue_;
}

void ListPoolNodesRequest::setContinue(const std::string& value)
{
    continue_ = value;
    continueIsSet_ = true;
}

bool ListPoolNodesRequest::continueIsSet() const
{
    return continueIsSet_;
}

void ListPoolNodesRequest::unsetcontinue()
{
    continueIsSet_ = false;
}

int32_t ListPoolNodesRequest::getLimit() const
{
    return limit_;
}

void ListPoolNodesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPoolNodesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPoolNodesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPoolNodesRequest::getPoolName() const
{
    return poolName_;
}

void ListPoolNodesRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ListPoolNodesRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ListPoolNodesRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

}
}
}
}
}


