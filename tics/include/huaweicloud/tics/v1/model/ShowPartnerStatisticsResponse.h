
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowPartnerStatisticsResponse_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowPartnerStatisticsResponse_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tics/v1/model/LeaguePartnerStatisticsVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  ShowPartnerStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPartnerStatisticsResponse();
    virtual ~ShowPartnerStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPartnerStatisticsResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<LeaguePartnerStatisticsVo>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<LeaguePartnerStatisticsVo>& value);


protected:
    std::vector<LeaguePartnerStatisticsVo> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowPartnerStatisticsResponse_H_
