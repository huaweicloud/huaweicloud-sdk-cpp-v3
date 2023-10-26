
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_TriggerQpsDict_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_TriggerQpsDict_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// HTTP限制列表
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  TriggerQpsDict
    : public ModelBase
{
public:
    TriggerQpsDict();
    virtual ~TriggerQpsDict();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TriggerQpsDict members

    /// <summary>
    /// HTTP请求数分段ID
    /// </summary>

    int64_t getHttpRequestPosId() const;
    bool httpRequestPosIdIsSet() const;
    void unsethttpRequestPosId();
    void setHttpRequestPosId(int64_t value);

    /// <summary>
    /// 每秒HTTP请求数（个/s）阈值
    /// </summary>

    int64_t getHttpPacketPerSecond() const;
    bool httpPacketPerSecondIsSet() const;
    void unsethttpPacketPerSecond();
    void setHttpPacketPerSecond(int64_t value);


protected:
    int64_t httpRequestPosId_;
    bool httpRequestPosIdIsSet_;
    int64_t httpPacketPerSecond_;
    bool httpPacketPerSecondIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_TriggerQpsDict_H_
