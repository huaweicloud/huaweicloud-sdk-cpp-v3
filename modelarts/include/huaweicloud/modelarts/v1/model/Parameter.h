
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Parameter_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Parameter_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Parameter_constraint.h>
#include <huaweicloud/modelarts/v1/model/Parameter_i18n_description.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业、算法依赖参数。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Parameter
    : public ModelBase
{
public:
    Parameter();
    virtual ~Parameter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Parameter members

    /// <summary>
    /// 参数名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数值。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 参数描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Parameter_constraint getConstraint() const;
    bool constraintIsSet() const;
    void unsetconstraint();
    void setConstraint(const Parameter_constraint& value);

    /// <summary>
    /// 
    /// </summary>

    Parameter_i18n_description getI18nDescription() const;
    bool i18nDescriptionIsSet() const;
    void unseti18nDescription();
    void setI18nDescription(const Parameter_i18n_description& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    Parameter_constraint constraint_;
    bool constraintIsSet_;
    Parameter_i18n_description i18nDescription_;
    bool i18nDescriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Parameter_H_
