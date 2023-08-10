
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ParamTypeLimits_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ParamTypeLimits_H_

#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 枚举类型参数实体类
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ParamTypeLimits
    : public ModelBase
{
public:
    ParamTypeLimits();
    virtual ~ParamTypeLimits();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ParamTypeLimits members

    /// <summary>
    /// 枚举值可选参数
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ParamTypeLimits_H_
