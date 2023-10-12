
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_Step_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_Step_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 部署步骤
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  Step
    : public ModelBase
{
public:
    Step();
    virtual ~Step();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Step members

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数
    /// </summary>

    std::map<std::string, std::string>& getParams();
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 是否开启
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::map<std::string, std::string> params_;
    bool paramsIsSet_;
    bool enable_;
    bool enableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_Step_H_
