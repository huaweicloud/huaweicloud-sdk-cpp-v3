
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_TargetControl_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_TargetControl_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 治理策略概要。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  TargetControl
    : public ModelBase
{
public:
    TargetControl();
    virtual ~TargetControl();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TargetControl members

    /// <summary>
    /// 管理员账号ID。
    /// </summary>

    std::string getManageAccountId() const;
    bool manageAccountIdIsSet() const;
    void unsetmanageAccountId();
    void setManageAccountId(const std::string& value);

    /// <summary>
    /// 控制策略标识。
    /// </summary>

    std::string getControlIdentifier() const;
    bool controlIdentifierIsSet() const;
    void unsetcontrolIdentifier();
    void setControlIdentifier(const std::string& value);

    /// <summary>
    /// 控制策略启用状态。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 控制策略当前版本号。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 控制策略名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 控制策略描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 控制策略目标。
    /// </summary>

    std::string getControlObjective() const;
    bool controlObjectiveIsSet() const;
    void unsetcontrolObjective();
    void setControlObjective(const std::string& value);

    /// <summary>
    /// 控制策略类型。包括主动性控制策略Proactive、检测性控制策略Detective、预防性控制策略Preventive。
    /// </summary>

    std::string getBehavior() const;
    bool behaviorIsSet() const;
    void unsetbehavior();
    void setBehavior(const std::string& value);

    /// <summary>
    /// 控制策略来源。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 区域选项，取值有两种分别是：区域的regional和全局的global。
    /// </summary>

    std::string getRegionalPreference() const;
    bool regionalPreferenceIsSet() const;
    void unsetregionalPreference();
    void setRegionalPreference(const std::string& value);

    /// <summary>
    /// 控制策略必须性。
    /// </summary>

    std::string getGuidance() const;
    bool guidanceIsSet() const;
    void unsetguidance();
    void setGuidance(const std::string& value);

    /// <summary>
    /// 控制策略所属服务。
    /// </summary>

    std::string getService() const;
    bool serviceIsSet() const;
    void unsetservice();
    void setService(const std::string& value);

    /// <summary>
    /// 策略类别。
    /// </summary>

    std::string getImplementation() const;
    bool implementationIsSet() const;
    void unsetimplementation();
    void setImplementation(const std::string& value);


protected:
    std::string manageAccountId_;
    bool manageAccountIdIsSet_;
    std::string controlIdentifier_;
    bool controlIdentifierIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string controlObjective_;
    bool controlObjectiveIsSet_;
    std::string behavior_;
    bool behaviorIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string regionalPreference_;
    bool regionalPreferenceIsSet_;
    std::string guidance_;
    bool guidanceIsSet_;
    std::string service_;
    bool serviceIsSet_;
    std::string implementation_;
    bool implementationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_TargetControl_H_
