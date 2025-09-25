
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_TemplateParam_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_TemplateParam_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/Constraint.h>
#include <string>
#include <huaweicloud/codeartspipeline/v2/model/ParamTypeLimits.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 流水线参数
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  TemplateParam
    : public ModelBase
{
public:
    TemplateParam();
    virtual ~TemplateParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateParam members

    /// <summary>
    /// 是否必须
    /// </summary>

    std::string getRequired() const;
    bool requiredIsSet() const;
    void unsetrequired();
    void setRequired(const std::string& value);

    /// <summary>
    /// 是否可见
    /// </summary>

    std::string getVisible() const;
    bool visibleIsSet() const;
    void unsetvisible();
    void setVisible(const std::string& value);

    /// <summary>
    /// 流水线参数名字
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 流水线参数值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 流水线参数描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 流水线参数类型
    /// </summary>

    std::string getParamtype() const;
    bool paramtypeIsSet() const;
    void unsetparamtype();
    void setParamtype(const std::string& value);

    /// <summary>
    /// 流水线参数展示类型
    /// </summary>

    std::string getDisplayType() const;
    bool displayTypeIsSet() const;
    void unsetdisplayType();
    void setDisplayType(const std::string& value);

    /// <summary>
    /// 流水线参数展示名字
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 是否静态参数
    /// </summary>

    bool isIsStatic() const;
    bool isStaticIsSet() const;
    void unsetisStatic();
    void setIsStatic(bool value);

    /// <summary>
    /// 是否默认参数
    /// </summary>

    bool isIsDefault() const;
    bool isDefaultIsSet() const;
    void unsetisDefault();
    void setIsDefault(bool value);

    /// <summary>
    /// array类型数据
    /// </summary>

    std::vector<ParamTypeLimits>& getLimits();
    bool limitsIsSet() const;
    void unsetlimits();
    void setLimits(const std::vector<ParamTypeLimits>& value);

    /// <summary>
    /// array类型数据
    /// </summary>

    std::vector<Constraint>& getConstraints();
    bool constraintsIsSet() const;
    void unsetconstraints();
    void setConstraints(const std::vector<Constraint>& value);


protected:
    std::string required_;
    bool requiredIsSet_;
    std::string visible_;
    bool visibleIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string paramtype_;
    bool paramtypeIsSet_;
    std::string displayType_;
    bool displayTypeIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    bool isStatic_;
    bool isStaticIsSet_;
    bool isDefault_;
    bool isDefaultIsSet_;
    std::vector<ParamTypeLimits> limits_;
    bool limitsIsSet_;
    std::vector<Constraint> constraints_;
    bool constraintsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_TemplateParam_H_
