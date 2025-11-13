
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdateLtsConfigRequestBody_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdateLtsConfigRequestBody_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/UpdateLtsConfigRequestBody_lts_id_info.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新日志配置请求体
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  UpdateLtsConfigRequestBody
    : public ModelBase
{
public:
    UpdateLtsConfigRequestBody();
    virtual ~UpdateLtsConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLtsConfigRequestBody members

    /// <summary>
    /// 日志配置开关
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// 
    /// </summary>

    UpdateLtsConfigRequestBody_lts_id_info getLtsIdInfo() const;
    bool ltsIdInfoIsSet() const;
    void unsetltsIdInfo();
    void setLtsIdInfo(const UpdateLtsConfigRequestBody_lts_id_info& value);


protected:
    bool enabled_;
    bool enabledIsSet_;
    UpdateLtsConfigRequestBody_lts_id_info ltsIdInfo_;
    bool ltsIdInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdateLtsConfigRequestBody_H_
