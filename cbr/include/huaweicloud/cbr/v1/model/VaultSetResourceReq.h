
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultSetResourceReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultSetResourceReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 存储库设置资源自动备份开关请求体
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultSetResourceReq
    : public ModelBase
{
public:
    VaultSetResourceReq();
    virtual ~VaultSetResourceReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VaultSetResourceReq members

    /// <summary>
    /// 需要设置的资源id。
    /// </summary>

    std::vector<std::string>& getResourceIds();
    bool resourceIdsIsSet() const;
    void unsetresourceIds();
    void setResourceIds(const std::vector<std::string>& value);

    /// <summary>
    /// 设置存储库资源动作
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    std::vector<std::string> resourceIds_;
    bool resourceIdsIsSet_;
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultSetResourceReq_H_
