
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_UpdateAntiDDosServiceRequestBody_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_UpdateAntiDDosServiceRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  UpdateAntiDDosServiceRequestBody
    : public ModelBase
{
public:
    UpdateAntiDDosServiceRequestBody();
    virtual ~UpdateAntiDDosServiceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAntiDDosServiceRequestBody members

    /// <summary>
    /// 应用类型ID，固定值为0
    /// </summary>

    int32_t getAppTypeId() const;
    bool appTypeIdIsSet() const;
    void unsetappTypeId();
    void setAppTypeId(int32_t value);

    /// <summary>
    /// 清洗时访问限制分段ID，取值范围：1：10M;2：30M;3：50M;4：70M;5：100M;6：150M;7：200M;8：250M;9：300M;10：500M;11：800M;88：1000M;99：默认防护。
    /// </summary>

    int32_t getCleaningAccessPosId() const;
    bool cleaningAccessPosIdIsSet() const;
    void unsetcleaningAccessPosId();
    void setCleaningAccessPosId(int32_t value);

    /// <summary>
    /// 是否开启L7层防护，固定值为fasle
    /// </summary>

    bool isEnableL7() const;
    bool enableL7IsSet() const;
    void unsetenableL7();
    void setEnableL7(bool value);

    /// <summary>
    /// HTTP请求数分段ID，固定值为1
    /// </summary>

    int32_t getHttpRequestPosId() const;
    bool httpRequestPosIdIsSet() const;
    void unsethttpRequestPosId();
    void setHttpRequestPosId(int32_t value);

    /// <summary>
    /// 流量分段ID，取值范围：1：10M;2：30M;3：50M;4：70M;5：100M;6：150M;7：200M;8：250M;9：300M;10：500M;11：800M;88：1000M;99：默认防护。
    /// </summary>

    int32_t getTrafficPosId() const;
    bool trafficPosIdIsSet() const;
    void unsettrafficPosId();
    void setTrafficPosId(int32_t value);


protected:
    int32_t appTypeId_;
    bool appTypeIdIsSet_;
    int32_t cleaningAccessPosId_;
    bool cleaningAccessPosIdIsSet_;
    bool enableL7_;
    bool enableL7IsSet_;
    int32_t httpRequestPosId_;
    bool httpRequestPosIdIsSet_;
    int32_t trafficPosId_;
    bool trafficPosIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_UpdateAntiDDosServiceRequestBody_H_
