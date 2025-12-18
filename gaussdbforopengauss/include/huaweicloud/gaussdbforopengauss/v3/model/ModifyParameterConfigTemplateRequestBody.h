
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyParameterConfigTemplateRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyParameterConfigTemplateRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ModifyParameterConfigTemplateRequestBody
    : public ModelBase
{
public:
    ModifyParameterConfigTemplateRequestBody();
    virtual ~ModifyParameterConfigTemplateRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyParameterConfigTemplateRequestBody members

    /// <summary>
    /// 参数值对象Map&lt;String,String&gt;，用户基于默认参数模板自定义的参数值。
    /// </summary>

    std::map<std::string, std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 参数组模板描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::map<std::string, std::string> values_;
    bool valuesIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyParameterConfigTemplateRequestBody_H_
