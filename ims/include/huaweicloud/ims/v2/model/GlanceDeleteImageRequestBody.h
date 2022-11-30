
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceDeleteImageRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceDeleteImageRequestBody_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 请求参数
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  GlanceDeleteImageRequestBody
    : public ModelBase
{
public:
    GlanceDeleteImageRequestBody();
    virtual ~GlanceDeleteImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceDeleteImageRequestBody members

    /// <summary>
    /// 取值为：true和false true：表示删除整机镜像时，同时删除其关联的云服务器备份。 false：表示只删除整机镜像，不删除其关联的云服务器备份。
    /// </summary>

    bool isDeleteBackup() const;
    bool deleteBackupIsSet() const;
    void unsetdeleteBackup();
    void setDeleteBackup(bool value);


protected:
    bool deleteBackup_;
    bool deleteBackupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceDeleteImageRequestBody_H_
