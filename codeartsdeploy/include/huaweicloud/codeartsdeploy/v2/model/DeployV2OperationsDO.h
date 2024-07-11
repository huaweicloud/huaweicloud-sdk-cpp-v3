
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeployV2OperationsDO_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeployV2OperationsDO_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  DeployV2OperationsDO
    : public ModelBase
{
public:
    DeployV2OperationsDO();
    virtual ~DeployV2OperationsDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeployV2OperationsDO members

    /// <summary>
    /// 步骤id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 步骤名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 步骤描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 下载地址
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 步骤详细定义
    /// </summary>

    std::string getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::string& value);

    /// <summary>
    /// 入口函数
    /// </summary>

    std::string getEntrance() const;
    bool entranceIsSet() const;
    void unsetentrance();
    void setEntrance(const std::string& value);

    /// <summary>
    /// 版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 模块id
    /// </summary>

    std::string getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string params_;
    bool paramsIsSet_;
    std::string entrance_;
    bool entranceIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeployV2OperationsDO_H_
