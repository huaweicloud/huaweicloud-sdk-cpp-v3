
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationEndpointAttributesResponseBody_attributes_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationEndpointAttributesResponseBody_attributes_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 属性列表。
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListApplicationEndpointAttributesResponseBody_attributes
    : public ModelBase
{
public:
    ListApplicationEndpointAttributesResponseBody_attributes();
    virtual ~ListApplicationEndpointAttributesResponseBody_attributes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListApplicationEndpointAttributesResponseBody_attributes members

    /// <summary>
    /// 设备是否可用。
    /// </summary>

    std::string getEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(const std::string& value);

    /// <summary>
    /// 设备token。
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);

    /// <summary>
    /// 用户数据。
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


protected:
    std::string enabled_;
    bool enabledIsSet_;
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

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationEndpointAttributesResponseBody_attributes_H_
