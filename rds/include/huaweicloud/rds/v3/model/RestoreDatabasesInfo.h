
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreDatabasesInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreDatabasesInfo_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/rds/v3/model/RestoreTableInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RestoreDatabasesInfo
    : public ModelBase
{
public:
    RestoreDatabasesInfo();
    virtual ~RestoreDatabasesInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestoreDatabasesInfo members

    /// <summary>
    /// 库名
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// 表信息
    /// </summary>

    std::vector<RestoreTableInfo>& getTables();
    bool tablesIsSet() const;
    void unsettables();
    void setTables(const std::vector<RestoreTableInfo>& value);


protected:
    std::string database_;
    bool databaseIsSet_;
    std::vector<RestoreTableInfo> tables_;
    bool tablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreDatabasesInfo_H_
