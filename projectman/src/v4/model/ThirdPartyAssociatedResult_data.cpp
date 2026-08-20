

#include "huaweicloud/projectman/v4/model/ThirdPartyAssociatedResult_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ThirdPartyAssociatedResult_data::ThirdPartyAssociatedResult_data()
{
    resultIsSet_ = false;
    pageIsSet_ = false;
}

ThirdPartyAssociatedResult_data::~ThirdPartyAssociatedResult_data() = default;

void ThirdPartyAssociatedResult_data::validate()
{
}

web::json::value ThirdPartyAssociatedResult_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ThirdPartyAssociatedResult_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<ThirdPartyAssociatedDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            PageVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<ThirdPartyAssociatedDTO>& ThirdPartyAssociatedResult_data::getResult()
{
    return result_;
}

void ThirdPartyAssociatedResult_data::setResult(const std::vector<ThirdPartyAssociatedDTO>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ThirdPartyAssociatedResult_data::resultIsSet() const
{
    return resultIsSet_;
}

void ThirdPartyAssociatedResult_data::unsetresult()
{
    resultIsSet_ = false;
}

PageVO ThirdPartyAssociatedResult_data::getPage() const
{
    return page_;
}

void ThirdPartyAssociatedResult_data::setPage(const PageVO& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ThirdPartyAssociatedResult_data::pageIsSet() const
{
    return pageIsSet_;
}

void ThirdPartyAssociatedResult_data::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


