
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlConfigurationResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlConfigurationResponse_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ConfigurationSummary2.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowGaussMySqlConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowGaussMySqlConfigurationResponse();
    virtual ~ShowGaussMySqlConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowGaussMySqlConfigurationResponse members

    /// <summary>
    /// 
    /// </summary>

    ConfigurationSummary2 getConfigurations() const;
    bool configurationsIsSet() const;
    void unsetconfigurations();
    void setConfigurations(const ConfigurationSummary2& value);

    /// <summary>
    /// 参数名和参数值映射关系。用户可以基于默认参数模板的参数，自定义的参数值。
    /// </summary>

    std::map<std::string, std::string>& getParameterValues();
    bool parameterValuesIsSet() const;
    void unsetparameterValues();
    void setParameterValues(const std::map<std::string, std::string>& value);


protected:
    ConfigurationSummary2 configurations_;
    bool configurationsIsSet_;
    std::map<std::string, std::string> parameterValues_;
    bool parameterValuesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlConfigurationResponse_H_
