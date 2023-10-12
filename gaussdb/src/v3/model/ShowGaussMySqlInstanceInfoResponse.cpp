

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlInstanceInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlInstanceInfoResponse::ShowGaussMySqlInstanceInfoResponse()
{
    instanceIsSet_ = false;
}

ShowGaussMySqlInstanceInfoResponse::~ShowGaussMySqlInstanceInfoResponse() = default;

void ShowGaussMySqlInstanceInfoResponse::validate()
{
}

web::json::value ShowGaussMySqlInstanceInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIsSet_) {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(instance_);
    }

    return val;
}
bool ShowGaussMySqlInstanceInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            MysqlInstanceInfoDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    return ok;
}


MysqlInstanceInfoDetail ShowGaussMySqlInstanceInfoResponse::getInstance() const
{
    return instance_;
}

void ShowGaussMySqlInstanceInfoResponse::setInstance(const MysqlInstanceInfoDetail& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool ShowGaussMySqlInstanceInfoResponse::instanceIsSet() const
{
    return instanceIsSet_;
}

void ShowGaussMySqlInstanceInfoResponse::unsetinstance()
{
    instanceIsSet_ = false;
}

}
}
}
}
}


