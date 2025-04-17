
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ShowLogConfigResponse_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ShowLogConfigResponse_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/antiddos/v1/model/LtsConfigRequestAndResponse_lts_id_info.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  ShowLogConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowLogConfigResponse();
    virtual ~ShowLogConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLogConfigResponse members

    /// <summary>
    /// 是否开启日志
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// 
    /// </summary>

    LtsConfigRequestAndResponse_lts_id_info getLtsIdInfo() const;
    bool ltsIdInfoIsSet() const;
    void unsetltsIdInfo();
    void setLtsIdInfo(const LtsConfigRequestAndResponse_lts_id_info& value);


protected:
    bool enabled_;
    bool enabledIsSet_;
    LtsConfigRequestAndResponse_lts_id_info ltsIdInfo_;
    bool ltsIdInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ShowLogConfigResponse_H_
