
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_SubJobEntities_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_SubJobEntities_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  SubJobEntities
    : public ModelBase
{
public:
    SubJobEntities();
    virtual ~SubJobEntities();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SubJobEntities members

    /// <summary>
    /// 云服务器相关操作显示server_id。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 网卡相关操作显示nic_id。
    /// </summary>

    std::string getNicId() const;
    bool nicIdIsSet() const;
    void unsetnicId();
    void setNicId(const std::string& value);

    /// <summary>
    /// 子任务执行失败的具体原因。
    /// </summary>

    std::string getErrorcodeMessage() const;
    bool errorcodeMessageIsSet() const;
    void unseterrorcodeMessage();
    void setErrorcodeMessage(const std::string& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    std::string nicId_;
    bool nicIdIsSet_;
    std::string errorcodeMessage_;
    bool errorcodeMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_SubJobEntities_H_
