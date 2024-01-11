
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ListVaultResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ListVaultResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/Vault.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ListVaultResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVaultResponse();
    virtual ~ListVaultResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVaultResponse members

    /// <summary>
    /// 存储库实例列表
    /// </summary>

    std::vector<Vault>& getVaults();
    bool vaultsIsSet() const;
    void unsetvaults();
    void setVaults(const std::vector<Vault>& value);

    /// <summary>
    /// 存储库个数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 每页显示的条目数量
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量，表示从此偏移量开始查询
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 用于标识SMB服务
    /// </summary>

    std::string getSysLockSourceService() const;
    bool sysLockSourceServiceIsSet() const;
    void unsetsysLockSourceService();
    void setSysLockSourceService(const std::string& value);


protected:
    std::vector<Vault> vaults_;
    bool vaultsIsSet_;
    int32_t count_;
    bool countIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string sysLockSourceService_;
    bool sysLockSourceServiceIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ListVaultResponse_H_
