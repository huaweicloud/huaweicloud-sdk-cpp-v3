

#include "huaweicloud/dbss/v1/model/AddRdsDatabaseNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AddRdsDatabaseNewResponse::AddRdsDatabaseNewResponse()
{
    retListIsSet_ = false;
}

AddRdsDatabaseNewResponse::~AddRdsDatabaseNewResponse() = default;

void AddRdsDatabaseNewResponse::validate()
{
}

web::json::value AddRdsDatabaseNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(retListIsSet_) {
        val[utility::conversions::to_string_t("ret_list")] = ModelBase::toJson(retList_);
    }

    return val;
}
bool AddRdsDatabaseNewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ret_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ret_list"));
        if(!fieldValue.is_null())
        {
            std::vector<RdsDbResponse_ret_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetList(refVal);
        }
    }
    return ok;
}


std::vector<RdsDbResponse_ret_list>& AddRdsDatabaseNewResponse::getRetList()
{
    return retList_;
}

void AddRdsDatabaseNewResponse::setRetList(const std::vector<RdsDbResponse_ret_list>& value)
{
    retList_ = value;
    retListIsSet_ = true;
}

bool AddRdsDatabaseNewResponse::retListIsSet() const
{
    return retListIsSet_;
}

void AddRdsDatabaseNewResponse::unsetretList()
{
    retListIsSet_ = false;
}

}
}
}
}
}


