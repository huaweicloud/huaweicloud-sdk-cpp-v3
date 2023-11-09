
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_LeaguePartnerStatisticsVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_LeaguePartnerStatisticsVo_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  LeaguePartnerStatisticsVo
    : public ModelBase
{
public:
    LeaguePartnerStatisticsVo();
    virtual ~LeaguePartnerStatisticsVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LeaguePartnerStatisticsVo members

    /// <summary>
    /// 合作方访问次数
    /// </summary>

    int64_t getPartnerAccessCnt() const;
    bool partnerAccessCntIsSet() const;
    void unsetpartnerAccessCnt();
    void setPartnerAccessCnt(int64_t value);

    /// <summary>
    /// 租户别名
    /// </summary>

    std::string getPartnerDomainAlias() const;
    bool partnerDomainAliasIsSet() const;
    void unsetpartnerDomainAlias();
    void setPartnerDomainAlias(const std::string& value);

    /// <summary>
    /// 租户名
    /// </summary>

    std::string getPartnerDomainName() const;
    bool partnerDomainNameIsSet() const;
    void unsetpartnerDomainName();
    void setPartnerDomainName(const std::string& value);

    /// <summary>
    /// 作业总数
    /// </summary>

    int64_t getPartnerJobCnt() const;
    bool partnerJobCntIsSet() const;
    void unsetpartnerJobCnt();
    void setPartnerJobCnt(int64_t value);

    /// <summary>
    /// 实例总数
    /// </summary>

    int64_t getPartnerJobInsCnt() const;
    bool partnerJobInsCntIsSet() const;
    void unsetpartnerJobInsCnt();
    void setPartnerJobInsCnt(int64_t value);

    /// <summary>
    /// 实例失败数
    /// </summary>

    int64_t getPartnerJobInsFailCnt() const;
    bool partnerJobInsFailCntIsSet() const;
    void unsetpartnerJobInsFailCnt();
    void setPartnerJobInsFailCnt(int64_t value);

    /// <summary>
    /// 实例拦截数
    /// </summary>

    int64_t getPartnerJobInsInterceptCnt() const;
    bool partnerJobInsInterceptCntIsSet() const;
    void unsetpartnerJobInsInterceptCnt();
    void setPartnerJobInsInterceptCnt(int64_t value);

    /// <summary>
    /// 实例成功数
    /// </summary>

    int64_t getPartnerJobInsSuccessCnt() const;
    bool partnerJobInsSuccessCntIsSet() const;
    void unsetpartnerJobInsSuccessCnt();
    void setPartnerJobInsSuccessCnt(int64_t value);


protected:
    int64_t partnerAccessCnt_;
    bool partnerAccessCntIsSet_;
    std::string partnerDomainAlias_;
    bool partnerDomainAliasIsSet_;
    std::string partnerDomainName_;
    bool partnerDomainNameIsSet_;
    int64_t partnerJobCnt_;
    bool partnerJobCntIsSet_;
    int64_t partnerJobInsCnt_;
    bool partnerJobInsCntIsSet_;
    int64_t partnerJobInsFailCnt_;
    bool partnerJobInsFailCntIsSet_;
    int64_t partnerJobInsInterceptCnt_;
    bool partnerJobInsInterceptCntIsSet_;
    int64_t partnerJobInsSuccessCnt_;
    bool partnerJobInsSuccessCntIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_LeaguePartnerStatisticsVo_H_
