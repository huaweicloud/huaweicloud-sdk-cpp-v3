

#include "huaweicloud/kms/v2/model/ListAliasResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListAliasResponseBody::ListAliasResponseBody()
{
    aliasesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListAliasResponseBody::~ListAliasResponseBody() = default;

void ListAliasResponseBody::validate()
{
}

web::json::value ListAliasResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliasesIsSet_) {
        val[utility::conversions::to_string_t("aliases")] = ModelBase::toJson(aliases_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListAliasResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("aliases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aliases"));
        if(!fieldValue.is_null())
        {
            std::vector<AliasEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAliases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<AliasEntity>& ListAliasResponseBody::getAliases()
{
    return aliases_;
}

void ListAliasResponseBody::setAliases(const std::vector<AliasEntity>& value)
{
    aliases_ = value;
    aliasesIsSet_ = true;
}

bool ListAliasResponseBody::aliasesIsSet() const
{
    return aliasesIsSet_;
}

void ListAliasResponseBody::unsetaliases()
{
    aliasesIsSet_ = false;
}

PageInfo ListAliasResponseBody::getPageInfo() const
{
    return pageInfo_;
}

void ListAliasResponseBody::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListAliasResponseBody::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListAliasResponseBody::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


