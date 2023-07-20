
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ModifyPortRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ModifyPortRequestBody_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ModifyPortRequestBody
    : public ModelBase
{
public:
    ModifyPortRequestBody();
    virtual ~ModifyPortRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyPortRequestBody members

    /// <summary>
    /// 新端口号。端口有效范围为2100~9500，暂不支持8636、8637和8638。GaussDB(for Mongo)副本集4.0数据库实例端口有效范围为2100~9500，暂不支持8636、8637和8638。 GaussDB(for Cassandra)数据库实例端口有效范围为2100~9500，暂不支持7000，7001，7199，8636，8479，8484，8999，8018，2180，2887，3887，8079，8091，8092。 GaussDB(for Redis)数据库实例端口有效范围为1024~65535，暂不支持2180、2887、3887、6377、6378、6380、8018、8079、8091、8479、8484、8999、12017、12333、50069。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);


protected:
    int32_t port_;
    bool portIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ModifyPortRequestBody_H_
