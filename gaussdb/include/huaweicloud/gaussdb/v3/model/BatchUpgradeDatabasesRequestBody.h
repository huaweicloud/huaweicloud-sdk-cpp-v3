
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchUpgradeDatabasesRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchUpgradeDatabasesRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/UpgradeDatabasesSingleInstance.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BatchUpgradeDatabasesRequestBody
    : public ModelBase
{
public:
    BatchUpgradeDatabasesRequestBody();
    virtual ~BatchUpgradeDatabasesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpgradeDatabasesRequestBody members

    /// <summary>
    /// 要版本升级的批量实例。
    /// </summary>

    std::vector<UpgradeDatabasesSingleInstance>& getDatabasesInstanceInfos();
    bool databasesInstanceInfosIsSet() const;
    void unsetdatabasesInstanceInfos();
    void setDatabasesInstanceInfos(const std::vector<UpgradeDatabasesSingleInstance>& value);

    /// <summary>
    /// 是否延迟升级。
    /// </summary>

    std::string getDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(const std::string& value);


protected:
    std::vector<UpgradeDatabasesSingleInstance> databasesInstanceInfos_;
    bool databasesInstanceInfosIsSet_;
    std::string delay_;
    bool delayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchUpgradeDatabasesRequestBody_H_
