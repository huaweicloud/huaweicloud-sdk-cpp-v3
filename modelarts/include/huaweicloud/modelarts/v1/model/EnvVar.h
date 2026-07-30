
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EnvVar_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EnvVar_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 精调训练环境变量信息
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  EnvVar
    : public ModelBase
{
public:
    EnvVar();
    virtual ~EnvVar();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnvVar members

    /// <summary>
    /// 标签
    /// </summary>

    std::string getLabel() const;
    bool labelIsSet() const;
    void unsetlabel();
    void setLabel(const std::string& value);

    /// <summary>
    /// 描述信息
    /// </summary>

    std::string getDes() const;
    bool desIsSet() const;
    void unsetdes();
    void setDes(const std::string& value);

    /// <summary>
    /// 环境变量名称
    /// </summary>

    std::string getEnvName() const;
    bool envNameIsSet() const;
    void unsetenvName();
    void setEnvName(const std::string& value);

    /// <summary>
    /// 环境变量类型
    /// </summary>

    std::string getEnvType() const;
    bool envTypeIsSet() const;
    void unsetenvType();
    void setEnvType(const std::string& value);

    /// <summary>
    /// 环境变量值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 环境变量是否可修改
    /// </summary>

    bool isModifiable() const;
    bool modifiableIsSet() const;
    void unsetmodifiable();
    void setModifiable(bool value);

    /// <summary>
    /// 环境变量是否展示
    /// </summary>

    bool isDisplayable() const;
    bool displayableIsSet() const;
    void unsetdisplayable();
    void setDisplayable(bool value);

    /// <summary>
    /// 环境变量使用阶段
    /// </summary>

    std::vector<std::string>& getUsedSteps();
    bool usedStepsIsSet() const;
    void unsetusedSteps();
    void setUsedSteps(const std::vector<std::string>& value);


protected:
    std::string label_;
    bool labelIsSet_;
    std::string des_;
    bool desIsSet_;
    std::string envName_;
    bool envNameIsSet_;
    std::string envType_;
    bool envTypeIsSet_;
    std::string value_;
    bool valueIsSet_;
    bool modifiable_;
    bool modifiableIsSet_;
    bool displayable_;
    bool displayableIsSet_;
    std::vector<std::string> usedSteps_;
    bool usedStepsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EnvVar_H_
