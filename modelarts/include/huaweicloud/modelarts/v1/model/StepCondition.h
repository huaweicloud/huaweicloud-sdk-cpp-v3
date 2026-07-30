
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StepCondition_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StepCondition_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 条件节点执行条件。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  StepCondition
    : public ModelBase
{
public:
    StepCondition();
    virtual ~StepCondition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StepCondition members

    /// <summary>
    /// 判断类型，例如&#x3D;&#x3D;（等于）、!&#x3D;（不等于）、&gt;（大于）、&gt;&#x3D;（大于等于）、&lt;（小于）、&lt;&#x3D;（小于等于）、in（包含）、or（或）。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 节点执行条件为true时的分支。
    /// </summary>

    Object getLeft() const;
    bool leftIsSet() const;
    void unsetleft();
    void setLeft(const Object& value);

    /// <summary>
    /// 节点执行条件为false时的分支。
    /// </summary>

    Object getRight() const;
    bool rightIsSet() const;
    void unsetright();
    void setRight(const Object& value);


protected:
    std::string type_;
    bool typeIsSet_;
    Object left_;
    bool leftIsSet_;
    Object right_;
    bool rightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StepCondition_H_
