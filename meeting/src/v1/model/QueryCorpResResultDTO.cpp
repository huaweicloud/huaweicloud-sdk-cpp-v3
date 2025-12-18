

#include "huaweicloud/meeting/v1/model/QueryCorpResResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryCorpResResultDTO::QueryCorpResResultDTO()
{
    corpVcResIsSet_ = false;
}

QueryCorpResResultDTO::~QueryCorpResResultDTO() = default;

void QueryCorpResResultDTO::validate()
{
}

web::json::value QueryCorpResResultDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(corpVcResIsSet_) {
        val[utility::conversions::to_string_t("corpVcRes")] = ModelBase::toJson(corpVcRes_);
    }

    return val;
}
bool QueryCorpResResultDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("corpVcRes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("corpVcRes"));
        if(!fieldValue.is_null())
        {
            QueryCorpVcResResultDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCorpVcRes(refVal);
        }
    }
    return ok;
}


QueryCorpVcResResultDTO QueryCorpResResultDTO::getCorpVcRes() const
{
    return corpVcRes_;
}

void QueryCorpResResultDTO::setCorpVcRes(const QueryCorpVcResResultDTO& value)
{
    corpVcRes_ = value;
    corpVcResIsSet_ = true;
}

bool QueryCorpResResultDTO::corpVcResIsSet() const
{
    return corpVcResIsSet_;
}

void QueryCorpResResultDTO::unsetcorpVcRes()
{
    corpVcResIsSet_ = false;
}

}
}
}
}
}


