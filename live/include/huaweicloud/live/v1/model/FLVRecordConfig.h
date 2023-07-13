
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_FLVRecordConfig_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_FLVRecordConfig_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  FLVRecordConfig
    : public ModelBase
{
public:
    FLVRecordConfig();
    virtual ~FLVRecordConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FLVRecordConfig members

    /// <summary>
    /// 单位为秒，周期录制时长，最小1分钟，最大12小时。如果为0则整个流录制一个文件。
    /// </summary>

    int32_t getRecordCycle() const;
    bool recordCycleIsSet() const;
    void unsetrecordCycle();
    void setRecordCycle(int32_t value);

    /// <summary>
    /// 录制FLV文件含路径和文件名的前缀， 默认Record/{publish_domain}/{app}/{record_type}/{record_format}/{stream}_{file_start_time}/{file_start_time}
    /// </summary>

    std::string getRecordPrefix() const;
    bool recordPrefixIsSet() const;
    void unsetrecordPrefix();
    void setRecordPrefix(const std::string& value);

    /// <summary>
    /// 录制flv拼接时长，如果流中断超过该时间，则生成新文件。单位秒。如果为0表示流中断就生成新文件。默认为0。
    /// </summary>

    int32_t getRecordMaxDurationToMergeFile() const;
    bool recordMaxDurationToMergeFileIsSet() const;
    void unsetrecordMaxDurationToMergeFile();
    void setRecordMaxDurationToMergeFile(int32_t value);


protected:
    int32_t recordCycle_;
    bool recordCycleIsSet_;
    std::string recordPrefix_;
    bool recordPrefixIsSet_;
    int32_t recordMaxDurationToMergeFile_;
    bool recordMaxDurationToMergeFileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_FLVRecordConfig_H_
