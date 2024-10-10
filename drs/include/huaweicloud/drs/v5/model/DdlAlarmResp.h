
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DdlAlarmResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DdlAlarmResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// DDL告警信息响应体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DdlAlarmResp
    : public ModelBase
{
public:
    DdlAlarmResp();
    virtual ~DdlAlarmResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DdlAlarmResp members

    /// <summary>
    /// 记录唯一序号。
    /// </summary>

    int64_t getSeqno() const;
    bool seqnoIsSet() const;
    void unsetseqno();
    void setSeqno(int64_t value);

    /// <summary>
    /// 数据源库位点。
    /// </summary>

    std::string getCheckpoint() const;
    bool checkpointIsSet() const;
    void unsetcheckpoint();
    void setCheckpoint(const std::string& value);

    /// <summary>
    /// DDL告警状态。0无告警，1告警中。
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// DDL在源库执行时间。
    /// </summary>

    int64_t getDdlTimestamp() const;
    bool ddlTimestampIsSet() const;
    void unsetddlTimestamp();
    void setDdlTimestamp(int64_t value);

    /// <summary>
    /// DDL内容。
    /// </summary>

    std::string getDdlText() const;
    bool ddlTextIsSet() const;
    void unsetddlText();
    void setDdlText(const std::string& value);

    /// <summary>
    /// DDL执行结果。false执行失败，true执行成功。
    /// </summary>

    bool isExeResult() const;
    bool exeResultIsSet() const;
    void unsetexeResult();
    void setExeResult(bool value);

    /// <summary>
    /// 数据记录时间。
    /// </summary>

    int64_t getRecordTime() const;
    bool recordTimeIsSet() const;
    void unsetrecordTime();
    void setRecordTime(int64_t value);

    /// <summary>
    /// DDL告警清理时间。
    /// </summary>

    int64_t getCleanTime() const;
    bool cleanTimeIsSet() const;
    void unsetcleanTime();
    void setCleanTime(int64_t value);


protected:
    int64_t seqno_;
    bool seqnoIsSet_;
    std::string checkpoint_;
    bool checkpointIsSet_;
    int32_t status_;
    bool statusIsSet_;
    int64_t ddlTimestamp_;
    bool ddlTimestampIsSet_;
    std::string ddlText_;
    bool ddlTextIsSet_;
    bool exeResult_;
    bool exeResultIsSet_;
    int64_t recordTime_;
    bool recordTimeIsSet_;
    int64_t cleanTime_;
    bool cleanTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DdlAlarmResp_H_
