
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonInstanceRollbackRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonInstanceRollbackRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AddonInstanceRollbackRequest
    : public ModelBase
{
public:
    AddonInstanceRollbackRequest();
    virtual ~AddonInstanceRollbackRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddonInstanceRollbackRequest members

    /// <summary>
    /// 集群ID
    /// </summary>

    std::string getClusterID() const;
    bool clusterIDIsSet() const;
    void unsetclusterID();
    void setClusterID(const std::string& value);


protected:
    std::string clusterID_;
    bool clusterIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonInstanceRollbackRequest_H_
