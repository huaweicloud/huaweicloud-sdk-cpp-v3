
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_RegisterDmsKafkaInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_RegisterDmsKafkaInstanceRequestBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/RegisterDmsKafkaInstanceRequestBody_connect_info.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  RegisterDmsKafkaInstanceRequestBody
    : public ModelBase
{
public:
    RegisterDmsKafkaInstanceRequestBody();
    virtual ~RegisterDmsKafkaInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RegisterDmsKafkaInstanceRequestBody members

    /// <summary>
    /// kafka ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// kafka 名称
    /// </summary>

    std::string getKafkaName() const;
    bool kafkaNameIsSet() const;
    void unsetkafkaName();
    void setKafkaName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RegisterDmsKafkaInstanceRequestBody_connect_info getConnectInfo() const;
    bool connectInfoIsSet() const;
    void unsetconnectInfo();
    void setConnectInfo(const RegisterDmsKafkaInstanceRequestBody_connect_info& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string kafkaName_;
    bool kafkaNameIsSet_;
    RegisterDmsKafkaInstanceRequestBody_connect_info connectInfo_;
    bool connectInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_RegisterDmsKafkaInstanceRequestBody_H_
