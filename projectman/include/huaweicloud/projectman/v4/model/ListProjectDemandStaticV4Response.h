
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectDemandStaticV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectDemandStaticV4Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/DemandStatisticResponseV4.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectDemandStaticV4Response
    : public ModelBase, public HttpResponse
{
public:
    ListProjectDemandStaticV4Response();
    virtual ~ListProjectDemandStaticV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectDemandStaticV4Response members

    /// <summary>
    /// 需求统计
    /// </summary>

    std::vector<DemandStatisticResponseV4>& getDemandStatistics();
    bool demandStatisticsIsSet() const;
    void unsetdemandStatistics();
    void setDemandStatistics(const std::vector<DemandStatisticResponseV4>& value);


protected:
    std::vector<DemandStatisticResponseV4> demandStatistics_;
    bool demandStatisticsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectDemandStaticV4Response_H_
