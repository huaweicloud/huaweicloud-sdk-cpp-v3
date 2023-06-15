
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_HLSRecordConfig_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_HLSRecordConfig_H_

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
class HUAWEICLOUD_LIVE_V1_EXPORT  HLSRecordConfig
    : public ModelBase
{
public:
    HLSRecordConfig();
    virtual ~HLSRecordConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// HLSRecordConfig members

    /// <summary>
    /// 单位为秒，周期录制时长，最小1分钟（60秒），最大12小时。如果为0则整个流录制一个文件。
    /// </summary>

    int32_t getRecordCycle() const;
    bool recordCycleIsSet() const;
    void unsetrecordCycle();
    void setRecordCycle(int32_t value);

    /// <summary>
    /// 录制m3u8文件含路径和文件名的前缀， 默认Record/{publish_domain}/{app}/{record_type}/{record_format}/{stream}_{file_start_time}/{stream}_{file_start_time}
    /// </summary>

    std::string getRecordPrefix() const;
    bool recordPrefixIsSet() const;
    void unsetrecordPrefix();
    void setRecordPrefix(const std::string& value);

    /// <summary>
    /// 录制ts文件名的前缀， 默认{file_start_time_unix}_{file_end_time_unix}_{ts_sequence_number}
    /// </summary>

    std::string getRecordTsPrefix() const;
    bool recordTsPrefixIsSet() const;
    void unsetrecordTsPrefix();
    void setRecordTsPrefix(const std::string& value);

    /// <summary>
    /// 录制HLS时ts的切片时长，非必须，缺省为10，单位秒，最小2，最大60
    /// </summary>

    int32_t getRecordSliceDuration() const;
    bool recordSliceDurationIsSet() const;
    void unsetrecordSliceDuration();
    void setRecordSliceDuration(int32_t value);

    /// <summary>
    /// 录制HLS文件拼接时长，如果流中断超过该时间，则生成新文件。单位秒。如果为0表示流中断就生成新文件，如果为-1则表示相同的流中断恢复后继续在30天内的前一个文件保存。默认为0。
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
    std::string recordTsPrefix_;
    bool recordTsPrefixIsSet_;
    int32_t recordSliceDuration_;
    bool recordSliceDurationIsSet_;
    int32_t recordMaxDurationToMergeFile_;
    bool recordMaxDurationToMergeFileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_HLSRecordConfig_H_
