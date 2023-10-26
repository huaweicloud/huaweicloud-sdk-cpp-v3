
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_DdosConfig_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_DdosConfig_H_


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
/// WeeklyReport
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  DdosConfig
    : public ModelBase
{
public:
    DdosConfig();
    virtual ~DdosConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DdosConfig members

    /// <summary>
    /// 是否开启L7层防护
    /// </summary>

    bool isEnableL7() const;
    bool enableL7IsSet() const;
    void unsetenableL7();
    void setEnableL7(bool value);

    /// <summary>
    /// 流量分段ID，取值范围：1～9
    /// </summary>

    int64_t getTrafficPosId() const;
    bool trafficPosIdIsSet() const;
    void unsettrafficPosId();
    void setTrafficPosId(int64_t value);

    /// <summary>
    /// HTTP请求数分段ID，取值范围：1～15
    /// </summary>

    int64_t getHttpRequestPosId() const;
    bool httpRequestPosIdIsSet() const;
    void unsethttpRequestPosId();
    void setHttpRequestPosId(int64_t value);

    /// <summary>
    /// 清洗时访问限制分段ID，取值范围：1～8
    /// </summary>

    int64_t getCleaningAccessPosId() const;
    bool cleaningAccessPosIdIsSet() const;
    void unsetcleaningAccessPosId();
    void setCleaningAccessPosId(int64_t value);

    /// <summary>
    /// 应用类型ID，可选取值： - 0 - 1
    /// </summary>

    int64_t getAppTypeId() const;
    bool appTypeIdIsSet() const;
    void unsetappTypeId();
    void setAppTypeId(int64_t value);


protected:
    bool enableL7_;
    bool enableL7IsSet_;
    int64_t trafficPosId_;
    bool trafficPosIdIsSet_;
    int64_t httpRequestPosId_;
    bool httpRequestPosIdIsSet_;
    int64_t cleaningAccessPosId_;
    bool cleaningAccessPosIdIsSet_;
    int64_t appTypeId_;
    bool appTypeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_DdosConfig_H_
