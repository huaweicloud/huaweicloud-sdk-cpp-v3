
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlProxyFlavorGroups_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlProxyFlavorGroups_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/MysqlProxyComputeFlavor.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlProxyFlavorGroups
    : public ModelBase
{
public:
    MysqlProxyFlavorGroups();
    virtual ~MysqlProxyFlavorGroups();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlProxyFlavorGroups members

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

    std::vector<MysqlProxyComputeFlavor>& getProxyFlavors();
    bool proxyFlavorsIsSet() const;
    void unsetproxyFlavors();
    void setProxyFlavors(const std::vector<MysqlProxyComputeFlavor>& value);


protected:
    std::string groupType_;
    bool groupTypeIsSet_;
    std::vector<MysqlProxyComputeFlavor> proxyFlavors_;
    bool proxyFlavorsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlProxyFlavorGroups_H_
