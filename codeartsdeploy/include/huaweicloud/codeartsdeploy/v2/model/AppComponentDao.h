
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppComponentDao_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppComponentDao_H_


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
/// 应用和AOM应用组件对应关系
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  AppComponentDao
    : public ModelBase
{
public:
    AppComponentDao();
    virtual ~AppComponentDao();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AppComponentDao members

    /// <summary>
    /// 部署任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// AOM应用id
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// AOM应用名称
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// AOM应用组件id
    /// </summary>

    std::string getCompId() const;
    bool compIdIsSet() const;
    void unsetcompId();
    void setCompId(const std::string& value);

    /// <summary>
    /// AOM应用组件名称
    /// </summary>

    std::string getCompName() const;
    bool compNameIsSet() const;
    void unsetcompName();
    void setCompName(const std::string& value);

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 局点信息
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// AOM应用组件是否生效，0表示初始化，1表示执行成功，已生效
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string compId_;
    bool compIdIsSet_;
    std::string compName_;
    bool compNameIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string state_;
    bool stateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_AppComponentDao_H_
