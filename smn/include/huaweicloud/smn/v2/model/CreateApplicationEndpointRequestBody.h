
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_CreateApplicationEndpointRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_CreateApplicationEndpointRequestBody_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  CreateApplicationEndpointRequestBody
    : public ModelBase
{
public:
    CreateApplicationEndpointRequestBody();
    virtual ~CreateApplicationEndpointRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateApplicationEndpointRequestBody members

    /// <summary>
    /// 移动应用设备token，最大长度512个字节。
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);

    /// <summary>
    /// 用户自定义数据，最大长度支持UTF-8编码后2048字节。
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


protected:
    std::string token_;
    bool tokenIsSet_;
    std::string userData_;
    bool userDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_CreateApplicationEndpointRequestBody_H_
