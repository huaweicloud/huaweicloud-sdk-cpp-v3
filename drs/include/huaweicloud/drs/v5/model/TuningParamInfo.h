
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_TuningParamInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_TuningParamInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/TuningParameter.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 高级设置信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  TuningParamInfo
    : public ModelBase
{
public:
    TuningParamInfo();
    virtual ~TuningParamInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TuningParamInfo members

    /// <summary>
    /// 全量调优参数。
    /// </summary>

    std::vector<TuningParameter>& getFullSync();
    bool fullSyncIsSet() const;
    void unsetfullSync();
    void setFullSync(const std::vector<TuningParameter>& value);

    /// <summary>
    /// 增量抓取调优参数。
    /// </summary>

    std::vector<TuningParameter>& getIncreCapture();
    bool increCaptureIsSet() const;
    void unsetincreCapture();
    void setIncreCapture(const std::vector<TuningParameter>& value);

    /// <summary>
    /// 增量回放调优参数。
    /// </summary>

    std::vector<TuningParameter>& getIncreApply();
    bool increApplyIsSet() const;
    void unsetincreApply();
    void setIncreApply(const std::vector<TuningParameter>& value);

    /// <summary>
    /// 增量日志拉取调优参数。
    /// </summary>

    std::vector<TuningParameter>& getIncreRelay();
    bool increRelayIsSet() const;
    void unsetincreRelay();
    void setIncreRelay(const std::vector<TuningParameter>& value);


protected:
    std::vector<TuningParameter> fullSync_;
    bool fullSyncIsSet_;
    std::vector<TuningParameter> increCapture_;
    bool increCaptureIsSet_;
    std::vector<TuningParameter> increApply_;
    bool increApplyIsSet_;
    std::vector<TuningParameter> increRelay_;
    bool increRelayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_TuningParamInfo_H_
