
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListAllConfigItemByTypeRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListAllConfigItemByTypeRequestBody_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListAllConfigItemByTypeRequestBody
    : public ModelBase
{
public:
    ListAllConfigItemByTypeRequestBody();
    virtual ~ListAllConfigItemByTypeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAllConfigItemByTypeRequestBody members

    /// <summary>
    /// 系统配置，服务自己配置{system、service}
    /// </summary>

    std::string getConfigType() const;
    bool configTypeIsSet() const;
    void unsetconfigType();
    void setConfigType(const std::string& value);

    /// <summary>
    /// 配置类型集合
    /// </summary>

    std::vector<std::string>& getTypes();
    bool typesIsSet() const;
    void unsettypes();
    void setTypes(const std::vector<std::string>& value);


protected:
    std::string configType_;
    bool configTypeIsSet_;
    std::vector<std::string> types_;
    bool typesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListAllConfigItemByTypeRequestBody_H_
