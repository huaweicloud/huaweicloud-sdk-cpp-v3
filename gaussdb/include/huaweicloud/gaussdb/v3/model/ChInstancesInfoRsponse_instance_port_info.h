
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstancesInfoRsponse_instance_port_info_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstancesInfoRsponse_instance_port_info_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 端口信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChInstancesInfoRsponse_instance_port_info
    : public ModelBase
{
public:
    ChInstancesInfoRsponse_instance_port_info();
    virtual ~ChInstancesInfoRsponse_instance_port_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChInstancesInfoRsponse_instance_port_info members

    /// <summary>
    /// tep端口。取值范围：0~65535。
    /// </summary>

    int32_t getTepPort() const;
    bool tepPortIsSet() const;
    void unsettepPort();
    void setTepPort(int32_t value);

    /// <summary>
    /// http端口。取值范围：0~65535。
    /// </summary>

    int32_t getHttpPort() const;
    bool httpPortIsSet() const;
    void unsethttpPort();
    void setHttpPort(int32_t value);

    /// <summary>
    /// MySql端口号。取值范围：0~65535。
    /// </summary>

    int32_t getMysqlPort() const;
    bool mysqlPortIsSet() const;
    void unsetmysqlPort();
    void setMysqlPort(int32_t value);

    /// <summary>
    /// https端口号。取值范围：0~65535。
    /// </summary>

    int32_t getHttpsPort() const;
    bool httpsPortIsSet() const;
    void unsethttpsPort();
    void setHttpsPort(int32_t value);

    /// <summary>
    /// tep安全端口。取值范围：0~65535。
    /// </summary>

    int32_t getTepSecurePort() const;
    bool tepSecurePortIsSet() const;
    void unsettepSecurePort();
    void setTepSecurePort(int32_t value);


protected:
    int32_t tepPort_;
    bool tepPortIsSet_;
    int32_t httpPort_;
    bool httpPortIsSet_;
    int32_t mysqlPort_;
    bool mysqlPortIsSet_;
    int32_t httpsPort_;
    bool httpsPortIsSet_;
    int32_t tepSecurePort_;
    bool tepSecurePortIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstancesInfoRsponse_instance_port_info_H_
