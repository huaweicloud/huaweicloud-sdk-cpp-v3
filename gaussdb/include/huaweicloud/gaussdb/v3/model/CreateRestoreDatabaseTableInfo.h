
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateRestoreDatabaseTableInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateRestoreDatabaseTableInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/CreateRestoreTableInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateRestoreDatabaseTableInfo
    : public ModelBase
{
public:
    CreateRestoreDatabaseTableInfo();
    virtual ~CreateRestoreDatabaseTableInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRestoreDatabaseTableInfo members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// 表信息。
    /// </summary>

    std::vector<CreateRestoreTableInfo>& getTables();
    bool tablesIsSet() const;
    void unsettables();
    void setTables(const std::vector<CreateRestoreTableInfo>& value);


protected:
    std::string database_;
    bool databaseIsSet_;
    std::vector<CreateRestoreTableInfo> tables_;
    bool tablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateRestoreDatabaseTableInfo_H_
