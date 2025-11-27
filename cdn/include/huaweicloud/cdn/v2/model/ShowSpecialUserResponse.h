
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowSpecialUserResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowSpecialUserResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowSpecialUserResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSpecialUserResponse();
    virtual ~ShowSpecialUserResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSpecialUserResponse members

    /// <summary>
    /// 1表示用户可以查询总请求时长枚举，0表示用户不可以查询总请求时长枚举
    /// </summary>

    int64_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int64_t value);

    /// <summary>
    /// 进制
    /// </summary>

    int64_t getMetric() const;
    bool metricIsSet() const;
    void unsetmetric();
    void setMetric(int64_t value);

    /// <summary>
    /// 流量进制
    /// </summary>

    int64_t getFluxMetric() const;
    bool fluxMetricIsSet() const;
    void unsetfluxMetric();
    void setFluxMetric(int64_t value);

    /// <summary>
    /// 1表示用户可以，0表示用户不可以。是否是开放国家及地区界面用户
    /// </summary>

    int64_t getCy() const;
    bool cyIsSet() const;
    void unsetcy();
    void setCy(int64_t value);

    /// <summary>
    /// 1表示用户可以查询ipv6流量,https流量，0表示用户不可以
    /// </summary>

    int64_t getH6() const;
    bool h6IsSet() const;
    void unseth6();
    void setH6(int64_t value);

    /// <summary>
    /// 1表示用户可以查询具体的状态码详情，0表示用户不可以
    /// </summary>

    int64_t getC() const;
    bool CIsSet() const;
    void unsetc();
    void setC(int64_t value);

    /// <summary>
    /// 1表示用户查询 top url 时要返回http状态码，0表示用户不返回
    /// </summary>

    int64_t getSc() const;
    bool scIsSet() const;
    void unsetsc();
    void setSc(int64_t value);

    /// <summary>
    /// 1表示该用户可以查询回源状态码，0表示不可以
    /// </summary>

    int64_t getBhc() const;
    bool bhcIsSet() const;
    void unsetbhc();
    void setBhc(int64_t value);

    /// <summary>
    /// 1表示该用户可以查询protocol和IPVersion，0表示用户不可以
    /// </summary>

    int64_t getPi() const;
    bool piIsSet() const;
    void unsetpi();
    void setPi(int64_t value);

    /// <summary>
    /// 1表示该用户可以查询租户界面5分钟粒度数据导出白名单，0表示用户不可以
    /// </summary>

    int64_t getExp5() const;
    bool exp5IsSet() const;
    void unsetexp5();
    void setExp5(int64_t value);

    /// <summary>
    /// 1表示该用户可以查询1分钟粒度统计数据，0表示用户不可以
    /// </summary>

    int64_t getM1() const;
    bool m1IsSet() const;
    void unsetm1();
    void setM1(int64_t value);

    /// <summary>
    /// 1表示该用户可以查询1个月5分钟粒度统计数据，0表示用户不可以
    /// </summary>

    int64_t getIsMonthM5() const;
    bool isMonthM5IsSet() const;
    void unsetisMonthM5();
    void setIsMonthM5(int64_t value);

    /// <summary>
    /// 1表示该用户可以在租户界面指定下载链接可用范围，0表示用户不可以
    /// </summary>

    int64_t getExpAgy() const;
    bool expAgyIsSet() const;
    void unsetexpAgy();
    void setExpAgy(int64_t value);

    /// <summary>
    /// 1表示该用户可以是否上报到国际站CES，0表示用户不可以
    /// </summary>

    int64_t getCesReportSite() const;
    bool cesReportSiteIsSet() const;
    void unsetcesReportSite();
    void setCesReportSite(int64_t value);

    /// <summary>
    /// 1表示该用户按上浮系数展示数据，0表示用户不可以
    /// </summary>

    int64_t getFloat() const;
    bool floatIsSet() const;
    void unsetfloat();
    void setFloat(int64_t value);

    /// <summary>
    /// 1表示该用户允许查询入网带宽，0表示用户不可以
    /// </summary>

    int64_t getIsShowUpBw() const;
    bool isShowUpBwIsSet() const;
    void unsetisShowUpBw();
    void setIsShowUpBw(int64_t value);


protected:
    int64_t status_;
    bool statusIsSet_;
    int64_t metric_;
    bool metricIsSet_;
    int64_t fluxMetric_;
    bool fluxMetricIsSet_;
    int64_t cy_;
    bool cyIsSet_;
    int64_t h6_;
    bool h6IsSet_;
    int64_t c_;
    bool cIsSet_;
    int64_t sc_;
    bool scIsSet_;
    int64_t bhc_;
    bool bhcIsSet_;
    int64_t pi_;
    bool piIsSet_;
    int64_t exp5_;
    bool exp5IsSet_;
    int64_t m1_;
    bool m1IsSet_;
    int64_t isMonthM5_;
    bool isMonthM5IsSet_;
    int64_t expAgy_;
    bool expAgyIsSet_;
    int64_t cesReportSite_;
    bool cesReportSiteIsSet_;
    int64_t float_;
    bool floatIsSet_;
    int64_t isShowUpBw_;
    bool isShowUpBwIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowSpecialUserResponse_H_
