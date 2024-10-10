
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_Backend_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_Backend_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// backend
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  Backend
    : public ModelBase
{
public:
    Backend();
    virtual ~Backend();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Backend members

    /// <summary>
    /// 当前后端协议
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 当前后端端口
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// 当前后端 Host 值
    /// </summary>

    std::string getHost() const;
    bool hostIsSet() const;
    void unsethost();
    void setHost(const std::string& value);


protected:
    std::string protocol_;
    bool protocolIsSet_;
    int32_t port_;
    bool portIsSet_;
    std::string host_;
    bool hostIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_Backend_H_
