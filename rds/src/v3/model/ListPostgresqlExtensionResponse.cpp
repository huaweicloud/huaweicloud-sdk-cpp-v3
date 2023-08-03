

#include "huaweicloud/rds/v3/model/ListPostgresqlExtensionResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPostgresqlExtensionResponse::ListPostgresqlExtensionResponse()
{
    extensionsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListPostgresqlExtensionResponse::~ListPostgresqlExtensionResponse() = default;

void ListPostgresqlExtensionResponse::validate()
{
}

web::json::value ListPostgresqlExtensionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(extensionsIsSet_) {
        val[utility::conversions::to_string_t("extensions")] = ModelBase::toJson(extensions_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ListPostgresqlExtensionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("extensions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extensions"));
        if(!fieldValue.is_null())
        {
            std::vector<ExtensionsResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtensions(refVal);
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

std::vector<ExtensionsResponse>& ListPostgresqlExtensionResponse::getExtensions()
{
    return extensions_;
}

void ListPostgresqlExtensionResponse::setExtensions(const std::vector<ExtensionsResponse>& value)
{
    extensions_ = value;
    extensionsIsSet_ = true;
}

bool ListPostgresqlExtensionResponse::extensionsIsSet() const
{
    return extensionsIsSet_;
}

void ListPostgresqlExtensionResponse::unsetextensions()
{
    extensionsIsSet_ = false;
}

int32_t ListPostgresqlExtensionResponse::getTotalCount() const
{
    return totalCount_;
}

void ListPostgresqlExtensionResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListPostgresqlExtensionResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListPostgresqlExtensionResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


