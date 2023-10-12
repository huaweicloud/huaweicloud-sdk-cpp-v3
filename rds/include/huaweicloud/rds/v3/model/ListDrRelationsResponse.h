
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDrRelationsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDrRelationsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/Instance_dr_relation.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListDrRelationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDrRelationsResponse();
    virtual ~ListDrRelationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDrRelationsResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<Instance_dr_relation>& getInstanceDrRelations();
    bool instanceDrRelationsIsSet() const;
    void unsetinstanceDrRelations();
    void setInstanceDrRelations(const std::vector<Instance_dr_relation>& value);


protected:
    std::vector<Instance_dr_relation> instanceDrRelations_;
    bool instanceDrRelationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDrRelationsResponse_H_
