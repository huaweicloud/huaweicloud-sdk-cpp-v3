
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateGaussMySqlDatabaseRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateGaussMySqlDatabaseRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlDatabase.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建数据库请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateGaussMySqlDatabaseRequestBody
    : public ModelBase
{
public:
    CreateGaussMySqlDatabaseRequestBody();
    virtual ~CreateGaussMySqlDatabaseRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateGaussMySqlDatabaseRequestBody members

    /// <summary>
    /// 
    /// </summary>

    std::vector<CreateGaussMySqlDatabase>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<CreateGaussMySqlDatabase>& value);


protected:
    std::vector<CreateGaussMySqlDatabase> databases_;
    bool databasesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateGaussMySqlDatabaseRequestBody_H_
