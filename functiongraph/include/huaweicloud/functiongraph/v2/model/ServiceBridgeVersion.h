
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ServiceBridgeVersion_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ServiceBridgeVersion_H_


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
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ServiceBridgeVersion
    : public ModelBase
{
public:
    ServiceBridgeVersion();
    virtual ~ServiceBridgeVersion();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceBridgeVersion members

    /// <summary>
    /// 代码包名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 代码版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 代码所在obs路径
    /// </summary>

    std::string getCodeUrl() const;
    bool codeUrlIsSet() const;
    void unsetcodeUrl();
    void setCodeUrl(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string codeUrl_;
    bool codeUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ServiceBridgeVersion_H_
