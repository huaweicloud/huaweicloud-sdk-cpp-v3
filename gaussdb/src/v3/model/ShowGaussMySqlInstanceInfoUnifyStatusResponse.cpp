

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlInstanceInfoUnifyStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlInstanceInfoUnifyStatusResponse::ShowGaussMySqlInstanceInfoUnifyStatusResponse()
{
    instanceIsSet_ = false;
}

ShowGaussMySqlInstanceInfoUnifyStatusResponse::~ShowGaussMySqlInstanceInfoUnifyStatusResponse() = default;

void ShowGaussMySqlInstanceInfoUnifyStatusResponse::validate()
{
}

web::json::value ShowGaussMySqlInstanceInfoUnifyStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIsSet_) {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(instance_);
    }

    return val;
}
bool ShowGaussMySqlInstanceInfoUnifyStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            MysqlInstanceInfoDetailUnifyStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    return ok;
}


MysqlInstanceInfoDetailUnifyStatus ShowGaussMySqlInstanceInfoUnifyStatusResponse::getInstance() const
{
    return instance_;
}

void ShowGaussMySqlInstanceInfoUnifyStatusResponse::setInstance(const MysqlInstanceInfoDetailUnifyStatus& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool ShowGaussMySqlInstanceInfoUnifyStatusResponse::instanceIsSet() const
{
    return instanceIsSet_;
}

void ShowGaussMySqlInstanceInfoUnifyStatusResponse::unsetinstance()
{
    instanceIsSet_ = false;
}

}
}
}
}
}


