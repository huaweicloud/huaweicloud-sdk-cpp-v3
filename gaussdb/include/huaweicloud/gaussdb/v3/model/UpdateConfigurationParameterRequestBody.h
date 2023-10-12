
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateConfigurationParameterRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateConfigurationParameterRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateConfigurationParameterRequestBody
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
    /// 参数模板名称。  取值范围：长度1到64个字符之间，区分大小写字母，可包含字母、数字、中划线、下划线或句点，不能包含其他特殊字符。参数模板描述，参数名和参数值映射关系三项不能同时为空。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数模板描述。默认为空。取值范围：长度不超过256个字符，且不能包含回车和特殊字符 ! &lt; \&quot; &#x3D; &#39; &gt; &amp;
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 参数名和参数值映射关系。用户可以基于默认参数模板的参数，自定义的参数值。不传入该参数，则保持原参数信息。
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateConfigurationParameterRequestBody_H_
