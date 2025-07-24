
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_Environment_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_Environment_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  Environment
    : public ModelBase
{
public:
    Environment();
    virtual ~Environment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Environment members

    /// <summary>
    /// 环境分组id
    /// </summary>

    std::string getEnvironmentId() const;
    bool environmentIdIsSet() const;
    void unsetenvironmentId();
    void setEnvironmentId(const std::string& value);

    /// <summary>
    /// 环境分组名
    /// </summary>

    std::string getEnvironmentName() const;
    bool environmentNameIsSet() const;
    void unsetenvironmentName();
    void setEnvironmentName(const std::string& value);

    /// <summary>
    /// 环境分组描述
    /// </summary>

    std::string getEnvironmentDescription() const;
    bool environmentDescriptionIsSet() const;
    void unsetenvironmentDescription();
    void setEnvironmentDescription(const std::string& value);

    /// <summary>
    /// 是否是默认环境
    /// </summary>

    bool isIsDefault() const;
    bool isDefaultIsSet() const;
    void unsetisDefault();
    void setIsDefault(bool value);


protected:
    std::string environmentId_;
    bool environmentIdIsSet_;
    std::string environmentName_;
    bool environmentNameIsSet_;
    std::string environmentDescription_;
    bool environmentDescriptionIsSet_;
    bool isDefault_;
    bool isDefaultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_Environment_H_
