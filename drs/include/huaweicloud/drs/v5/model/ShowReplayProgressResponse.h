
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReplayProgressResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReplayProgressResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/ReplaySqlNowInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowReplayProgressResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowReplayProgressResponse();
    virtual ~ShowReplayProgressResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowReplayProgressResponse members

    /// <summary>
    /// 回放进度的百分数
    /// </summary>

    int64_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int64_t value);

    /// <summary>
    /// 需要解析的总数
    /// </summary>

    int64_t getParseCount() const;
    bool parseCountIsSet() const;
    void unsetparseCount();
    void setParseCount(int64_t value);

    /// <summary>
    /// 回放的总数
    /// </summary>

    int64_t getReplayCount() const;
    bool replayCountIsSet() const;
    void unsetreplayCount();
    void setReplayCount(int64_t value);

    /// <summary>
    /// 迁移模式
    /// </summary>

    std::string getTaskMode() const;
    bool taskModeIsSet() const;
    void unsettaskMode();
    void setTaskMode(const std::string& value);

    /// <summary>
    /// 迁移时间
    /// </summary>

    int64_t getProcessTime() const;
    bool processTimeIsSet() const;
    void unsetprocessTime();
    void setProcessTime(int64_t value);

    /// <summary>
    /// 迁移状态
    /// </summary>

    std::string getTransferStatus() const;
    bool transferStatusIsSet() const;
    void unsettransferStatus();
    void setTransferStatus(const std::string& value);

    /// <summary>
    /// 回放最大时间
    /// </summary>

    int64_t getMaxTime() const;
    bool maxTimeIsSet() const;
    void unsetmaxTime();
    void setMaxTime(int64_t value);

    /// <summary>
    /// 回放最小时间
    /// </summary>

    int64_t getMinTime() const;
    bool minTimeIsSet() const;
    void unsetminTime();
    void setMinTime(int64_t value);

    /// <summary>
    /// 回放当前时间
    /// </summary>

    int64_t getNowTime() const;
    bool nowTimeIsSet() const;
    void unsetnowTime();
    void setNowTime(int64_t value);

    /// <summary>
    /// 回放报告最小时间
    /// </summary>

    int64_t getMinExportTime() const;
    bool minExportTimeIsSet() const;
    void unsetminExportTime();
    void setMinExportTime(int64_t value);

    /// <summary>
    /// 回放报告最大时间
    /// </summary>

    int64_t getMaxExportTime() const;
    bool maxExportTimeIsSet() const;
    void unsetmaxExportTime();
    void setMaxExportTime(int64_t value);

    /// <summary>
    /// 正在回放的sql列表
    /// </summary>

    std::vector<ReplaySqlNowInfo>& getReplaySqlNowList();
    bool replaySqlNowListIsSet() const;
    void unsetreplaySqlNowList();
    void setReplaySqlNowList(const std::vector<ReplaySqlNowInfo>& value);


protected:
    int64_t progress_;
    bool progressIsSet_;
    int64_t parseCount_;
    bool parseCountIsSet_;
    int64_t replayCount_;
    bool replayCountIsSet_;
    std::string taskMode_;
    bool taskModeIsSet_;
    int64_t processTime_;
    bool processTimeIsSet_;
    std::string transferStatus_;
    bool transferStatusIsSet_;
    int64_t maxTime_;
    bool maxTimeIsSet_;
    int64_t minTime_;
    bool minTimeIsSet_;
    int64_t nowTime_;
    bool nowTimeIsSet_;
    int64_t minExportTime_;
    bool minExportTimeIsSet_;
    int64_t maxExportTime_;
    bool maxExportTimeIsSet_;
    std::vector<ReplaySqlNowInfo> replaySqlNowList_;
    bool replaySqlNowListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReplayProgressResponse_H_
