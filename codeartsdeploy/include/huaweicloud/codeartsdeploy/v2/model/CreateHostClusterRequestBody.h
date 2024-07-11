
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CreateHostClusterRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CreateHostClusterRequestBody_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 主机集群详细信息
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  CreateHostClusterRequestBody
    : public ModelBase
{
public:
    CreateHostClusterRequestBody();
    virtual ~CreateHostClusterRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateHostClusterRequestBody members

    /// <summary>
    /// 主机集群名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 操作系统：windows|linux
    /// </summary>

    std::string getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const std::string& value);

    /// <summary>
    /// slave集群id，默认为null时使用默认slave集群，用户自定义slave时为slave集群id
    /// </summary>

    std::string getSlaveClusterId() const;
    bool slaveClusterIdIsSet() const;
    void unsetslaveClusterId();
    void setSlaveClusterId(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 主机集群是否为代理机接入模式， 1：是 0：否
    /// </summary>

    int32_t getIsProxyMode() const;
    bool isProxyModeIsSet() const;
    void unsetisProxyMode();
    void setIsProxyMode(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string os_;
    bool osIsSet_;
    std::string slaveClusterId_;
    bool slaveClusterIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t isProxyMode_;
    bool isProxyModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CreateHostClusterRequestBody_H_
