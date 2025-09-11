
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditUpgradeStep_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditUpgradeStep_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AuditUpgradeStep
    : public ModelBase
{
public:
    AuditUpgradeStep();
    virtual ~AuditUpgradeStep();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditUpgradeStep members

    /// <summary>
    /// 消息
    /// </summary>

    std::string getMsg() const;
    bool msgIsSet() const;
    void unsetmsg();
    void setMsg(const std::string& value);

    /// <summary>
    /// 结果码
    /// </summary>

    std::string getResultCode() const;
    bool resultCodeIsSet() const;
    void unsetresultCode();
    void setResultCode(const std::string& value);

    /// <summary>
    /// 步骤名称
    /// </summary>

    std::string getStepName() const;
    bool stepNameIsSet() const;
    void unsetstepName();
    void setStepName(const std::string& value);

    /// <summary>
    /// 升级时间
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);


protected:
    std::string msg_;
    bool msgIsSet_;
    std::string resultCode_;
    bool resultCodeIsSet_;
    std::string stepName_;
    bool stepNameIsSet_;
    std::string time_;
    bool timeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditUpgradeStep_H_
