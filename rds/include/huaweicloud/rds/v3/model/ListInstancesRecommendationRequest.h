
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesRecommendationRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesRecommendationRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListInstancesRecommendationRequest
    : public ModelBase
{
public:
    ListInstancesRecommendationRequest();
    virtual ~ListInstancesRecommendationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstancesRecommendationRequest members

    /// <summary>
    /// 引擎类型
    /// </summary>

    std::string getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const std::string& value);


protected:
    std::string engine_;
    bool engineIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListInstancesRecommendationRequest& dereference_from_shared_ptr(std::shared_ptr<ListInstancesRecommendationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesRecommendationRequest_H_
