
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RestoreInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RestoreInfo_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 备份信息。 **约束限制：** 支持按指定备份恢复和按指定实例的指定时间点恢复。 目前仅GeminiDB Cassandra和GeminiDB Influx集群支持按指定实例的指定时间点恢复。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  RestoreInfo
    : public ModelBase
{
public:
    RestoreInfo();
    virtual ~RestoreInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestoreInfo members

    /// <summary>
    /// **参数解释：** 全量备份文件ID。 **约束限制：** 用于根据指定备份恢复数据到一个新创建的实例的场景，此场景下该字段取值不能为空。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// **参数解释：** 数据恢复参考的指定实例的ID。 **约束限制：** 用于恢复指定实例的指定时间点的数据到一个新创建的实例的场景，此场景下该字段取值不能为空。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSourceInstanceId() const;
    bool sourceInstanceIdIsSet() const;
    void unsetsourceInstanceId();
    void setSourceInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 数据恢复的指定的时间点。 **约束限制：** 用于恢复指定实例的指定时间点的数据到一个新创建的实例的场景，此场景下该字段取值不能为空。 **取值范围：** 取值为UTC 13位毫秒数，可通过查询实例可恢复的时间段 - QueryingtheTimeWindowWhenaBackupCanBeRestored接口进行查询。 **默认取值：** 不涉及。
    /// </summary>

    int64_t getRestoreTime() const;
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(int64_t value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    std::string sourceInstanceId_;
    bool sourceInstanceIdIsSet_;
    int64_t restoreTime_;
    bool restoreTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RestoreInfo_H_
