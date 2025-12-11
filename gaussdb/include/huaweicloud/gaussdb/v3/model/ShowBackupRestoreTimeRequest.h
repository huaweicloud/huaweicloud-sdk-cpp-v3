
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowBackupRestoreTimeRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowBackupRestoreTimeRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowBackupRestoreTimeRequest
    : public ModelBase
{
public:
    ShowBackupRestoreTimeRequest();
    virtual ~ShowBackupRestoreTimeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBackupRestoreTimeRequest members

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 租户在某一project下的实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  所需查询的日期。  **约束限制**：  不涉及。  **取值范围**：  yyyy-mm-dd字符串格式，时区为UTC。  **默认取值**：  不涉及。
    /// </summary>

    std::string getDate() const;
    bool dateIsSet() const;
    void unsetdate();
    void setDate(const std::string& value);

    /// <summary>
    /// **参数解释**：  所需查询的起始时间戳。  **约束限制**：  - “start_time”有值时，“end_time”必选。 - “date”有值时，“start_time”失效。  **取值范围**：  格式为UNIX时间戳，单位是毫秒，时区为UTC标准时区。传参时需要将对应时区的时间转为标准时区对应的时间戳，比如，北京时区的时间点需要-8h后再转为时间戳。  **默认取值**：  不涉及。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  所需查询的结束时间戳。  **约束限制**：  - “end_time”有值时，“start_time”必选。 - “date”有值时，“end_time”失效。  **取值范围**：  格式为UNIX时间戳，单位是毫秒，时区为UTC标准时区。传参时需要将对应时区的时间转为标准时区对应的时间戳，比如，北京时区的时间点需要-8h后再转为时间戳。  **默认取值**：  不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string date_;
    bool dateIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowBackupRestoreTimeRequest& dereference_from_shared_ptr(std::shared_ptr<ShowBackupRestoreTimeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowBackupRestoreTimeRequest_H_
