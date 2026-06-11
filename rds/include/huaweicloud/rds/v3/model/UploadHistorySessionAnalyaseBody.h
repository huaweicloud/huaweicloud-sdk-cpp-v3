
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UploadHistorySessionAnalyaseBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UploadHistorySessionAnalyaseBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UploadHistorySessionAnalyaseBody
    : public ModelBase
{
public:
    UploadHistorySessionAnalyaseBody();
    virtual ~UploadHistorySessionAnalyaseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadHistorySessionAnalyaseBody members

    /// <summary>
    /// 类型。 session    表示下载历史会话 wait_event    表示下载历史等待事件 top_sql    表示下载历史top sql
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 参数解释： 开始时间。 格式为UTC时间戳。 取值范围： 不涉及。 默认取值： 不涉及。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 参数解释： 结束时间。 格式为UTC时间戳。 取值范围： 不涉及。 默认取值： 不涉及。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UploadHistorySessionAnalyaseBody_H_
