

#include "huaweicloud/iotdm/v5/model/ListInstanceFlavorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ListInstanceFlavorsResponse::ListInstanceFlavorsResponse()
{
    pageIsSet_ = false;
    flavorsIsSet_ = false;
}

ListInstanceFlavorsResponse::~ListInstanceFlavorsResponse() = default;

void ListInstanceFlavorsResponse::validate()
{
}

web::json::value ListInstanceFlavorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(flavorsIsSet_) {
        val[utility::conversions::to_string_t("flavors")] = ModelBase::toJson(flavors_);
    }

    return val;
}
bool ListInstanceFlavorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceFlavor> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    return ok;
}


Page ListInstanceFlavorsResponse::getPage() const
{
    return page_;
}

void ListInstanceFlavorsResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListInstanceFlavorsResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListInstanceFlavorsResponse::unsetpage()
{
    pageIsSet_ = false;
}

std::vector<InstanceFlavor>& ListInstanceFlavorsResponse::getFlavors()
{
    return flavors_;
}

void ListInstanceFlavorsResponse::setFlavors(const std::vector<InstanceFlavor>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ListInstanceFlavorsResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ListInstanceFlavorsResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

}
}
}
}
}


