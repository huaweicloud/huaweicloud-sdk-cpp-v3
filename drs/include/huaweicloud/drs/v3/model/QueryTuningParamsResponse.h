
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryTuningParamsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryTuningParamsResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/TuningParameter.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryTuningParamsResponse
    : public ModelBase, public HttpResponse
{
public:
    QueryTuningParamsResponse();
    virtual ~QueryTuningParamsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTuningParamsResponse members

    /// <summary>
    /// 全量调优参数
    /// </summary>

    std::vector<TuningParameter>& getFullSync();
    bool fullSyncIsSet() const;
    void unsetfullSync();
    void setFullSync(const std::vector<TuningParameter>& value);

    /// <summary>
    /// 增量抓取调优参数
    /// </summary>

    std::vector<TuningParameter>& getIncreCapture();
    bool increCaptureIsSet() const;
    void unsetincreCapture();
    void setIncreCapture(const std::vector<TuningParameter>& value);

    /// <summary>
    /// 增量回放调优参数
    /// </summary>

    std::vector<TuningParameter>& getIncreApply();
    bool increApplyIsSet() const;
    void unsetincreApply();
    void setIncreApply(const std::vector<TuningParameter>& value);

    /// <summary>
    /// 增量日志拉取调优参数
    /// </summary>

    std::vector<TuningParameter>& getIncreRelay();
    bool increRelayIsSet() const;
    void unsetincreRelay();
    void setIncreRelay(const std::vector<TuningParameter>& value);

    /// <summary>
    /// 参数修改是否成功，查询参数时不返回该字段。
    /// </summary>

    std::string getModifyResult() const;
    bool modifyResultIsSet() const;
    void unsetmodifyResult();
    void setModifyResult(const std::string& value);


protected:
    std::vector<TuningParameter> fullSync_;
    bool fullSyncIsSet_;
    std::vector<TuningParameter> increCapture_;
    bool increCaptureIsSet_;
    std::vector<TuningParameter> increApply_;
    bool increApplyIsSet_;
    std::vector<TuningParameter> increRelay_;
    bool increRelayIsSet_;
    std::string modifyResult_;
    bool modifyResultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryTuningParamsResponse_H_
