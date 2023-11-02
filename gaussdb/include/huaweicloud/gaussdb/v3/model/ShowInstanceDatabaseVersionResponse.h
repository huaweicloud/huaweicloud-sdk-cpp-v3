
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceDatabaseVersionResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceDatabaseVersionResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/InstanceDatabaseVersionInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowInstanceDatabaseVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInstanceDatabaseVersionResponse();
    virtual ~ShowInstanceDatabaseVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInstanceDatabaseVersionResponse members

    /// <summary>
    /// 
    /// </summary>

    InstanceDatabaseVersionInfo getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const InstanceDatabaseVersionInfo& value);

    /// <summary>
    /// 是否可升级。 - true：是。 - false：否。
    /// </summary>

    bool isUpgradeFlag() const;
    bool upgradeFlagIsSet() const;
    void unsetupgradeFlag();
    void setUpgradeFlag(bool value);


protected:
    InstanceDatabaseVersionInfo datastore_;
    bool datastoreIsSet_;
    bool upgradeFlag_;
    bool upgradeFlagIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceDatabaseVersionResponse_H_
