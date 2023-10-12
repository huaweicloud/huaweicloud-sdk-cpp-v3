
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlDatastoreInRes_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlDatastoreInRes_H_


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
/// 数据库信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlDatastoreInRes
    : public ModelBase
{
public:
    MysqlDatastoreInRes();
    virtual ~MysqlDatastoreInRes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlDatastoreInRes members

    /// <summary>
    /// 数据库引擎，现在只支持gaussdb-mysql。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据库版本。  两位数的大版本号，获取方法请参见[查询数据库引擎的版本](https://support.huaweicloud.com/api-gaussdb/ShowGaussMySqlEngineVersion.html)返回的name字段。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 内核数据库版本。  完整的四位内核数据库版本号，获取方法请参见[查询数据库引擎的版本](https://support.huaweicloud.com/api-gaussdb/ShowGaussMySqlEngineVersion.html)返回的kernel_version字段。
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlDatastoreInRes_H_
