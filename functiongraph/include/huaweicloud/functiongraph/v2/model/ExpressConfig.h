
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ExpressConfig_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ExpressConfig_H_


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
/// 快速模式配置项
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ExpressConfig
    : public ModelBase
{
public:
    ExpressConfig();
    virtual ~ExpressConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExpressConfig members

    /// <summary>
    /// 快速模式相关配置，仅在mode配置为EXPRESS时生效 快速模式下流程的执行日志级别，当前支持： ALL: 记录所有节点的执行日志 ERROR：仅记录异常节点执行日志 NONE：不记录日志 注意：当配置为ALL和ERROR级别时租户需要开启LTS相关权限
    /// </summary>

    std::string getLogLevel() const;
    bool logLevelIsSet() const;
    void unsetlogLevel();
    void setLogLevel(const std::string& value);


protected:
    std::string logLevel_;
    bool logLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ExpressConfig_H_
