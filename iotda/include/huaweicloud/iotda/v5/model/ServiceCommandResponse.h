
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServiceCommandResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServiceCommandResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/ServiceCommandPara.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 命令参数响应对象。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ServiceCommandResponse
    : public ModelBase
{
public:
    ServiceCommandResponse();
    virtual ~ServiceCommandResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceCommandResponse members

    /// <summary>
    /// **参数说明**：设备命令响应名称。 **取值范围**：长度不超过128，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getResponseName() const;
    bool responseNameIsSet() const;
    void unsetresponseName();
    void setResponseName(const std::string& value);

    /// <summary>
    /// **参数说明**：设备命令响应的参数列表。
    /// </summary>

    std::vector<ServiceCommandPara>& getParas();
    bool parasIsSet() const;
    void unsetparas();
    void setParas(const std::vector<ServiceCommandPara>& value);


protected:
    std::string responseName_;
    bool responseNameIsSet_;
    std::vector<ServiceCommandPara> paras_;
    bool parasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServiceCommandResponse_H_
