
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListRestorableInstancesDetailsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListRestorableInstancesDetailsRequest_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListRestorableInstancesDetailsRequest
    : public ModelBase
{
public:
    ListRestorableInstancesDetailsRequest();
    virtual ~ListRestorableInstancesDetailsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRestorableInstancesDetailsRequest members

    /// <summary>
    /// **参数解释**: 语言。 **约束限制**: 不涉及。 **取值范围**:   - zh-cn   - en-us  **默认取值**: en-us
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 源实例id，需要恢复的实例ID。
    /// </summary>

    std::string getSourceInstanceId() const;
    bool sourceInstanceIdIsSet() const;
    void unsetsourceInstanceId();
    void setSourceInstanceId(const std::string& value);

    /// <summary>
    /// 实例备份信息ID，根据备份ID查询实例拓扑信息，过滤查询出来的实例，包含节点数，副本数等。参数为空时，根据restore_time查询。。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 恢复点，当备份ID为空时，通过此参数查询实例拓扑信息，过滤实例列表。
    /// </summary>

    std::string getRestoreTime() const;
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询记录数。默认为100，不能为负数，最小值为1，最大值为100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**: 查备份恢复的粒度。 **约束限制**: 不涉及。 **取值范围**:   - INSTANCE   - DATABASE_TABLE   - DATABASE **默认取值**: INSTANCE
    /// </summary>

    std::string getBackupRestoreType() const;
    bool backupRestoreTypeIsSet() const;
    void unsetbackupRestoreType();
    void setBackupRestoreType(const std::string& value);

    /// <summary>
    /// **参数解释**: 源实例的备份类型。 **约束限制**: 不涉及。 **取值范围**:   - INSTANCE   - DATABASE_TABLE **默认取值**: INSTANCE
    /// </summary>

    std::string getSourceBackupSchema() const;
    bool sourceBackupSchemaIsSet() const;
    void unsetsourceBackupSchema();
    void setSourceBackupSchema(const std::string& value);

    /// <summary>
    /// **参数解释**: 目标实例ID，通过此参数过滤实例列表。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getTargetInstanceId() const;
    bool targetInstanceIdIsSet() const;
    void unsettargetInstanceId();
    void setTargetInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**: 目标实例名称，通过此参数过滤实例列表。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string sourceInstanceId_;
    bool sourceInstanceIdIsSet_;
    std::string backupId_;
    bool backupIdIsSet_;
    std::string restoreTime_;
    bool restoreTimeIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string backupRestoreType_;
    bool backupRestoreTypeIsSet_;
    std::string sourceBackupSchema_;
    bool sourceBackupSchemaIsSet_;
    std::string targetInstanceId_;
    bool targetInstanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListRestorableInstancesDetailsRequest& dereference_from_shared_ptr(std::shared_ptr<ListRestorableInstancesDetailsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListRestorableInstancesDetailsRequest_H_
