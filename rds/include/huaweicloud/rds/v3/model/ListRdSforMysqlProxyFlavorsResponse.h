
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListRdSforMysqlProxyFlavorsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListRdSforMysqlProxyFlavorsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/MysqlProxyFlavorsResponse_compute_flavor_groups.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListRdSforMysqlProxyFlavorsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRdSforMysqlProxyFlavorsResponse();
    virtual ~ListRdSforMysqlProxyFlavorsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRdSforMysqlProxyFlavorsResponse members

    /// <summary>
    /// 规格组信息。
    /// </summary>

    std::vector<MysqlProxyFlavorsResponse_compute_flavor_groups>& getComputeFlavorGroups();
    bool computeFlavorGroupsIsSet() const;
    void unsetcomputeFlavorGroups();
    void setComputeFlavorGroups(const std::vector<MysqlProxyFlavorsResponse_compute_flavor_groups>& value);


protected:
    std::vector<MysqlProxyFlavorsResponse_compute_flavor_groups> computeFlavorGroups_;
    bool computeFlavorGroupsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListRdSforMysqlProxyFlavorsResponse_H_
