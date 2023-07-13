
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageMemberRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageMemberRequestBody_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 镜像成员的状态。
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  GlanceUpdateImageMemberRequestBody
    : public ModelBase
{
public:
    GlanceUpdateImageMemberRequestBody();
    virtual ~GlanceUpdateImageMemberRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceUpdateImageMemberRequestBody members

    /// <summary>
    /// 镜像成员的状态。 取值如下： accepted：表示接受共享镜像。接受后，该镜像在用户镜像列表中可见，用户可以使用该镜像创建云服务器。 rejected：表示拒绝共享镜像。拒绝后，该镜像在用户镜像列表中不可见，但是，用户仍然可以使用该镜像创建云服务器。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 存储库ID。 如果是CBR创建的整机镜像，则在接受该共享镜像时，为必选参数，需传入该值。 存储库ID可以从云备份服务控制台获取，或者参考《云备份接口参考》的“查询存储库列表”章节查询。
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageMemberRequestBody_H_
