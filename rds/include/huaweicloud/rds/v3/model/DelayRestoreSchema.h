
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DelayRestoreSchema_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DelayRestoreSchema_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DelayRestoreTable.h>
#include <string>
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
class HUAWEICLOUD_RDS_V3_EXPORT  DelayRestoreSchema
    : public ModelBase
{
public:
    DelayRestoreSchema();
    virtual ~DelayRestoreSchema();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DelayRestoreSchema members

    /// <summary>
    /// schema名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 返回该schema下的总表数量
    /// </summary>

    int32_t getTotalTables() const;
    bool totalTablesIsSet() const;
    void unsettotalTables();
    void setTotalTables(int32_t value);

    /// <summary>
    /// 该schema下的表列表
    /// </summary>

    std::vector<DelayRestoreTable>& getTables();
    bool tablesIsSet() const;
    void unsettables();
    void setTables(const std::vector<DelayRestoreTable>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t totalTables_;
    bool totalTablesIsSet_;
    std::vector<DelayRestoreTable> tables_;
    bool tablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DelayRestoreSchema_H_
