
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeDatabasesSingleInstance_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeDatabasesSingleInstance_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpgradeDatabasesSingleInstance
    : public ModelBase
{
public:
    UpgradeDatabasesSingleInstance();
    virtual ~UpgradeDatabasesSingleInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeDatabasesSingleInstance members

    /// <summary>
    /// 实例当前的内核版本。
    /// </summary>

    std::string getCurrentVersion() const;
    bool currentVersionIsSet() const;
    void unsetcurrentVersion();
    void setCurrentVersion(const std::string& value);

    /// <summary>
    /// 实例id。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);


protected:
    std::string currentVersion_;
    bool currentVersionIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeDatabasesSingleInstance_H_
