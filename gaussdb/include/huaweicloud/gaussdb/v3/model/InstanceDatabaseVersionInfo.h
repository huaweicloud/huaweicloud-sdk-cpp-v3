
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_InstanceDatabaseVersionInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_InstanceDatabaseVersionInfo_H_


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
/// 数据库版本信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  InstanceDatabaseVersionInfo
    : public ModelBase
{
public:
    InstanceDatabaseVersionInfo();
    virtual ~InstanceDatabaseVersionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceDatabaseVersionInfo members

    /// <summary>
    /// 当前数据库版本。
    /// </summary>

    std::string getCurrentVersion() const;
    bool currentVersionIsSet() const;
    void unsetcurrentVersion();
    void setCurrentVersion(const std::string& value);

    /// <summary>
    /// 当前数据库内核版本。
    /// </summary>

    std::string getCurrentKernelVersion() const;
    bool currentKernelVersionIsSet() const;
    void unsetcurrentKernelVersion();
    void setCurrentKernelVersion(const std::string& value);

    /// <summary>
    /// 最新数据库版本。
    /// </summary>

    std::string getLatestVersion() const;
    bool latestVersionIsSet() const;
    void unsetlatestVersion();
    void setLatestVersion(const std::string& value);

    /// <summary>
    /// 最新数据库内核版本。
    /// </summary>

    std::string getLatestKernelVersion() const;
    bool latestKernelVersionIsSet() const;
    void unsetlatestKernelVersion();
    void setLatestKernelVersion(const std::string& value);


protected:
    std::string currentVersion_;
    bool currentVersionIsSet_;
    std::string currentKernelVersion_;
    bool currentKernelVersionIsSet_;
    std::string latestVersion_;
    bool latestVersionIsSet_;
    std::string latestKernelVersion_;
    bool latestKernelVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_InstanceDatabaseVersionInfo_H_
