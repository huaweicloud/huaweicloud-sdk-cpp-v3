
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineParam_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineParam_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 流水线参数 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineParam
    : public ModelBase
{
public:
    PipelineParam();
    virtual ~PipelineParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineParam members

    /// <summary>
    /// **参数解释**： 流水线参数名字 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线参数值 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线参数描述 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线参数类型 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getParamType() const;
    bool paramTypeIsSet() const;
    void unsetparamType();
    void setParamType(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否静态参数。 **约束限制**： 不涉及。 **取值范围**： - true：是静态参数。 - false：不是静态参数。 **默认取值**： 不涉及。 
    /// </summary>

    bool isIsStatic() const;
    bool isStaticIsSet() const;
    void unsetisStatic();
    void setIsStatic(bool value);

    /// <summary>
    /// **参数解释**： 是否默认参数。 **约束限制**： 不涉及。 **取值范围**： - true：是默认参数。 - false：不是默认参数。 **默认取值**： 不涉及。 
    /// </summary>

    bool isIsDefault() const;
    bool isDefaultIsSet() const;
    void unsetisDefault();
    void setIsDefault(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string paramType_;
    bool paramTypeIsSet_;
    bool isStatic_;
    bool isStaticIsSet_;
    bool isDefault_;
    bool isDefaultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineParam_H_
