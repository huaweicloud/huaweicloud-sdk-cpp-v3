
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_KeyValueDO_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_KeyValueDO_H_


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
/// 部署应用时传递的动态参数
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  KeyValueDO
    : public ModelBase
{
public:
    KeyValueDO();
    virtual ~KeyValueDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KeyValueDO members

    /// <summary>
    /// 部署应用时传递的参数名称
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 部署应用时传递的参数值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_KeyValueDO_H_
