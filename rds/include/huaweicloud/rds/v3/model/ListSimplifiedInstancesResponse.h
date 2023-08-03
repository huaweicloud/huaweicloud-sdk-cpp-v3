
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSimplifiedInstancesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSimplifiedInstancesResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SimplifiedInstanceEntry.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListSimplifiedInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSimplifiedInstancesResponse();
    virtual ~ListSimplifiedInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSimplifiedInstancesResponse members

    /// <summary>
    /// 实例集合
    /// </summary>

    std::vector<SimplifiedInstanceEntry>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<SimplifiedInstanceEntry>& value);


protected:
    std::vector<SimplifiedInstanceEntry> instances_;
    bool instancesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSimplifiedInstancesResponse_H_
