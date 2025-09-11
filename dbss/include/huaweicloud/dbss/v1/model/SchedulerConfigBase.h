
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SchedulerConfigBase_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SchedulerConfigBase_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 调度配置
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  SchedulerConfigBase
    : public ModelBase
{
public:
    SchedulerConfigBase();
    virtual ~SchedulerConfigBase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SchedulerConfigBase members

    /// <summary>
    /// 数据库ID
    /// </summary>

    std::string getDbIds() const;
    bool dbIdsIsSet() const;
    void unsetdbIds();
    void setDbIds(const std::string& value);

    /// <summary>
    /// 文件类型
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 周期 - AUDIT_REPORT_DAY: 天 - AUDIT_REPORT_WEEK：周 - AUDIT_REPORT_MONTH：月 - AUDIT_REPORT_YEAR：年 - AUDIT_REPORT_REAL_TIME：实时
    /// </summary>

    std::string getFrequency() const;
    bool frequencyIsSet() const;
    void unsetfrequency();
    void setFrequency(const std::string& value);

    /// <summary>
    /// 报表模板ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 调度方式
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 是否通知  - OFF：不通知  - ON：通知
    /// </summary>

    std::string getNotice() const;
    bool noticeIsSet() const;
    void unsetnotice();
    void setNotice(const std::string& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 模板状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 主题URN
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);


protected:
    std::string dbIds_;
    bool dbIdsIsSet_;
    std::string format_;
    bool formatIsSet_;
    std::string frequency_;
    bool frequencyIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string notice_;
    bool noticeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string topicUrn_;
    bool topicUrnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SchedulerConfigBase_H_
