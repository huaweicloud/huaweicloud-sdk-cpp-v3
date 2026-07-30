
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DataRequirement_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DataRequirement_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <vector>
#include <huaweicloud/modelarts/v1/model/Constraint.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作流需要的数据。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DataRequirement
    : public ModelBase
{
public:
    DataRequirement();
    virtual ~DataRequirement();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataRequirement members

    /// <summary>
    /// 训练数据的名称。填写1-64位，仅包含英文、数字、下划线（_）和中划线（-），并且以英文开头的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据来源类型。枚举值如下： - dataset：数据集 - obs：OBS - swr：SWR - model_list：AI应用列表 - label_task：标注任务 - service：在线服务
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据约束条件。
    /// </summary>

    std::vector<Constraint>& getConditions();
    bool conditionsIsSet() const;
    void unsetconditions();
    void setConditions(const std::vector<Constraint>& value);

    /// <summary>
    /// 数据的值。
    /// </summary>

    std::map<std::string, Object>& getValue();
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::map<std::string, Object>& value);

    /// <summary>
    /// 使用了这条数据的工作流节点。
    /// </summary>

    std::vector<std::string>& getUsedSteps();
    bool usedStepsIsSet() const;
    void unsetusedSteps();
    void setUsedSteps(const std::vector<std::string>& value);

    /// <summary>
    /// 延时参数标记。
    /// </summary>

    bool isDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::vector<Constraint> conditions_;
    bool conditionsIsSet_;
    std::map<std::string, Object> value_;
    bool valueIsSet_;
    std::vector<std::string> usedSteps_;
    bool usedStepsIsSet_;
    bool delay_;
    bool delayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DataRequirement_H_
