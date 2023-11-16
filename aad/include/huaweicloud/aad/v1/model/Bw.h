
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_Bw_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_Bw_H_


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
/// 黑白名单详情
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  Bw
    : public ModelBase
{
public:
    Bw();
    virtual ~Bw();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Bw members

    /// <summary>
    /// 黑名单列表
    /// </summary>

    std::vector<std::string>& getBlackIpList();
    bool blackIpListIsSet() const;
    void unsetblackIpList();
    void setBlackIpList(const std::vector<std::string>& value);

    /// <summary>
    /// 白名单列表
    /// </summary>

    std::vector<std::string>& getWhiteIpList();
    bool whiteIpListIsSet() const;
    void unsetwhiteIpList();
    void setWhiteIpList(const std::vector<std::string>& value);


protected:
    std::vector<std::string> blackIpList_;
    bool blackIpListIsSet_;
    std::vector<std::string> whiteIpList_;
    bool whiteIpListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_Bw_H_
