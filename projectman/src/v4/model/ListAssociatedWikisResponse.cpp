

#include "huaweicloud/projectman/v4/model/ListAssociatedWikisResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListAssociatedWikisResponse::ListAssociatedWikisResponse()
{
    wikisIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListAssociatedWikisResponse::~ListAssociatedWikisResponse() = default;

void ListAssociatedWikisResponse::validate()
{
}

web::json::value ListAssociatedWikisResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wikisIsSet_) {
        val[utility::conversions::to_string_t("wikis")] = ModelBase::toJson(wikis_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListAssociatedWikisResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("wikis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wikis"));
        if(!fieldValue.is_null())
        {
            std::vector<AttachWikiDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWikis(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<AttachWikiDetail>& ListAssociatedWikisResponse::getWikis()
{
    return wikis_;
}

void ListAssociatedWikisResponse::setWikis(const std::vector<AttachWikiDetail>& value)
{
    wikis_ = value;
    wikisIsSet_ = true;
}

bool ListAssociatedWikisResponse::wikisIsSet() const
{
    return wikisIsSet_;
}

void ListAssociatedWikisResponse::unsetwikis()
{
    wikisIsSet_ = false;
}

int32_t ListAssociatedWikisResponse::getTotal() const
{
    return total_;
}

void ListAssociatedWikisResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAssociatedWikisResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAssociatedWikisResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


