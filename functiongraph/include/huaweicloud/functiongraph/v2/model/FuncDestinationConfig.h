
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FuncDestinationConfig_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FuncDestinationConfig_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数通知目标参数配置。
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  FuncDestinationConfig
    : public ModelBase
{
public:
    FuncDestinationConfig();
    virtual ~FuncDestinationConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FuncDestinationConfig members

    /// <summary>
    /// 目标类型。  - OBS：通知到OBS服务。 - SMN：通知到SMN服务。 - DIS：通知到DIS服务。 - FunctionGraph： 通知到函数服务。
    /// </summary>

    std::string getDestination() const;
    bool destinationIsSet() const;
    void unsetdestination();
    void setDestination(const std::string& value);

    /// <summary>
    /// 通知目标服务对应参数,json字符串。  - OBS：包含bucket桶，对象目录前缀prefix，对象默认expires过期时间[0~365]天，0默认不过期。 - SMN：包含smn 主题topic_urn。 - DIS：包含DIS 通道名stream_name。 - FunctionGraph：包含func_urn，函数urn
    /// </summary>

    std::string getParam() const;
    bool paramIsSet() const;
    void unsetparam();
    void setParam(const std::string& value);


protected:
    std::string destination_;
    bool destinationIsSet_;
    std::string param_;
    bool paramIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FuncDestinationConfig_H_
