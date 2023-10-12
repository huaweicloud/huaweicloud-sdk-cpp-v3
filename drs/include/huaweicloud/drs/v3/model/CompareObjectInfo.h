
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareObjectInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareObjectInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  CompareObjectInfo
    : public ModelBase
{
public:
    CompareObjectInfo();
    virtual ~CompareObjectInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CompareObjectInfo members

    /// <summary>
    /// 库名。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 该库下的表名列表。
    /// </summary>

    std::vector<std::string>& getTableName();
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::vector<std::string>& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::vector<std::string> tableName_;
    bool tableNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CompareObjectInfo_H_
