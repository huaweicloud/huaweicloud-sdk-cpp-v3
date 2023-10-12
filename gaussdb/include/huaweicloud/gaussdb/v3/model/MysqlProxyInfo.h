
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlProxyInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlProxyInfo_H_


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
/// Proxy信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlProxyInfo
    : public ModelBase
{
public:
    MysqlProxyInfo();
    virtual ~MysqlProxyInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlProxyInfo members

    /// <summary>
    /// Proxy实例ID。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// Proxy实例名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// Proxy读写分离地址。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);


protected:
    std::string poolId_;
    bool poolIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string address_;
    bool addressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlProxyInfo_H_
