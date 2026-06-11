
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowTopObjectsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowTopObjectsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/TopObjectOverview.h>
#include <huaweicloud/rds/v3/model/TopObject.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowTopObjectsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTopObjectsResponse();
    virtual ~ShowTopObjectsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTopObjectsResponse members

    /// <summary>
    /// 更新时间
    /// </summary>

    int64_t getCurTime() const;
    bool curTimeIsSet() const;
    void unsetcurTime();
    void setCurTime(int64_t value);

    /// <summary>
    /// 明细
    /// </summary>

    std::vector<TopObject>& getTopObjectList();
    bool topObjectListIsSet() const;
    void unsettopObjectList();
    void setTopObjectList(const std::vector<TopObject>& value);

    /// <summary>
    /// 总览
    /// </summary>

    std::vector<TopObjectOverview>& getTopObjectOverviewList();
    bool topObjectOverviewListIsSet() const;
    void unsettopObjectOverviewList();
    void setTopObjectOverviewList(const std::vector<TopObjectOverview>& value);


protected:
    int64_t curTime_;
    bool curTimeIsSet_;
    std::vector<TopObject> topObjectList_;
    bool topObjectListIsSet_;
    std::vector<TopObjectOverview> topObjectOverviewList_;
    bool topObjectOverviewListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowTopObjectsResponse_H_
