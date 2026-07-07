
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListDdlLogsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListDdlLogsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/DdlLogInfo.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListDdlLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDdlLogsResponse();
    virtual ~ListDdlLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDdlLogsResponse members

    /// <summary>
    /// **参数解释**：  DDL下载日志列表。  **取值范围**：  不涉及。 
    /// </summary>

    std::vector<DdlLogInfo>& getDdlLogs();
    bool ddlLogsIsSet() const;
    void unsetddlLogs();
    void setDdlLogs(const std::vector<DdlLogInfo>& value);

    /// <summary>
    /// **参数解释**：  总条数。  **取值范围**：  不涉及。 
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**：  日志保留天数。  **取值范围**：  不涉及。 
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);

    /// <summary>
    /// **参数解释**：  DDL日志下载开关状态。  **取值范围**：  - ON，开启。 - OFF，关闭。 
    /// </summary>

    std::string getSwitchStatus() const;
    bool switchStatusIsSet() const;
    void unsetswitchStatus();
    void setSwitchStatus(const std::string& value);


protected:
    std::vector<DdlLogInfo> ddlLogs_;
    bool ddlLogsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    int32_t keepDays_;
    bool keepDaysIsSet_;
    std::string switchStatus_;
    bool switchStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListDdlLogsResponse_H_
