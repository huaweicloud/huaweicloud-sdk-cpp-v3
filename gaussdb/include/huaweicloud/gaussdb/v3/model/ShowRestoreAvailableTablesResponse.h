
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowRestoreAvailableTablesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowRestoreAvailableTablesResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/RestoreDatabaseInfos.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowRestoreAvailableTablesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRestoreAvailableTablesResponse();
    virtual ~ShowRestoreAvailableTablesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRestoreAvailableTablesResponse members

    /// <summary>
    /// **参数解释**:  实例总表数。  **取值范围**：  不涉及。
    /// </summary>

    int32_t getTotalTables() const;
    bool totalTablesIsSet() const;
    void unsettotalTables();
    void setTotalTables(int32_t value);

    /// <summary>
    /// **参数解释**：  数据库信息。
    /// </summary>

    std::vector<RestoreDatabaseInfos>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<RestoreDatabaseInfos>& value);


protected:
    int32_t totalTables_;
    bool totalTablesIsSet_;
    std::vector<RestoreDatabaseInfos> databases_;
    bool databasesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowRestoreAvailableTablesResponse_H_
