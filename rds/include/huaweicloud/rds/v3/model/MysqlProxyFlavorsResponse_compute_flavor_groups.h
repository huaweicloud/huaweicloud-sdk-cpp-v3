
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlProxyFlavorsResponse_compute_flavor_groups_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlProxyFlavorsResponse_compute_flavor_groups_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/MysqlProxyFlavorsResponse_compute_flavors.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  MysqlProxyFlavorsResponse_compute_flavor_groups
    : public ModelBase
{
public:
    MysqlProxyFlavorsResponse_compute_flavor_groups();
    virtual ~MysqlProxyFlavorsResponse_compute_flavor_groups();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlProxyFlavorsResponse_compute_flavor_groups members

    /// <summary>
    /// 规格组类型，如x86、arm。
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);

    /// <summary>
    /// 规格信息。
    /// </summary>

    std::vector<MysqlProxyFlavorsResponse_compute_flavors>& getComputeFlavors();
    bool computeFlavorsIsSet() const;
    void unsetcomputeFlavors();
    void setComputeFlavors(const std::vector<MysqlProxyFlavorsResponse_compute_flavors>& value);


protected:
    std::string groupType_;
    bool groupTypeIsSet_;
    std::vector<MysqlProxyFlavorsResponse_compute_flavors> computeFlavors_;
    bool computeFlavorsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlProxyFlavorsResponse_compute_flavor_groups_H_
