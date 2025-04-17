
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_LtsConfigRequestAndResponse_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_LtsConfigRequestAndResponse_H_


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
/// 日志配置请求
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  LtsConfigRequestAndResponse
    : public ModelBase
{
public:
    LtsConfigRequestAndResponse();
    virtual ~LtsConfigRequestAndResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LtsConfigRequestAndResponse members

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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_LtsConfigRequestAndResponse_H_
