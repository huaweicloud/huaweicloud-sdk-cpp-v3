

#include "huaweicloud/iotda/v5/model/ListOtaPackageInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListOtaPackageInfoResponse::ListOtaPackageInfoResponse()
{
    packagesIsSet_ = false;
    pageIsSet_ = false;
}

ListOtaPackageInfoResponse::~ListOtaPackageInfoResponse() = default;

void ListOtaPackageInfoResponse::validate()
{
}

web::json::value ListOtaPackageInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(packagesIsSet_) {
        val[utility::conversions::to_string_t("packages")] = ModelBase::toJson(packages_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListOtaPackageInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("packages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packages"));
        if(!fieldValue.is_null())
        {
            std::vector<OtaPackageInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackages(refVal);
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


std::vector<OtaPackageInfo>& ListOtaPackageInfoResponse::getPackages()
{
    return packages_;
}

void ListOtaPackageInfoResponse::setPackages(const std::vector<OtaPackageInfo>& value)
{
    packages_ = value;
    packagesIsSet_ = true;
}

bool ListOtaPackageInfoResponse::packagesIsSet() const
{
    return packagesIsSet_;
}

void ListOtaPackageInfoResponse::unsetpackages()
{
    packagesIsSet_ = false;
}

PageInfo ListOtaPackageInfoResponse::getPage() const
{
    return page_;
}

void ListOtaPackageInfoResponse::setPage(const PageInfo& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListOtaPackageInfoResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListOtaPackageInfoResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


