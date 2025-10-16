

#include "huaweicloud/iotda/v5/model/ListOtaModulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListOtaModulesResponse::ListOtaModulesResponse()
{
    modulesIsSet_ = false;
    pageIsSet_ = false;
}

ListOtaModulesResponse::~ListOtaModulesResponse() = default;

void ListOtaModulesResponse::validate()
{
}

web::json::value ListOtaModulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modulesIsSet_) {
        val[utility::conversions::to_string_t("modules")] = ModelBase::toJson(modules_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListOtaModulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("modules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modules"));
        if(!fieldValue.is_null())
        {
            std::vector<OtaModuleInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<OtaModuleInfo>& ListOtaModulesResponse::getModules()
{
    return modules_;
}

void ListOtaModulesResponse::setModules(const std::vector<OtaModuleInfo>& value)
{
    modules_ = value;
    modulesIsSet_ = true;
}

bool ListOtaModulesResponse::modulesIsSet() const
{
    return modulesIsSet_;
}

void ListOtaModulesResponse::unsetmodules()
{
    modulesIsSet_ = false;
}

PageInfo ListOtaModulesResponse::getPage() const
{
    return page_;
}

void ListOtaModulesResponse::setPage(const PageInfo& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListOtaModulesResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListOtaModulesResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


