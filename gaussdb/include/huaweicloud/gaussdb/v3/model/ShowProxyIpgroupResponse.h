
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowProxyIpgroupResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowProxyIpgroupResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowProxyIpgroupResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProxyIpgroupResponse();
    virtual ~ShowProxyIpgroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProxyIpgroupResponse members

    /// <summary>
    /// 允许访问控制或者不允许 true | false。
    /// </summary>

    bool isEnableIpGroup() const;
    bool enableIpGroupIsSet() const;
    void unsetenableIpGroup();
    void setEnableIpGroup(bool value);

    /// <summary>
    /// 白名单或者黑名单 &#39;white&#39; | &#39;black&#39;
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 白名单或黑名单详细信息
    /// </summary>

    Object getIpGroup() const;
    bool ipGroupIsSet() const;
    void unsetipGroup();
    void setIpGroup(const Object& value);


protected:
    bool enableIpGroup_;
    bool enableIpGroupIsSet_;
    std::string type_;
    bool typeIsSet_;
    Object ipGroup_;
    bool ipGroupIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowProxyIpgroupResponse_H_
