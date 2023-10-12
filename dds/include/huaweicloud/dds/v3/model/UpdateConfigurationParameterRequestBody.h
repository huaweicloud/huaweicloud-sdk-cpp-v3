
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateConfigurationParameterRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateConfigurationParameterRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  UpdateConfigurationParameterRequestBody
    : public ModelBase
{
public:
    UpdateConfigurationParameterRequestBody();
    virtual ~UpdateConfigurationParameterRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateConfigurationParameterRequestBody members

    /// <summary>
    /// 参数模板名称。最长64个字符，只允许大写字母、小写字母、数字和特殊字符中划线、下划线和点。不传该参数时不修改参数模板名称。（参数模板名称，参数模板描述，参数名和参数值映射关系三项不能同时为空）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数模板描述。最长256位，不支持!&lt;&gt;&#x3D;&amp;\&quot;&#39;特殊字符。不传该参数时不修改参数模板描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 参数名和参数值映射关系。用户可以基于默认参数模板的参数，自定义的参数值。
    /// </summary>

    std::map<std::string, std::string>& getParameterValues();
    bool parameterValuesIsSet() const;
    void unsetparameterValues();
    void setParameterValues(const std::map<std::string, std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::map<std::string, std::string> parameterValues_;
    bool parameterValuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateConfigurationParameterRequestBody_H_
