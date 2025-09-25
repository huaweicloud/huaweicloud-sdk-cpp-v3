
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_LtsConfigInfoResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_LtsConfigInfoResult_H_


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
/// **参数解释**: LTS对接配置信息。 **取值范围**: 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  LtsConfigInfoResult
    : public ModelBase
{
public:
    LtsConfigInfoResult();
    virtual ~LtsConfigInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LtsConfigInfoResult members

    /// <summary>
    /// **参数解释**: LTS日志组名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// **参数解释**: LTS日志组ID。 **取值范围**: 不涉及。LTS日志组ID
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**: LTS日志组类别。 **取值范围**: 通常为asp_log，标识为智能运维专用日志组。
    /// </summary>

    std::string getGroupLogType() const;
    bool groupLogTypeIsSet() const;
    void unsetgroupLogType();
    void setGroupLogType(const std::string& value);

    /// <summary>
    /// **参数解释**: LTS日志组中数据最大保留天数。 **取值范围**: [1,30]
    /// </summary>

    int32_t getGroupTtlInDays() const;
    bool groupTtlInDaysIsSet() const;
    void unsetgroupTtlInDays();
    void setGroupTtlInDays(int32_t value);

    /// <summary>
    /// **参数解释**: LTS日志流名称。 **取值范围**: 通常为STREAM_APS_FULL_SQL-实例ID。
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);

    /// <summary>
    /// **参数解释**: LTS日志流ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// **参数解释**: LTS日志流类别。 **取值范围**: 通常为full_sql，标识为全量SQL专用日志流。
    /// </summary>

    std::string getStreamLogType() const;
    bool streamLogTypeIsSet() const;
    void unsetstreamLogType();
    void setStreamLogType(const std::string& value);

    /// <summary>
    /// **参数解释**: LTS日志流中数据最大保留天数。 **取值范围**: [1,30]
    /// </summary>

    int32_t getStreamTtlInDays() const;
    bool streamTtlInDaysIsSet() const;
    void unsetstreamTtlInDays();
    void setStreamTtlInDays(int32_t value);

    /// <summary>
    /// **参数解释**: LTS日志流结构化配置ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getStreamStructureConfigId() const;
    bool streamStructureConfigIdIsSet() const;
    void unsetstreamStructureConfigId();
    void setStreamStructureConfigId(const std::string& value);

    /// <summary>
    /// **参数解释**: LTS日志流索引配置ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getStreamIndexConfigId() const;
    bool streamIndexConfigIdIsSet() const;
    void unsetstreamIndexConfigId();
    void setStreamIndexConfigId(const std::string& value);


protected:
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string groupLogType_;
    bool groupLogTypeIsSet_;
    int32_t groupTtlInDays_;
    bool groupTtlInDaysIsSet_;
    std::string logStreamName_;
    bool logStreamNameIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string streamLogType_;
    bool streamLogTypeIsSet_;
    int32_t streamTtlInDays_;
    bool streamTtlInDaysIsSet_;
    std::string streamStructureConfigId_;
    bool streamStructureConfigIdIsSet_;
    std::string streamIndexConfigId_;
    bool streamIndexConfigIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_LtsConfigInfoResult_H_
