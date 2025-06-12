

#include "huaweicloud/codeartsbuild/v3/model/ListKeystoreSearchResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListKeystoreSearchResponseBody_result::ListKeystoreSearchResponseBody_result()
{
    total_ = 0.0;
    totalIsSet_ = false;
    keystoreListIsSet_ = false;
}

ListKeystoreSearchResponseBody_result::~ListKeystoreSearchResponseBody_result() = default;

void ListKeystoreSearchResponseBody_result::validate()
{
}

web::json::value ListKeystoreSearchResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(keystoreListIsSet_) {
        val[utility::conversions::to_string_t("keystore_list")] = ModelBase::toJson(keystoreList_);
    }

    return val;
}
bool ListKeystoreSearchResponseBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keystore_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ListKeystoreSearchResponseBody_result_keystore_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreList(refVal);
        }
    }
    return ok;
}


double ListKeystoreSearchResponseBody_result::getTotal() const
{
    return total_;
}

void ListKeystoreSearchResponseBody_result::setTotal(double value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result::totalIsSet() const
{
    return totalIsSet_;
}

void ListKeystoreSearchResponseBody_result::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ListKeystoreSearchResponseBody_result_keystore_list>& ListKeystoreSearchResponseBody_result::getKeystoreList()
{
    return keystoreList_;
}

void ListKeystoreSearchResponseBody_result::setKeystoreList(const std::vector<ListKeystoreSearchResponseBody_result_keystore_list>& value)
{
    keystoreList_ = value;
    keystoreListIsSet_ = true;
}

bool ListKeystoreSearchResponseBody_result::keystoreListIsSet() const
{
    return keystoreListIsSet_;
}

void ListKeystoreSearchResponseBody_result::unsetkeystoreList()
{
    keystoreListIsSet_ = false;
}

}
}
}
}
}


