
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RestoreDatabaseInfos_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RestoreDatabaseInfos_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/RestoreDatabaseTableInfo.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  RestoreDatabaseInfos
    : public ModelBase
{
public:
    RestoreDatabaseInfos();
    virtual ~RestoreDatabaseInfos();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestoreDatabaseInfos members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 总表数。
    /// </summary>

    int32_t getTotalTables() const;
    bool totalTablesIsSet() const;
    void unsettotalTables();
    void setTotalTables(int32_t value);

    /// <summary>
    /// 表信息。
    /// </summary>

    std::vector<RestoreDatabaseTableInfo>& getTables();
    bool tablesIsSet() const;
    void unsettables();
    void setTables(const std::vector<RestoreDatabaseTableInfo>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t totalTables_;
    bool totalTablesIsSet_;
    std::vector<RestoreDatabaseTableInfo> tables_;
    bool tablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RestoreDatabaseInfos_H_
