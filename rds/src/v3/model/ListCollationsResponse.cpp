

#include "huaweicloud/rds/v3/model/ListCollationsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListCollationsResponse::ListCollationsResponse()
{
    charSetsIsSet_ = false;
}

ListCollationsResponse::~ListCollationsResponse() = default;

void ListCollationsResponse::validate()
{
}

web::json::value ListCollationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(charSetsIsSet_) {
        val[utility::conversions::to_string_t("charSets")] = ModelBase::toJson(charSets_);
    }

    return val;
}

bool ListCollationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("charSets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charSets"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharSets(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& ListCollationsResponse::getCharSets()
{
    return charSets_;
}

void ListCollationsResponse::setCharSets(const std::vector<std::string>& value)
{
    charSets_ = value;
    charSetsIsSet_ = true;
}

bool ListCollationsResponse::charSetsIsSet() const
{
    return charSetsIsSet_;
}

void ListCollationsResponse::unsetcharSets()
{
    charSetsIsSet_ = false;
}

}
}
}
}
}


