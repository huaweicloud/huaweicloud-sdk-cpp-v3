
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_UserAgentFilter_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_UserAgentFilter_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// UA黑白名单设置。
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  UserAgentFilter
    : public ModelBase
{
public:
    UserAgentFilter();
    virtual ~UserAgentFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserAgentFilter members

    /// <summary>
    /// UA黑白名单类型 off：关闭UA黑白名单; black：UA黑名单; white：UA白名单;
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 配置UA黑白名单，当type&#x3D;off时，非必传。最多配置10条规则，单条规则不超过100个字符，多条规则用“,”分割。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 配置UA黑白名单，当type&#x3D;off时，非必传。最多配置10条规则，单条规则不超过100个字符,同时配置value和ua_list时，ua_list生效。 
    /// </summary>

    std::vector<std::string>& getUaList();
    bool uaListIsSet() const;
    void unsetuaList();
    void setUaList(const std::vector<std::string>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::vector<std::string> uaList_;
    bool uaListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_UserAgentFilter_H_
