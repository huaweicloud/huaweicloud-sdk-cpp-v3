
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Parameter_i18n_description_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Parameter_i18n_description_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 国际化描述。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Parameter_i18n_description
    : public ModelBase
{
public:
    Parameter_i18n_description();
    virtual ~Parameter_i18n_description();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Parameter_i18n_description members

    /// <summary>
    /// 国际语种[，可选值如下： - zh-cn（中文） - en-us（英文）](tag:hc,hk)
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 国际化语种的描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string language_;
    bool languageIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Parameter_i18n_description_H_
