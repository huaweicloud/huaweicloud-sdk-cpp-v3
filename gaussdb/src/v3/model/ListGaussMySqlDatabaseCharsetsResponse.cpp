

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlDatabaseCharsetsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlDatabaseCharsetsResponse::ListGaussMySqlDatabaseCharsetsResponse()
{
    charsetsIsSet_ = false;
}

ListGaussMySqlDatabaseCharsetsResponse::~ListGaussMySqlDatabaseCharsetsResponse() = default;

void ListGaussMySqlDatabaseCharsetsResponse::validate()
{
}

web::json::value ListGaussMySqlDatabaseCharsetsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(charsetsIsSet_) {
        val[utility::conversions::to_string_t("charsets")] = ModelBase::toJson(charsets_);
    }

    return val;
}
bool ListGaussMySqlDatabaseCharsetsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("charsets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charsets"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharsets(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListGaussMySqlDatabaseCharsetsResponse::getCharsets()
{
    return charsets_;
}

void ListGaussMySqlDatabaseCharsetsResponse::setCharsets(const std::vector<std::string>& value)
{
    charsets_ = value;
    charsetsIsSet_ = true;
}

bool ListGaussMySqlDatabaseCharsetsResponse::charsetsIsSet() const
{
    return charsetsIsSet_;
}

void ListGaussMySqlDatabaseCharsetsResponse::unsetcharsets()
{
    charsetsIsSet_ = false;
}

}
}
}
}
}


