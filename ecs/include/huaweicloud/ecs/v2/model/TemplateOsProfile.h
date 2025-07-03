
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateOsProfile_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateOsProfile_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// OS属性
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  TemplateOsProfile
    : public ModelBase
{
public:
    TemplateOsProfile();
    virtual ~TemplateOsProfile();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateOsProfile members

    /// <summary>
    /// 秘钥名称
    /// </summary>

    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);

    /// <summary>
    /// 注入脚本，会导致请求过大，影响虚拟机表。1. 和密码的使用冲突 2. 超大文本问题。
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);

    /// <summary>
    /// 委托名称。实际需要多委托。
    /// </summary>

    std::string getIamAgencyName() const;
    bool iamAgencyNameIsSet() const;
    void unsetiamAgencyName();
    void setIamAgencyName(const std::string& value);

    /// <summary>
    /// 开启主机监控服务
    /// </summary>

    bool isEnableMonitoringService() const;
    bool enableMonitoringServiceIsSet() const;
    void unsetenableMonitoringService();
    void setEnableMonitoringService(bool value);


protected:
    std::string keyName_;
    bool keyNameIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string iamAgencyName_;
    bool iamAgencyNameIsSet_;
    bool enableMonitoringService_;
    bool enableMonitoringServiceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateOsProfile_H_
