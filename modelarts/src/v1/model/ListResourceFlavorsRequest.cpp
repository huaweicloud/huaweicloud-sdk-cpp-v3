

#include "huaweicloud/modelarts/v1/model/ListResourceFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListResourceFlavorsRequest::ListResourceFlavorsRequest()
{
    continue_ = "";
    continueIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    labelSelector_ = "";
    labelSelectorIsSet_ = false;
}

ListResourceFlavorsRequest::~ListResourceFlavorsRequest() = default;

void ListResourceFlavorsRequest::validate()
{
}

web::json::value ListResourceFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(continueIsSet_) {
        val[utility::conversions::to_string_t("continue")] = ModelBase::toJson(continue_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(labelSelectorIsSet_) {
        val[utility::conversions::to_string_t("labelSelector")] = ModelBase::toJson(labelSelector_);
    }

    return val;
}
bool ListResourceFlavorsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("labelSelector"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labelSelector"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelSelector(refVal);
        }
    }
    return ok;
}


std::string ListResourceFlavorsRequest::getContinue() const
{
    return continue_;
}

void ListResourceFlavorsRequest::setContinue(const std::string& value)
{
    continue_ = value;
    continueIsSet_ = true;
}

bool ListResourceFlavorsRequest::continueIsSet() const
{
    return continueIsSet_;
}

void ListResourceFlavorsRequest::unsetcontinue()
{
    continueIsSet_ = false;
}

int32_t ListResourceFlavorsRequest::getLimit() const
{
    return limit_;
}

void ListResourceFlavorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListResourceFlavorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListResourceFlavorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListResourceFlavorsRequest::getLabelSelector() const
{
    return labelSelector_;
}

void ListResourceFlavorsRequest::setLabelSelector(const std::string& value)
{
    labelSelector_ = value;
    labelSelectorIsSet_ = true;
}

bool ListResourceFlavorsRequest::labelSelectorIsSet() const
{
    return labelSelectorIsSet_;
}

void ListResourceFlavorsRequest::unsetlabelSelector()
{
    labelSelectorIsSet_ = false;
}

}
}
}
}
}


