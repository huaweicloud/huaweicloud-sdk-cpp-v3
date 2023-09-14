
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreDatabasesInfoNew_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreDatabasesInfoNew_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/RestoreTableInfoNew.h>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  RestoreDatabasesInfoNew
    : public ModelBase
{
public:
    RestoreDatabasesInfoNew();
    virtual ~RestoreDatabasesInfoNew();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestoreDatabasesInfoNew members

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

    std::vector<RestoreTableInfoNew>& getTables();
    bool tablesIsSet() const;
    void unsettables();
    void setTables(const std::vector<RestoreTableInfoNew>& value);


protected:
    std::string database_;
    bool databaseIsSet_;
    std::vector<RestoreTableInfoNew> tables_;
    bool tablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreDatabasesInfoNew_H_
