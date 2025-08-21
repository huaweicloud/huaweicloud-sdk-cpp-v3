
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_TemplateParamVariable_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_TemplateParamVariable_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/rgc/v1/model/TemplateParamVariableValidation.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 模板的部署参数的变量。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  TemplateParamVariable
    : public ModelBase
{
public:
    TemplateParamVariable();
    virtual ~TemplateParamVariable();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateParamVariable members

    /// <summary>
    /// 变量默认值。
    /// </summary>

    Object getDefault() const;
    bool defaultIsSet() const;
    void unsetdefault();
    void setDefault(const Object& value);

    /// <summary>
    /// 变量名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 变量描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 变量是否可以为空。
    /// </summary>

    bool isNullable() const;
    bool nullableIsSet() const;
    void unsetnullable();
    void setNullable(bool value);

    /// <summary>
    /// 变量是否为敏感字段。
    /// </summary>

    bool isSensitive() const;
    bool sensitiveIsSet() const;
    void unsetsensitive();
    void setSensitive(bool value);

    /// <summary>
    /// 变量类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 模板的部署参数变量的校验规则。
    /// </summary>

    std::vector<TemplateParamVariableValidation>& getValidations();
    bool validationsIsSet() const;
    void unsetvalidations();
    void setValidations(const std::vector<TemplateParamVariableValidation>& value);


protected:
    Object default_;
    bool defaultIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool nullable_;
    bool nullableIsSet_;
    bool sensitive_;
    bool sensitiveIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::vector<TemplateParamVariableValidation> validations_;
    bool validationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_TemplateParamVariable_H_
