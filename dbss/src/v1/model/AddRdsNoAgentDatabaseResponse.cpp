

#include "huaweicloud/dbss/v1/model/AddRdsNoAgentDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AddRdsNoAgentDatabaseResponse::AddRdsNoAgentDatabaseResponse()
{
    illegalDbIdIsSet_ = false;
    legalDbIdIsSet_ = false;
}

AddRdsNoAgentDatabaseResponse::~AddRdsNoAgentDatabaseResponse() = default;

void AddRdsNoAgentDatabaseResponse::validate()
{
}

web::json::value AddRdsNoAgentDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(illegalDbIdIsSet_) {
        val[utility::conversions::to_string_t("illegal_db_id")] = ModelBase::toJson(illegalDbId_);
    }
    if(legalDbIdIsSet_) {
        val[utility::conversions::to_string_t("legal_db_id")] = ModelBase::toJson(legalDbId_);
    }

    return val;
}
bool AddRdsNoAgentDatabaseResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("illegal_db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("illegal_db_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIllegalDbId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("legal_db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("legal_db_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLegalDbId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AddRdsNoAgentDatabaseResponse::getIllegalDbId()
{
    return illegalDbId_;
}

void AddRdsNoAgentDatabaseResponse::setIllegalDbId(const std::vector<std::string>& value)
{
    illegalDbId_ = value;
    illegalDbIdIsSet_ = true;
}

bool AddRdsNoAgentDatabaseResponse::illegalDbIdIsSet() const
{
    return illegalDbIdIsSet_;
}

void AddRdsNoAgentDatabaseResponse::unsetillegalDbId()
{
    illegalDbIdIsSet_ = false;
}

std::vector<std::string>& AddRdsNoAgentDatabaseResponse::getLegalDbId()
{
    return legalDbId_;
}

void AddRdsNoAgentDatabaseResponse::setLegalDbId(const std::vector<std::string>& value)
{
    legalDbId_ = value;
    legalDbIdIsSet_ = true;
}

bool AddRdsNoAgentDatabaseResponse::legalDbIdIsSet() const
{
    return legalDbIdIsSet_;
}

void AddRdsNoAgentDatabaseResponse::unsetlegalDbId()
{
    legalDbIdIsSet_ = false;
}

}
}
}
}
}


