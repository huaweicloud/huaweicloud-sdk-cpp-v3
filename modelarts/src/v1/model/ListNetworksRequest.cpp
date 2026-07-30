

#include "huaweicloud/modelarts/v1/model/ListNetworksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListNetworksRequest::ListNetworksRequest()
{
    labelSelector_ = "";
    labelSelectorIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    continue_ = "";
    continueIsSet_ = false;
}

ListNetworksRequest::~ListNetworksRequest() = default;

void ListNetworksRequest::validate()
{
}

web::json::value ListNetworksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(labelSelectorIsSet_) {
        val[utility::conversions::to_string_t("labelSelector")] = ModelBase::toJson(labelSelector_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(continueIsSet_) {
        val[utility::conversions::to_string_t("continue")] = ModelBase::toJson(continue_);
    }

    return val;
}
bool ListNetworksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("labelSelector"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labelSelector"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelSelector(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("continue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("continue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContinue(refVal);
        }
    }
    return ok;
}


std::string ListNetworksRequest::getLabelSelector() const
{
    return labelSelector_;
}

void ListNetworksRequest::setLabelSelector(const std::string& value)
{
    labelSelector_ = value;
    labelSelectorIsSet_ = true;
}

bool ListNetworksRequest::labelSelectorIsSet() const
{
    return labelSelectorIsSet_;
}

void ListNetworksRequest::unsetlabelSelector()
{
    labelSelectorIsSet_ = false;
}

int32_t ListNetworksRequest::getLimit() const
{
    return limit_;
}

void ListNetworksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListNetworksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListNetworksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListNetworksRequest::getContinue() const
{
    return continue_;
}

void ListNetworksRequest::setContinue(const std::string& value)
{
    continue_ = value;
    continueIsSet_ = true;
}

bool ListNetworksRequest::continueIsSet() const
{
    return continueIsSet_;
}

void ListNetworksRequest::unsetcontinue()
{
    continueIsSet_ = false;
}

}
}
}
}
}


