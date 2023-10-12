
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ParamGroupHistoryResult_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ParamGroupHistoryResult_H_


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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ParamGroupHistoryResult
    : public ModelBase
{
public:
    ParamGroupHistoryResult();
    virtual ~ParamGroupHistoryResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ParamGroupHistoryResult members

    /// <summary>
    /// 参数名称
    /// </summary>

    std::string getParameterName() const;
    bool parameterNameIsSet() const;
    void unsetparameterName();
    void setParameterName(const std::string& value);

    /// <summary>
    /// 旧值
    /// </summary>

    std::string getOldValue() const;
    bool oldValueIsSet() const;
    void unsetoldValue();
    void setOldValue(const std::string& value);

    /// <summary>
    /// 新值
    /// </summary>

    std::string getNewValue() const;
    bool newValueIsSet() const;
    void unsetnewValue();
    void setNewValue(const std::string& value);

    /// <summary>
    /// 更新结果 成功：SUCCESS 失败： FAILED
    /// </summary>

    std::string getUpdateResult() const;
    bool updateResultIsSet() const;
    void unsetupdateResult();
    void setUpdateResult(const std::string& value);

    /// <summary>
    /// 是否已应用 true：已应用 false：未应用
    /// </summary>

    bool isApplied() const;
    bool appliedIsSet() const;
    void unsetapplied();
    void setApplied(bool value);

    /// <summary>
    /// 修改时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 应用时间
    /// </summary>

    std::string getApplyTime() const;
    bool applyTimeIsSet() const;
    void unsetapplyTime();
    void setApplyTime(const std::string& value);


protected:
    std::string parameterName_;
    bool parameterNameIsSet_;
    std::string oldValue_;
    bool oldValueIsSet_;
    std::string newValue_;
    bool newValueIsSet_;
    std::string updateResult_;
    bool updateResultIsSet_;
    bool applied_;
    bool appliedIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string applyTime_;
    bool applyTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ParamGroupHistoryResult_H_
