
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlDatastoreWithKernelVersion_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlDatastoreWithKernelVersion_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 数据库信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlDatastoreWithKernelVersion
    : public ModelBase
{
public:
    MysqlDatastoreWithKernelVersion();
    virtual ~MysqlDatastoreWithKernelVersion();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MysqlDatastoreWithKernelVersion members

    /// <summary>
    /// 数据库引擎，现在只支持gaussdb-mysql
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据库版本。  数据库支持的详细版本信息，可调用查询数据库引擎的版本接口获取。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 数据库内核版本
    /// </summary>

    std::string getKernelVersion() const;
    bool kernelVersionIsSet() const;
    void unsetkernelVersion();
    void setKernelVersion(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string kernelVersion_;
    bool kernelVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlDatastoreWithKernelVersion_H_
