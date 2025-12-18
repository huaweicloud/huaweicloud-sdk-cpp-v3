
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_GetClusterLongAkskConfigResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_GetClusterLongAkskConfigResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  GetClusterLongAkskConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    GetClusterLongAkskConfigResponse();
    virtual ~GetClusterLongAkskConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetClusterLongAkskConfigResponse members

    /// <summary>
    /// **参数解释：** 集群是否上传了LongAKSK。 **约束限制：** 不涉及 **取值范围：** - false: 未上传LongAKSK - true: 已上传LongAKSK  **默认取值：** 不涉及
    /// </summary>

    bool isHasUploadedLongAKSK() const;
    bool hasUploadedLongAKSKIsSet() const;
    void unsethasUploadedLongAKSK();
    void setHasUploadedLongAKSK(bool value);

    /// <summary>
    /// **参数解释：** 是否启用LongAKSK，启用后在集群kube-system命名空间下会创建名称为paas.longaksk的密钥，关闭则会删除该密钥。 **约束限制：** 不涉及 **取值范围：** - false: 禁用LongAKSK - true: 启用LongAKSK  **默认取值：** 不涉及
    /// </summary>

    bool isEnableLongAKSK() const;
    bool enableLongAKSKIsSet() const;
    void unsetenableLongAKSK();
    void setEnableLongAKSK(bool value);


protected:
    bool hasUploadedLongAKSK_;
    bool hasUploadedLongAKSKIsSet_;
    bool enableLongAKSK_;
    bool enableLongAKSKIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_GetClusterLongAkskConfigResponse_H_
