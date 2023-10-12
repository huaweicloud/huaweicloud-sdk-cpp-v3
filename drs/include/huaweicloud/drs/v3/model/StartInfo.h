
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_StartInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_StartInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 启动任务请求体。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  StartInfo
    : public ModelBase
{
public:
    StartInfo();
    virtual ~StartInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartInfo members

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 任务启动时间，时间戳格式精确到毫秒，例如：1679966489593，取值为空代表立即启动。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_StartInfo_H_
