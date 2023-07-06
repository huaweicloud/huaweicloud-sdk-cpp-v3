
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyTuningParams_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyTuningParams_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改高级设置信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ModifyTuningParams
    : public ModelBase
{
public:
    ModifyTuningParams();
    virtual ~ModifyTuningParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyTuningParams members

    /// <summary>
    /// 全量参数的参数名及对应的取值。
    /// </summary>

    std::map<std::string, std::string>& getFullSync();
    bool fullSyncIsSet() const;
    void unsetfullSync();
    void setFullSync(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 增量抓取参数的参数名及对应的取值。
    /// </summary>

    std::map<std::string, std::string>& getIncreCapture();
    bool increCaptureIsSet() const;
    void unsetincreCapture();
    void setIncreCapture(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 增量回放参数的参数名及对应的取值。
    /// </summary>

    std::map<std::string, std::string>& getIncreApply();
    bool increApplyIsSet() const;
    void unsetincreApply();
    void setIncreApply(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 增量日志拉取参数的参数名及对应的取值。
    /// </summary>

    std::map<std::string, std::string>& getIncreRelay();
    bool increRelayIsSet() const;
    void unsetincreRelay();
    void setIncreRelay(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 是否一键还原到默认值。
    /// </summary>

    bool isRecovery() const;
    bool recoveryIsSet() const;
    void unsetrecovery();
    void setRecovery(bool value);


protected:
    std::map<std::string, std::string> fullSync_;
    bool fullSyncIsSet_;
    std::map<std::string, std::string> increCapture_;
    bool increCaptureIsSet_;
    std::map<std::string, std::string> increApply_;
    bool increApplyIsSet_;
    std::map<std::string, std::string> increRelay_;
    bool increRelayIsSet_;
    bool recovery_;
    bool recoveryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyTuningParams_H_
