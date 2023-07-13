
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateServersResult_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateServersResult_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaServerSecurityGroup.h>
#include <huaweicloud/ecs/v2/model/NovaLink.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_ECS_V2_EXPORT  NovaCreateServersResult
    : public ModelBase
{
public:
    NovaCreateServersResult();
    virtual ~NovaCreateServersResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaCreateServersResult members

    /// <summary>
    /// 弹性云服务器uuid。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 弹性云服务器URI自描述信息。
    /// </summary>

    std::vector<NovaLink>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<NovaLink>& value);

    /// <summary>
    /// 弹性云服务器所在安全组。
    /// </summary>

    std::vector<NovaServerSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<NovaServerSecurityGroup>& value);

    /// <summary>
    /// diskConfig方式。  - MANUAL，镜像空间不会扩展。 - AUTO，系统盘镜像空间会自动扩展为与flavor大小一致。
    /// </summary>

    std::string getOSDCFdiskConfig() const;
    bool oSDCFdiskConfigIsSet() const;
    void unsetoSDCFdiskConfig();
    void setOSDCFdiskConfig(const std::string& value);

    /// <summary>
    /// 通过返回的reservation_id，可以过滤查询到本次创建的弹性云服务器。  &gt; 说明： &gt;  &gt; 批量创建弹性云服务器时，支持使用该字段。
    /// </summary>

    std::string getReservationId() const;
    bool reservationIdIsSet() const;
    void unsetreservationId();
    void setReservationId(const std::string& value);

    /// <summary>
    /// Windows弹性云服务器Administrator用户的密码。
    /// </summary>

    std::string getAdminPass() const;
    bool adminPassIsSet() const;
    void unsetadminPass();
    void setAdminPass(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<NovaLink> links_;
    bool linksIsSet_;
    std::vector<NovaServerSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::string oSDCFdiskConfig_;
    bool oSDCFdiskConfigIsSet_;
    std::string reservationId_;
    bool reservationIdIsSet_;
    std::string adminPass_;
    bool adminPassIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateServersResult_H_
