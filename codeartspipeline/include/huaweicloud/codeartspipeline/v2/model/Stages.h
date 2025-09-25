
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Stages_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Stages_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 流水线阶段执行信息
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  Stages
    : public ModelBase
{
public:
    Stages();
    virtual ~Stages();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Stages members

    /// <summary>
    /// 阶段执行结果。取值及含义：success：成功；error：失败；aborted：终止
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 阶段执行状态。取值和含义:waiting:等待;running:执行中;verifying:待审核;suspending:挂起;completed:完成
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 阶段名字
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 阶段运行参数
    /// </summary>

    Object getParameters() const;
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const Object& value);

    /// <summary>
    /// 阶段顺序
    /// </summary>

    int32_t getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(int32_t value);

    /// <summary>
    /// 阶段类型
    /// </summary>

    std::string getDslMethod() const;
    bool dslMethodIsSet() const;
    void unsetdslMethod();
    void setDslMethod(const std::string& value);

    /// <summary>
    /// 阶段显示名称
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);


protected:
    std::string result_;
    bool resultIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string name_;
    bool nameIsSet_;
    Object parameters_;
    bool parametersIsSet_;
    int32_t order_;
    bool orderIsSet_;
    std::string dslMethod_;
    bool dslMethodIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Stages_H_
