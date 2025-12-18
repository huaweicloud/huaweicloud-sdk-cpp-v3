
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListWdrSnapshotsCollectResultsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListWdrSnapshotsCollectResultsRequest_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListWdrSnapshotsCollectResultsRequest
    : public ModelBase
{
public:
    ListWdrSnapshotsCollectResultsRequest();
    virtual ~ListWdrSnapshotsCollectResultsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWdrSnapshotsCollectResultsRequest members

    /// <summary>
    /// **参数解释**: 语言。 **约束限制**: 不涉及。 **取值范围**:   - zh-cn   - en-us  **默认取值**: en-us
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**: 实例ID，此参数是用户创建实例的唯一标识。 **约束限制**: 不涉及。 **取值范围**: 只能由英文字母、数字组成，且长度为36个字符。 **默认取值**: 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**: 索引位置，偏移量。 **约束限制**:   不涉及。 **取值范围**:   必须为数字，不能为负数。 **默认取值**:   默认为0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**:   查询记录数。， **约束限制**:   不涉及。 **取值范围**:   不能为负数，最小值为1，最大值为100。 **默认取值**:   默认为10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**:   查询开始时间。格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始，Z指时区偏移量，时区中的+号需要进行URL编码，编码为%2B，时区中的-号无需编码。   例如北京时间偏移显示为+0800，start_time&#x3D;2024-03-15T17:20:33+0800传参时编码为start_time&#x3D;2024-03-15T17:20:33%2B0800。 **约束限制**:   不涉及。 **取值范围**:   不涉及。 **默认取值**:   不涉及。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**:   查询结束时间。格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始，Z指时区偏移量，时区中的+号需要进行URL编码，编码为%2B，时区中的-号无需编码。   例如北京时间偏移显示为+0800，end_time&#x3D;2024-03-16T17:20:33+0800传参时编码为end_time&#x3D;2024-03-16T17:20:33%2B0800。 **约束限制**:   不涉及。 **取值范围**:   不涉及。 **默认取值**:   不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**:   任务ID。正确填写后，可查询指定任务对应的快照报告采集结果。不支持模糊匹配，需填写完整的任务ID。 **约束限制**:   不涉及。 **取值范围**:   不涉及。 **默认取值**:   不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListWdrSnapshotsCollectResultsRequest& dereference_from_shared_ptr(std::shared_ptr<ListWdrSnapshotsCollectResultsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListWdrSnapshotsCollectResultsRequest_H_
