
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListBackupsRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListBackupsRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListBackupsRequest
    : public ModelBase
{
public:
    ListBackupsRequest();
    virtual ~ListBackupsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBackupsRequest members

    /// <summary>
    /// **参数解释：** 实例ID，可以调用“查询实例列表和详情-QueryingInstancesandDetails”接口获取。如果未申请实例，可以调用“创建实例-CreatingaDBInstance”接口创建。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 备份ID。 **约束限制：** 当该字段传入的备份ID归属为自动增量备份时，实例ID必传。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// **参数解释：** 备份类型。 **约束限制：** 当该字段取值为“Incremental”时，实例ID必传。 **取值范围：** - 取值为“Auto”，表示自动全量备份。 - 取值为“Manual”，表示手动全量备份。 - 取值为“Incremental”，表示自动增量备份。 - 当该字段未传入值时，默认只查询所有的全量备份，包括自动全备备份和手动全量备份。当该字段取值为“Incremental”时，实例ID必传。  **默认取值：** 不涉及。
    /// </summary>

    std::string getBackupType() const;
    bool backupTypeIsSet() const;
    void unsetbackupType();
    void setBackupType(const std::string& value);

    /// <summary>
    /// **参数解释：** 索引位置偏移量，表示从指定project ID下最新的备份创建时间开始，按时间的先后顺序偏移offset条数据后查询对应的备份信息。 **约束限制：** 不涉及。 **取值范围：** 大于或等于0。 **默认取值：** 0，表示从最新的备份创建时间对应的备份开始查询。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释：** 查询备份个数上限值。 **约束限制：** 不涉及。 **取值范围：** 1~100。 **默认取值：** 100。不传该参数时，默认查询前100条备份信息。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释：** 查询备份开始的时间，格式为“yyyy-mm-dd hh:mm:ss”。该时间为UTC时间。 **约束限制：** “end_time”有值时，“begin_time”必选。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 查询备份开始的结束时间，格式为“yyyy-mm-dd hh:mm:ss”。该时间为UTC时间。 **约束限制：** “begin_time”有值时，“end_time”必选。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例模式。 **约束限制：** 不涉及。 **取值范围：** - Sharding - ReplicaSet - Single  **默认取值：** 不涉及。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序字段。 **约束限制：** “order_rule”有值时，“order_field”必选。 **取值范围：** - name，备份名称。 - instanceName，实例名称。 - type，备份类型。 - datastoreType，引擎类型。 - beginTime，开始时间。 - status，备份状态。  **默认取值：** 如果不传值，则默认根据备份开始时间，即响应参数的begin_time，倒序排序。
    /// </summary>

    std::string getOrderField() const;
    bool orderFieldIsSet() const;
    void unsetorderField();
    void setOrderField(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序规则。 **约束限制：** “order_field”有值时，“order_rule”必选。 **取值范围：** - asc: 升序排序。 - desc: 降序排序。  **默认取值：** 如果不传值，则默认根据备份开始时间，即响应参数的begin_time，倒序排序。
    /// </summary>

    std::string getOrderRule() const;
    bool orderRuleIsSet() const;
    void unsetorderRule();
    void setOrderRule(const std::string& value);

    /// <summary>
    /// **参数解释：** 备份状态。 **约束限制：** 不涉及。 **取值范围：** - COMPLETED - BUILDING - FAILED  **默认取值：** 不涉及。
    /// </summary>

    std::string getBackupStatus() const;
    bool backupStatusIsSet() const;
    void unsetbackupStatus();
    void setBackupStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 备份名称，支持模糊匹配。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getBackupName() const;
    bool backupNameIsSet() const;
    void unsetbackupName();
    void setBackupName(const std::string& value);

    /// <summary>
    /// **参数解释：** 备份描述，支持模糊匹配。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getBackupDescription() const;
    bool backupDescriptionIsSet() const;
    void unsetbackupDescription();
    void setBackupDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例名称，支持模糊匹配。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string backupId_;
    bool backupIdIsSet_;
    std::string backupType_;
    bool backupTypeIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string orderField_;
    bool orderFieldIsSet_;
    std::string orderRule_;
    bool orderRuleIsSet_;
    std::string backupStatus_;
    bool backupStatusIsSet_;
    std::string backupName_;
    bool backupNameIsSet_;
    std::string backupDescription_;
    bool backupDescriptionIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListBackupsRequest& dereference_from_shared_ptr(std::shared_ptr<ListBackupsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListBackupsRequest_H_
