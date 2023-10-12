
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_BlackWhiteListBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_BlackWhiteListBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  BlackWhiteListBody
    : public ModelBase
{
public:
    BlackWhiteListBody();
    virtual ~BlackWhiteListBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BlackWhiteListBody members

    /// <summary>
    /// IP黑白名单类型（0：关闭IP黑白名单功能，1：黑名单，2：白名单）。
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// IP黑白名单列表。
    /// </summary>

    std::vector<std::string>& getIpList();
    bool ipListIsSet() const;
    void unsetipList();
    void setIpList(const std::vector<std::string>& value);


protected:
    int32_t type_;
    bool typeIsSet_;
    std::vector<std::string> ipList_;
    bool ipListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_BlackWhiteListBody_H_
