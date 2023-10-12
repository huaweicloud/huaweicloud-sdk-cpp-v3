
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ConfigInfoDO_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ConfigInfoDO_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/ParamTypeLimits.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 部署参数类
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ConfigInfoDO
    : public ModelBase
{
public:
    ConfigInfoDO();
    virtual ~ConfigInfoDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigInfoDO members

    /// <summary>
    /// 部署参数名称，用户可自定义
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 类型，如果填写name字段，则type必选,若type为空则默认为text
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 部署参数值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 部署任务id，创建应用后由系统自动生成
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 表示是否为静态参数，值为1时不支持部署时变更参数，值为0时支持，并且也会把该参数上报流水线
    /// </summary>

    int32_t getStaticStatus() const;
    bool staticStatusIsSet() const;
    void unsetstaticStatus();
    void setStaticStatus(int32_t value);

    /// <summary>
    /// 当参数类型为enum枚举类型时，必须填写可选值
    /// </summary>

    std::vector<ParamTypeLimits>& getLimits();
    bool limitsIsSet() const;
    void unsetlimits();
    void setLimits(const std::vector<ParamTypeLimits>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    int32_t staticStatus_;
    bool staticStatusIsSet_;
    std::vector<ParamTypeLimits> limits_;
    bool limitsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ConfigInfoDO_H_
