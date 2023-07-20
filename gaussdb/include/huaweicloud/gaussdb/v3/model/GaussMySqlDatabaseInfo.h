
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GaussMySqlDatabaseInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GaussMySqlDatabaseInfo_H_

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
/// 已授权数据库用户信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  GaussMySqlDatabaseInfo
    : public ModelBase
{
public:
    GaussMySqlDatabaseInfo();
    virtual ~GaussMySqlDatabaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GaussMySqlDatabaseInfo members

    /// <summary>
    /// 数据库用户名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 主机地址。
    /// </summary>

    std::string getHost() const;
    bool hostIsSet() const;
    void unsethost();
    void setHost(const std::string& value);

    /// <summary>
    /// 是否为只读权限： - true，表示只读。 - false，表示可读写。
    /// </summary>

    bool isReadonly() const;
    bool readonlyIsSet() const;
    void unsetreadonly();
    void setReadonly(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string host_;
    bool hostIsSet_;
    bool readonly_;
    bool readonlyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GaussMySqlDatabaseInfo_H_
