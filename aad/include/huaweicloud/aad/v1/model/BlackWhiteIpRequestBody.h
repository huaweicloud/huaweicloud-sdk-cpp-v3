
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_BlackWhiteIpRequestBody_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_BlackWhiteIpRequestBody_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 黑白名单请求体
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  BlackWhiteIpRequestBody
    : public ModelBase
{
public:
    BlackWhiteIpRequestBody();
    virtual ~BlackWhiteIpRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BlackWhiteIpRequestBody members

    /// <summary>
    /// 类型。white：白名单，black：黑名单
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// ip列表
    /// </summary>

    std::vector<std::string>& getIpList();
    bool ipListIsSet() const;
    void unsetipList();
    void setIpList(const std::vector<std::string>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::vector<std::string> ipList_;
    bool ipListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_BlackWhiteIpRequestBody_H_
