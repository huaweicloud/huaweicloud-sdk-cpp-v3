
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowSummaryUsageDataResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowSummaryUsageDataResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowSummaryUsageDataResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSummaryUsageDataResponse();
    virtual ~ShowSummaryUsageDataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSummaryUsageDataResponse members

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 业务类型 * LIVE_2D：分身数字人视频直播 * VIDEO_2D：分身数字人视频制作
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// 使用个数(视频制作的视频个数,直播的场次)
    /// </summary>

    int32_t getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(int32_t value);

    /// <summary>
    /// 使用量
    /// </summary>

    float getUsage() const;
    bool usageIsSet() const;
    void unsetusage();
    void setUsage(float value);

    /// <summary>
    /// 使用量的单位。 * MIN：分钟 * HOUR：小时
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string businessType_;
    bool businessTypeIsSet_;
    int32_t number_;
    bool numberIsSet_;
    float usage_;
    bool usageIsSet_;
    std::string unit_;
    bool unitIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowSummaryUsageDataResponse_H_
