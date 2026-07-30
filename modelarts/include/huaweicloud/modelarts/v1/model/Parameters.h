
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Parameters_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Parameters_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ParametersConstraint.h>
#include <huaweicloud/modelarts/v1/model/I18nDescription.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业的运行参数。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Parameters
    : public ModelBase
{
public:
    Parameters();
    virtual ~Parameters();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Parameters members

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

    ParametersConstraint getConstraint() const;
    bool constraintIsSet() const;
    void unsetconstraint();
    void setConstraint(const ParametersConstraint& value);

    /// <summary>
    /// 
    /// </summary>

    I18nDescription getI18nDescription() const;
    bool i18nDescriptionIsSet() const;
    void unseti18nDescription();
    void setI18nDescription(const I18nDescription& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    ParametersConstraint constraint_;
    bool constraintIsSet_;
    I18nDescription i18nDescription_;
    bool i18nDescriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Parameters_H_
