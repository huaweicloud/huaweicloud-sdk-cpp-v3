
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SegmentDO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SegmentDO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/SegmentFileDO.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 录制切片段落
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SegmentDO
    : public ModelBase
{
public:
    SegmentDO();
    virtual ~SegmentDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SegmentDO members

    /// <summary>
    /// 录制人工分段序号，每次启动录制，生成一个分段
    /// </summary>

    int32_t getManualOrder() const;
    bool manualOrderIsSet() const;
    void unsetmanualOrder();
    void setManualOrder(int32_t value);

    /// <summary>
    /// 录制片段内的文件自动切片序号（每次启动录制后，每三小时一个分片文件，多次人工启动重新从1开始）
    /// </summary>

    int32_t getSegmentOrder() const;
    bool segmentOrderIsSet() const;
    void unsetsegmentOrder();
    void setSegmentOrder(int32_t value);

    /// <summary>
    /// 录制分段总文件大小（字节）
    /// </summary>

    std::string getSegmentSize() const;
    bool segmentSizeIsSet() const;
    void unsetsegmentSize();
    void setSegmentSize(const std::string& value);

    /// <summary>
    /// 录制文件自动切片列表，每3小时文件切片一次
    /// </summary>

    std::vector<SegmentFileDO>& getFileList();
    bool fileListIsSet() const;
    void unsetfileList();
    void setFileList(const std::vector<SegmentFileDO>& value);


protected:
    int32_t manualOrder_;
    bool manualOrderIsSet_;
    int32_t segmentOrder_;
    bool segmentOrderIsSet_;
    std::string segmentSize_;
    bool segmentSizeIsSet_;
    std::vector<SegmentFileDO> fileList_;
    bool fileListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SegmentDO_H_
