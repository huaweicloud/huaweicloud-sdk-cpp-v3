

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlEngineVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlEngineVersionResponse::ShowGaussMySqlEngineVersionResponse()
{
    datastoresIsSet_ = false;
}

ShowGaussMySqlEngineVersionResponse::~ShowGaussMySqlEngineVersionResponse() = default;

void ShowGaussMySqlEngineVersionResponse::validate()
{
}

web::json::value ShowGaussMySqlEngineVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datastoresIsSet_) {
        val[utility::conversions::to_string_t("datastores")] = ModelBase::toJson(datastores_);
    }

    return val;
}
bool ShowGaussMySqlEngineVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("datastores"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastores"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlEngineVersionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastores(refVal);
        }
    }
    return ok;
}


std::vector<MysqlEngineVersionInfo>& ShowGaussMySqlEngineVersionResponse::getDatastores()
{
    return datastores_;
}

void ShowGaussMySqlEngineVersionResponse::setDatastores(const std::vector<MysqlEngineVersionInfo>& value)
{
    datastores_ = value;
    datastoresIsSet_ = true;
}

bool ShowGaussMySqlEngineVersionResponse::datastoresIsSet() const
{
    return datastoresIsSet_;
}

void ShowGaussMySqlEngineVersionResponse::unsetdatastores()
{
    datastoresIsSet_ = false;
}

}
}
}
}
}


